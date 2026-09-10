import {record,shortString} from './save-format.mjs';
import {findLeagueConfiguration} from './weekly-team.mjs';
import {clubCrestPath} from './club-crest.mjs';
import {managerOfferRoster} from './manager-offer-roster.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Form30.FormCreate005d6584 presentation data. Only the first offer is
 * checked on creation, and only later offers require a league configuration. */
export function managerOfferView(save,runtime,language,crestAssets){
 const properties={},imagePaths={},offers=runtime.managerJobOffers;
 for(const [name,id] of Object.entries({Label4:411,label1:412,bt3:413,XiButton1:414,bt2:120}))properties[name]={Caption:language[id].text};
 properties.Label2={Caption:shortString(record(save,'records_0066b718',view(save.career).getInt32(0x10,true)),0,25)};
 const choices=offers.map((clubId,index)=>{
  const name='r'+(index+1),image=['image0','Image1','Image2','Image3'][index];
  properties[name]={Visible:false,Checked:false};
  if(clubId<0)return {index,clubId,visible:false};
  const bytes=record(save,'clubs',clubId),club=view(bytes),country=club.getInt32(0x3c,true),division=club.getInt32(0x7c,true);
  if(index>0&&findLeagueConfiguration(save,country)<0)return {index,clubId,visible:false};
  // Literal005d6b28 is "(" with no preceding space; short-string capacity26.
  const caption=(shortString(bytes,0,25)+'(').slice(0,26)+language[786+country].text+') - '+language[division<1?323:division+34].text;
  properties[name]={Visible:true,Checked:index===0,Caption:caption};imagePaths[image]=clubCrestPath(save,clubId,crestAssets);
  return {index,clubId,visible:true,caption};
 });
 const selected=offers[0]>=0?0:-1,roster=managerOfferRoster(save,selected<0?-1:offers[selected],language);
 if(selected>=0)properties.Label6={Caption:roster.caption};
 return {form:'Form30',background:'assets/original-f01.jpg',properties,imagePaths,choices,selected,offerRoster:roster};
}
/** The radio's resource Tag is one-based, independent of the club ID. */
export function selectManagerOfferView(frame,save,runtime,language,tag){
 const selected=tag-1;
 if(!Number.isInteger(selected)||selected<0||selected>3||!frame.choices[selected].visible)return false;
 frame.selected=selected;frame.offerScroll=0;frame.offerSelectedPlayer=null;
 for(let i=0;i<4;i++)frame.properties['r'+(i+1)].Checked=i===selected;
 frame.offerRoster=managerOfferRoster(save,runtime.managerJobOffers[selected],language,{previousCaption:frame.properties.Label6?.Caption??''});
 frame.properties.Label6={Caption:frame.offerRoster.caption};return true;
}
