import {standingsBaseProperties} from './standings-view.mjs';
import {continentalStandingsData,continentalStandingsLayout} from './continental-standings-data.mjs';
export function continentalStandingsView(save,state,language,crestAssets,previous=null){
 const properties=standingsBaseProperties(save,language),data=continentalStandingsData(save,state.competition,state.stage,language,crestAssets);
 for(const name of ['barra2','Image9','Image10','Image11','ld1','ld2','ld3'])properties[name]={...properties[name],Visible:false};
 const image=state.selectedImage??(state.competition===6?5:[3,4,6,7][state.stage]);properties.barra={Left:properties['Image'+image]?.Left??8};
 properties.labcamp={HTMLText:'<P align="center"> '+data.title+'</p>'};
 // Original routine does not reset dynamic table controls when unavailable.
 const tables=data.unavailable?(previous?.standingsTables??[]):continentalStandingsLayout(data);
 if(previous?.properties.Image12)properties.Image12={...previous.properties.Image12};
 return {form:'Form36',background:'assets/original-f01.jpg',properties,standingsTables:tables,standingsHeaders:data.headers,standingsData:data,standingsState:{...state},countryPickerVisible:false,regionPickerVisible:false,regionalBrackets:[],regions:[]};
}
