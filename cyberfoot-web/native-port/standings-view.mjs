import {record} from './save-format.mjs';import {leagueStandingsData} from './standings-data.mjs';import {leagueStandingsLayout} from './standings-layout.mjs';import {leagueTitle} from './league-title.mjs';
import {standingsPalette} from './standings-highlights.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
export function leagueStandingsView(save,state,language,crestAssets,previous=null){
 const c=view(save.career),properties={},data=leagueStandingsData(save,state.leagueId,state.division,language,crestAssets),layout=leagueStandingsLayout(data);
 // Selecting a lower division replaces the right table only; the left table stays.
 const tables=state.division>1&&previous?[...previous.standingsTables.filter(t=>t.x===30),...layout]:layout;
 //005ae33c colors global display rows, including the retained left table.
 for(const table of tables)for(const row of table.rows)for(const [start,end,index] of data.highlights.calls)if(row.displayRow>=start&&row.displayRow<=end)row.color=standingsPalette[index-1];
 Object.assign(properties,standingsBaseProperties(save,language));
 properties.barra={Left:properties.Image1.Left};properties.barra2={Left:415+Math.max(0,state.division-2)*64,Visible:data.divisionTabsVisible};
 for(let i=0;i<3;i++){const visible=data.divisionTabsVisible&&(i<2||data.totalDivisions>=4);properties['Image'+(9+i)]={Visible:visible};properties['ld'+(i+1)]={...properties['ld'+(i+1)],Visible:visible,Left:415+i*64,Top:499};}
 properties.labcamp={HTMLText:'<P align="center"> '+leagueTitle(data.country,language)+'</p>'};
 const leagues=save.sections.find(s=>s.name==='records_0066aca0'),countries=Array.from({length:leagues.count},(_,i)=>{const country=view(record(save,'records_0066aca0',i)).getInt32(0x140,true);return {country,text:language[786+country].text};});
 return {regionPickerVisible:false,regions:[],regionalBrackets:[],form:'Form36',background:'assets/original-f01.jpg',properties,standingsTables:tables,standingsHeaders:data.headers,countries,countryPickerVisible:data.countryPickerVisible,standingsState:{...state},standingsData:data};
}

export function standingsBaseProperties(save,language){
 const c=view(save.career),properties={};
 for(const [name,id] of Object.entries({lab1:1018,lab3:1019,lab4:1020,lab5:1021,lab6:1022,lab7:1023,ld1:36,ld2:37,ld3:38}))properties[name]={Caption:language[id].text};
 const hide=(...names)=>names.forEach(name=>properties[name]={...properties[name],Visible:false});
 hide('painel_quartas','painel_final','painel_semi','Image12');
 if(!c.getUint8(0x170))hide('Image2');
 if(!c.getUint8(0x171)||c.getInt32(0xc4,true)===202||(c.getInt32(0xc0,true)===1&&!c.getUint8(0x75d)))hide('Image3','Image4','Image6','Image7','lab3','lab4','lab6','lab7');
 if(!c.getUint8(0x172)||c.getInt32(0xc4,true)===202||c.getInt32(0xc0,true)===1)hide('Image5','lab5');
 let left=8;for(let i=1;i<=7;i++){const name='Image'+i;if(properties[name]?.Visible===false)continue;properties[name]={...properties[name],Left:left};left+=104;}
 for(const i of [3,4,5,6,7])properties['lab'+i]={...properties['lab'+i],Left:properties['Image'+i]?.Left??({3:212,4:312,5:412,6:512,7:616})[i]};
 return properties;
}
