/** Original specialty (65173c) and ordered candidate selection (4e21e4).
 * Candidates must already be in the original sort order. field2c is deliberately
 * unnamed until its meaning is established from the original controls.
 */
export function playerSpecialty({role,trait1:a,trait2:b}) {
 switch(role){
 case 0:case 2:return 0;
 case 1:
  if(a===13||a===6)return 1;
  if(a===7||a===10)return 0;
  // Original repeats trait1===6 here; do not substitute trait2.
  if(b===13||a===6)return 1;
  if(b===7||b===10)return 0;
  return [8,9,11,4].includes(a)?1:0;
 case 3:
  if([11,9,8,4].includes(a))return 1;
  if(a===7||a===10)return 0;
  if([11,9,8,4].includes(b))return 1;
  if(b===7||b===10)return 0;
  return 1;
 case 4:
  if(a===7||a===10)return 0;
  return [8,13,6].includes(a)?2:1;
 default:throw RangeError('Original player role must be 0–4.');
 }
}
export function selectLineupCandidate(candidates,priority,position){return selectCandidate(candidates,priority,position,false);}
export function selectHumanCandidate(candidates,priority,position){return selectCandidate(candidates,priority,position,true);}
function selectCandidate(candidates,priority,position,human){
 const [role,field,specialty]=priority;
 const back=position>=3&&position<=8;
 let roles=[role],desiredSpecialty=specialty,comparisonSpecialty=specialty,comparisonField=field,result=-1;
 if(position===1&&!human)roles=[role,1,2];
 if(position===10||position===17)roles=[role,3];
 if(back)roles=[role,3,1];
 if(position>=14&&position<=16)roles=[role,1,4];
 if(position>=18){roles=[role,3];desiredSpecialty=1;}
 if(position===2||position===9)roles=[role,3,2];
 for(let pass=0;pass<roles.length;pass++){
  let innerPasses=3;
  if(pass>0){
   if(position===10||position===17)desiredSpecialty=1;
   if(pass===1&&back)innerPasses=1;
   if(pass===2&&back)desiredSpecialty=-1;
  }
  for(let inner=1;inner<=innerPasses;inner++){
   for(const candidate of (human?[...candidates].reverse():candidates)){
    if(inner===1){
     if(position>=18)desiredSpecialty=-1;
     comparisonSpecialty=desiredSpecialty===-1?candidate.specialty:desiredSpecialty;
     comparisonField=field===-1?candidate.field2c:field;
    }else if(inner===2)comparisonField=candidate.field2c;
    else{comparisonSpecialty=candidate.specialty;comparisonField=candidate.field2c;}
    if(desiredSpecialty===-1)comparisonSpecialty=candidate.specialty;
    if(pass===1&&back){comparisonSpecialty=0;comparisonField=candidate.field2c;}
    if(!candidate.selected&&candidate.role===roles[pass]&&candidate.specialty===comparisonSpecialty&&candidate.field2c===comparisonField){
     candidate.selected=human?(specialty===12?2:1):true;result=candidate.id;break;
    }
   }
   if(result>=0)break;
  }
  if(result>=0)return result;
 }
 return result;
}

/** 4bcdb0 with comparator 4e21a8. Ties are not stable for nine or more
 * records, so JavaScript's built-in stable sort changes original lineups.
 */
export function sortLineupCandidates(rows){
 return originalCandidateSort(rows,(a,b)=>a.rating===b.rating?Math.sign(b.condition-a.condition):Math.sign(b.rating-a.rating));
}
export function sortHumanCandidates(rows){
 return originalCandidateSort(rows,(a,b)=>a.skill!==b.skill?Math.sign(a.skill-b.skill):a.condition!==b.condition?Math.sign(a.condition-b.condition):Math.sign(a.field10-b.field10));
}
export function originalCandidateSort(rows,compare){
 const swap=(a,b)=>{[rows[a],rows[b]]=[rows[b],rows[a]];};
 const sort=(left,right)=>{
  if(left>=right)return;
  if(right-left<8){
   for(let i=left+1;i<=right;i++){
    const row=rows[i];let j=i;
    while(j>left&&compare(rows[j-1],row)>0){rows[j]=rows[j-1];j--;}
    rows[j]=row;
   }
   return;
  }
  const middle=(left+right)>>1;
  // The first median comparison in the binary swaps the middle with itself.
  if(compare(rows[middle],rows[right])>0)swap(middle,right);
  if(compare(rows[left],rows[middle])>0)swap(left,middle);
  const pivot=rows[middle];let i=left-1,j=right+1;
  for(;;){
   do{i++;}while(compare(rows[i],pivot)<0);
   do{j--;}while(compare(pivot,rows[j])<0);
   if(j<=i)break;
   swap(i,j);
  }
  sort(left,j);sort(j+1,right);
 };
 sort(0,rows.length-1);return rows;
}

/** Original roster comparator5e52bc: ascending role order, skill, fitness. */
export function sortRosterCandidates(rows){
 return originalCandidateSort(rows,(a,b)=>a.roleOrder!==b.roleOrder?Math.sign(a.roleOrder-b.roleOrder):a.skill!==b.skill?Math.sign(a.skill-b.skill):Math.sign(a.condition-b.condition));
}
