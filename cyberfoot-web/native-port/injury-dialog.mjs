/** Form53.FormCreate selection/business blocks (005ff872..006000e0). */
export function prepareInjuryDialog(lineup,injured,fixture,side,state){
 const keeperInjured=state.players[injured].role===0;
 const keeperOnly=keeperInjured&&lineup.bench.some(id=>id>0&&state.players[id].role===0);
 const rows=[];
 if(keeperOnly){for(const id of lineup.bench)if(id>0&&!state.players[id].active&&state.players[id].role===0)rows.push(id);}
 else for(let role=1;role<=4;role++)for(const id of lineup.bench)if(id>0&&!state.players[id].active&&state.players[id].role===role)rows.push(id);
 const canContinueEmpty=!keeperOnly&&rows.length===0;
 if(canContinueEmpty){const club=fixture.clubs[side-1];fixture.clubs.forEach((id,index)=>{if(id===club)fixture.substitutions[index]=0;});}
 return {rows,keeperOnly,improvise:keeperInjured&&!keeperOnly,canContinueEmpty,sounds:keeperOnly?[]:['contusao']};
}
export function createInjuryDecision(context){
 const prepared=prepareInjuryDialog(context.lineup,context.injured,context.fixture,context.side,context.state);
 let resolve;const result=new Promise(r=>resolve=r),view={...prepared,phase:'selection',selectedId:null};
 const present=()=>context.present({...view});
 function select(id){if(view.phase!=='selection')return false;if(!view.rows.includes(id))throw RangeError('Player is not an original injury replacement candidate.');view.selectedId=id;present();return true;}
 function confirm(){if(view.phase!=='selection'||(view.selectedId===null&&!view.canContinueEmpty))return false;view.phase='closed';present();resolve(view.selectedId??-1);return true;}
 present();return {view,result,select,confirm};
}
