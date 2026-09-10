import {tacticalControlProperties} from './tactics.mjs';
export const formationNames=['5-4-1','5-3-2','4-5-1','4-4-2','4-4-2 (1)','4-4-2 (2)','4-3-3 (1)','4-3-3 (2)','3-5-2','3-4-3'];
export function lineupView(state,rows,slots,formation,clubId,language,{remember=false,opponent=''}={}){
 const roleLabels=[143,147,145,149,151].map(id=>language[id].text),club=state.clubs[clubId];
 const positionLabels=[roleLabels[0],roleLabels[1],...Array(6).fill(roleLabels[2]),roleLabels[1],...Array(8).fill(roleLabels[3]),...Array(8).fill(roleLabels[4])];
 const headers=Object.fromEntries(Object.entries({posicaojog:128,nome:129,lado:130,forca:131,energia:132,gols:135,habilidades:136,idade:137}).map(([k,id])=>[k,language[id].text]));headers.lado=headers.lado.slice(0,1);
 const items=rows.map(r=>`${roleLabels[state.players[r.playerId].role]} ${state.players[r.playerId].name}`);
 return {form:'Form87',slots,players:state.players,roleLabels,positionLabels,headers,
  roster:rows.map(row=>{const p=state.players[row.playerId];return {...row,cells:{posicaojog:roleLabels[p.role],nome:p.name,forca:p.skill,energia:p.condition,idade:p.age}};}),
  properties:{...tacticalControlProperties(club,language),
   Label54:{Caption:language[67].text},Label3:{Caption:opponent},Label1:{Caption:language[1006].text+':'},
   lab1:{Caption:language[282].text},lab5:{Caption:language[286].text},lab6:{Caption:language[287].text},TntLabel2:{Caption:language[281].text},
   ckescalacao:{Checked:remember},
   combtat:{Items:formationNames,ItemIndex:formation-1},
   combo1:{Items:items,ItemIndex:rows.findIndex(r=>r.playerId===club.captain)},combo2:{Items:items,ItemIndex:rows.findIndex(r=>r.playerId===club.setPiecePlayer)},
   AdvGlowButton1:{Caption:language[998].text},bt_voltar:{Caption:language[298].text},bt_irprojogo:{Caption:language[299].text}
  }};
}
