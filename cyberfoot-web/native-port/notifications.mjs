// Original 0064cbf0. Record fields retain byte offsets until their consumers are ported.
export function notificationRecord(club,type,subtype,param4,param5,player,date,rng){
 if(type===12&&player<1)return null;
 const bytes=new Uint8Array(48),v=new DataView(bytes.buffer),put=(o,n)=>v.setInt32(o,n,true),pick=(base,count)=>base+rng.below(count),common=(priority,kind)=>{put(20,priority);if(kind!==undefined)put(24,kind);put(28,player);};
 put(0,club);v.setFloat64(8,date,true);
 if(type===0){if(subtype===0||subtype===1){put(16,subtype===0?73:1);put(20,1);put(24,1);}}
 else if(type===1){const spec={2:[12,6],3:[7,5],5:[4,2],10:[2,1]}[subtype];if(spec)put(16,pick(...spec));common(1,2);v.setUint8(41,1);}
 else if(type===2){const spec=[[18,4,3],[67,1,10],[53,2,11],[55,2,12],[57,2,13],[59,2,13],[62,2,11]][subtype];if(spec){put(16,pick(spec[0],spec[1]));common(3,spec[2]);if(subtype===4)put(32,param5);}}
 else if(type===3){const spec={2:[25,3],3:[28,2],4:[30,2],5:[32,4],6:[32,4],7:[36,2],8:[38,4],9:[38,4],10:[38,4],15:[42,4],16:[42,4],17:[42,4],18:[42,4],19:[42,4],20:[42,4]}[subtype];if(spec)put(16,pick(...spec));common(5,4);}
 else if(type===4){if(subtype===0)put(16,pick(46,3));else if(subtype===1)return bytes;put(20,2);put(24,pick(5,3));}
 else if(type===9){if(subtype===0){put(16,pick(22,3));common(4,8);put(32,param5);}else if(subtype===1){put(16,pick(70,0));put(20,1);put(24,16);}}
 else if(type===11){if(subtype===0){put(16,pick(51,2));put(24,9);}common(1);}
 else if(type>=12&&type<=14){if(type===12&&subtype===0){put(16,69);put(24,15);}if(type===13&&(subtype===0||subtype===1)){put(16,71+subtype);put(24,17+subtype);}if(type===14&&subtype===0){put(16,74);put(24,19);}common(1);put(32,param5);put(36,param4);}
 else if(type===15){if(subtype===1||subtype===2){put(16,pick(subtype===1?75:77,2));put(24,pick(20,2));put(20,subtype);}put(28,player);put(32,param5);put(36,param4);}
 return bytes;
}
export function appendNotification(save,date,rng,...args){
 const row=notificationRecord(...args,date,rng);if(!row)return;
 const section=save.sections.find(s=>s.name==='records_0066b770'),data=new Uint8Array(section.data.length+48);data.set(section.data);data.set(row,section.data.length);section.data=data;section.count=data.length/48;
}
