import {record} from './save-format.mjs';
import {findLeagueConfiguration} from './weekly-team.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);

/** Whole6547c4/654844: first inactive, non-human manager in record order.
 * Employment is tested by byte40, not the manager's stored club ID. */
export function findAvailableManager(save,country,division){
 const count=save.sections.find(s=>s.name==='records_0066b718').count;
 for(let id=0;id<count;id++){
  const m=view(record(save,'records_0066b718',id));
  if(m.getUint8(0x40)===0&&m.getUint8(0x31)===0&&(country===-1||m.getInt32(0x3c,true)===country)&&(division===undefined||m.getInt32(0x24,true)===division))return id;
 }
 return -1;
}

/** Whole6548c4: search league positions for an employed replacement. */
export function findEmployedManager(save,country,division,clubId,{rng,runtime}){
 const leagueId=findLeagueConfiguration(save,country);if(leagueId===-1)return -1;
 const c=view(save.career),league=view(record(save,'records_0066aca0',leagueId)),club=view(record(save,'clubs',clubId)),mode=c.getInt32(0x168,true);
 let last=10,lower=3,first=2;
 if(mode===2){last=rng.below(3)+17;lower=5;first=rng.below(3)+2;}
 let direction=rng.below(2);
 if(c.getInt32(0x88,true)===1){
  const played=club.getInt32(0x1a8,true);
  if(mode===2){if(played>15)direction=rng.below(100)>20?1:0;else if(played>10)direction=rng.below(100)>50?1:0;else if(played>5)direction=rng.below(100)>70?1:0;}
  else if(played>5)direction=rng.below(100)>20?1:0;
 }
 const divisions=league.getInt32(0x144,true);
 if(club.getInt32(0x7c,true)===mode||divisions<mode)direction=0;
 const selectedDivision=Math.min(divisions,direction===0?division:(division+1)|0),start=direction===0?last:first,end=direction===0?lower:last,step=direction===0?-1:1;
 for(let position=start;direction===0?position>=end:position<=end;position+=step){
  const otherId=league.getInt32(selectedDivision*80+0xfc+position*4,true),other=view(record(save,'clubs',otherId)),managerId=other.getInt32(0x44,true);
  if(managerId<0||other.getUint8(0x39)!==0||otherId===clubId)continue;
  const manager=view(record(save,'records_0066b718',managerId));
  if(manager.getInt32(0x34,true)!==0)continue;
  runtime.replacementSourceClub=manager.getInt32(0x1c,true);return managerId;
 }
 return -1;
}

/** Whole6562b8. Global66b48c is supplied as clubId. The source club is set
 * only by the employed search; fallback candidates preserve the -1 value. */
export function selectManagerReplacement(save,clubId,{rng,runtime}){
 runtime.replacementManager=-1;runtime.outgoingManager=-1;runtime.replacementSourceClub=-1;runtime.managerReplacementFlag=false;
 const club=view(record(save,'clubs',clubId)),country=club.getInt32(0x3c,true),division=club.getInt32(0x7c,true);
 runtime.outgoingManager=club.getInt32(0x44,true);
 let candidate=findAvailableManager(save,country,division);
 if(candidate===-1)candidate=findEmployedManager(save,country,division,clubId,{rng,runtime});
 if(candidate===-1)candidate=findAvailableManager(save,country);
 if(candidate===-1)candidate=findAvailableManager(save,-1);
 runtime.replacementManager=candidate;
 if(candidate<0){runtime.replacementManager=-1;runtime.outgoingManager=-1;runtime.replacementSourceClub=-1;}
 return candidate>=0;
}
