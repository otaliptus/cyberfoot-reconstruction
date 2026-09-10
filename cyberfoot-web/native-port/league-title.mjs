// Original00645c68 translated league names and generic fallback.
const names={"97":231,"62":247,"29":243,"3":225,"11":245,"21":235,"31":277,"42":255,"46":259,"78":237,"65":229,"68":275,"72":233,"85":239,"96":273,"171":269,"152":271,"104":227,"131":249,"150":257,"154":241,"162":261,"179":263,"180":251,"192":253,"193":265,"195":267};
export function leagueTitle(country,language){if(country===202)return "";const id=names[country];return id===undefined?language[279].text+" "+language[786+country].text:language[id].text;}
