import {record} from './save-format.mjs';
import {standingsBaseProperties} from './standings-view.mjs';
import {regionalStandingsData} from './regional-standings-data.mjs';
import {regionalStandingsLayout} from './regional-standings-layout.mjs';
import {regionalKnockoutData} from './regional-knockout.mjs';
export const regionalNames=['Acreano','Alagoano','Amazonense','Amapaense','Baiano','Cearense','Brasiliense','Capixaba','Goiano','Maranhense','Mineiro','Sul-matogrossense','Matogrossense','Paraense','Paraibano','Pernambucano','Piauiense','Paranaense','Carioca','Potiguar','Rondonense','Roraimense','Gaúcho','Catarinense','Sergipano','Paulista','Tocantinense'];
const abbreviations=['AC','AL','AM','AP','BA','CE','DF','ES','GO','MA','MG','MS','MT','PA','PB','PE','PI','PR','RJ','RN','RO','RR','RS','SC','SE','SP','TO'];
export function regionalStandingsView(save,state,language,crestAssets){
 const properties=standingsBaseProperties(save,language),data=regionalStandingsData(save,state.subgroup,!!state.lowerDivisions,crestAssets),layout=regionalStandingsLayout(data,language),brackets=state.lowerDivisions?[]:regionalKnockoutData(save,state.subgroup);
 for(const name of ['barra2','Image9','Image10','Image11','ld1','ld2','ld3'])properties[name]={...properties[name],Visible:false};
 properties.barra={Left:properties.Image2.Left};properties.Image12={Visible:layout.moreVisible,Left:layout.moreBounds.x,Top:layout.moreBounds.y};
 properties.labcamp={HTMLText:'<P align="center"> Campeonato '+regionalNames[state.subgroup]+(data.grouped?' - 1ª divisão':'')+'</p>'};
 for(let i=0;i<brackets.length;i++){const panel=brackets[i],b=panel.bounds;properties[['painel_quartas','painel_semi','painel_final'][i]]={Visible:panel.visible,Left:b.x,Top:b.y,Width:b.width,Height:b.height};properties[['labq1','labs1','labf1'][i]]={HTMLText:'<P align="center"><B>'+panel.title+'</B></P>'};}
 const regions=regionalNames.flatMap((name,subgroup)=>record(save,'records_0066ae98',subgroup)[0x52d]?[{subgroup,text:abbreviations[subgroup]+' - '+name}]:[]);
 return {form:'Form36',background:'assets/original-f01.jpg',properties,standingsTables:layout.tables,standingsHeaders:[86,84,79,80,81,82,83,85].map(i=>language[i].text),standingsState:{...state,competition:3},standingsData:data,regionalBrackets:brackets,regions,regionPickerVisible:true,countryPickerVisible:false};
}
