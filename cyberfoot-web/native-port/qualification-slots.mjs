// Original0064c63c. Group1 applies its country table regardless of competition.
const group1={11:4,29:4,26:2,60:3,42:3,46:3,151:2,131:3,150:3,195:3,198:2};
const primary={
 2:{97:4,65:4,3:3,21:1,62:1,72:3,78:1,85:2,160:1,104:4,154:2,159:1,162:1,192:1,193:1},
 3:{75:1,47:1,1:3,5:2,10:3,36:2,50:1,57:3,67:1,157:1,81:1,127:1,129:3,141:2,178:2,200:1,201:1},
 4:{59:4,39:4,9:4,14:2,43:4,49:4,98:3,107:4,183:1,196:2}
};
const secondary2={104:3,72:3,27:1,3:3,21:1,62:1,65:3,76:1,78:1,85:2,97:3,160:1,142:1,152:1,154:2,159:0,162:2,180:1,192:2,193:1};
export function qualificationSlots(country,competition,group){
 if(group===1)return group1[country]??0;
 if(competition===4&&group>1)return primary[group]?.[country]??1;
 if(competition===6&&group===2)return secondary2[country]??0;
 return 0;
}
