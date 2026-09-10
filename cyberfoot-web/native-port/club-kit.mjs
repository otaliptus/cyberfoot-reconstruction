import {record,shortString} from './save-format.mjs';
function kitContext(save,clubId){
 const v=new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength);
 return {national:clubId>=((v.getInt32(0x3c,true)+v.getInt32(0x40,true))|0),name:shortString(record(save,'clubs',clubId),0x1a,30)};
}
/** 006460a4: existence probe uses an unsigned kit index; an unsupported index
 * leaves the directory/prefix empty in the original. */
export function clubKitExists(save,clubId,kit,assets){
 const {national,name}=kitContext(save,clubId),index=kit>>>0;
 const prefix=national?(index<2?'c_':index===2?'c2_':index===3?'c3_':''):(index<2?'camisas':index===2?'camisas2':index===3?'camisas3':'');
 const key=(national?`teams/selecoes/${prefix}${name}.png`:`teams/${prefix}/${name}.png`).toLowerCase();
 return !!assets[key];
}
/** 006462ac/006464c4/006466dc. Return a path only when its PNG exists. */
export function clubKitPath(save,clubId,kit,assets){
 if(![1,2,3].includes(kit))throw RangeError('Original kit path helper must be 1, 2 or 3.');
 const {national,name}=kitContext(save,clubId),key=(national?`teams/selecoes/${kit===1?'c_':`c${kit}_`}${name}.png`:`teams/camisas${kit===1?'':kit}/${name}.png`).toLowerCase();
 return assets[key]??null;
}
/** 006044fa..00604778. An AI team resets to kit1. An away AI team whose
 * colour matches the home team's colour tries kit2, then kit3. Missing
 * selections fall back to kit1, then the built-in shirt; the saved selection
 * is not rewritten by that display fallback.
 */
export function selectMatchKit(save,fixture,side,state,assets,{previous='assets/original-shirt-1.png'}={}){
 const clubId=fixture.clubs[side-1],club=state.clubs[clubId];if(!club.human)club.selectedKit=1;
 if(side===2&&!club.human&&state.clubs[fixture.clubs[0]].kitColour===club.kitColour){
  if(clubKitExists(save,clubId,2,assets))club.selectedKit=2;
  else if(clubKitExists(save,clubId,3,assets))club.selectedKit=3;
 }
 if(!clubKitExists(save,clubId,club.selectedKit,assets))return clubKitPath(save,clubId,1,assets)??'assets/original-shirt-1.png';
 const index=club.selectedKit>>>0;if(index>3)return previous;
 return clubKitPath(save,clubId,index<2?1:index,assets)??'assets/original-shirt-1.png';
}
