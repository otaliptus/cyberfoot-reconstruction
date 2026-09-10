import {record,shortString} from './save-format.mjs';
import {renewalPlayer,submitContractOffer,applyContractRenewal} from './contracts.mjs';
import {originalMoney} from './finance-view.mjs';
import {precision64,nearestEven} from './x87.mjs';
import {appendNotification} from './notifications.mjs';
export function parseOriginalInteger(text){
 text=String(text).split('\0')[0].replace(/^ +/,'');const m=/^([+-]?)(?:(\$|x|X|0x|0X)([0-9a-fA-F]+)|([0-9]+))$/.exec(text);if(!m)return null;
 const negative=m[1]==='-',hex=!!m[2];let n=BigInt(hex?'0x'+m[3]:m[4]);if(hex){if(n>0xffffffffn)return null;if(negative)n=-n;return Number(BigInt.asIntN(32,n));}
 if(negative)n=-n;return n< -2147483648n||n>2147483647n?null:Number(n);
}
export function stepContractOffer(text,direction){const n=parseOriginalInteger(text);if(n===null)return text;let result=n;if(direction===0&&n<=0x98948b)result=(n+500)|0;else if(direction!==0&&n>500)result=(n-500)|0;return String(Math.max(0,result));}
export function openContract(save,id,currentDate,rng,formatDate){
 if(typeof formatDate!=='function')throw Error('Original date display format is required');
 const player=renewalPlayer(save,id),[a,b]=precision64(BigInt(player.salary),10000n),salary=Number(BigInt.asIntN(32,nearestEven(a,b))),name=shortString(record(save,'players',id),0,20),career=new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength),clubId=career.getInt32(8,true);
 const state={id,name,currentDate,player,salary,offer:String(salary),durationIndex:0,result:null};
 return {state,view(language){return {form:'Form24',background:'assets/original-f01.jpg',properties:{label32:{HTMLText:`<p align="center"><shad>${language[378].text}</shad></p>`},Label1:{Caption:name},Label2:{Caption:language[52].text+':'},Label3:{Caption:originalMoney(salary).slice(1)},Label4:{Caption:language[379].text},Label6:{Caption:language[380].text},Label7:{Caption:currentDate>player.contractEnd?language[56].text:language[55].text+':'+formatDate(player.contractEnd)},Edit1:{Text:state.offer},combom:{Items:[381,382,383,1015].map(i=>language[i].text),ItemIndex:state.durationIndex,OnChange:'combomChange'},CHButton1:{Caption:language[384].text,Enabled:(parseOriginalInteger(state.offer)??0)>0},bt3:{Caption:language[385].text}}};},offer(){const amount=parseOriginalInteger(state.offer);if(amount===null||amount<=0)return null;state.result=submitContractOffer(save,id,{offer:amount,durationIndex:state.durationIndex,currentDate},rng);return state.result;},acceptCounter(){if(state.result?.decision!=='reject')throw Error('No original counteroffer pending');return applyContractRenewal(save,id,{offer:state.result.required,entryOffer:parseOriginalInteger(state.offer),durationIndex:state.durationIndex,date:currentDate,clubId},(...args)=>appendNotification(save,currentDate,rng,...args));}};
}
export function counterofferView(required,language){return {form:'Form25',background:'assets/original-f01.jpg',properties:{label1:{Caption:language[386].text},Label2:{Caption:originalMoney(required)},button1:{Caption:language[387].text},button2:{Caption:language[388].text}}};}
