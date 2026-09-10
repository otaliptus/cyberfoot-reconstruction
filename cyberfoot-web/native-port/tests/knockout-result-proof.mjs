import {resolveTwoLegResult} from '../knockout-result.mjs';
export function verifyKnockoutResults(vectors){const failures=[];for(const [i,v] of vectors.entries()){const actual=resolveTwoLegResult(v);if(actual!==v.expected)failures.push({i,actual,expected:v.expected});}return {cases:vectors.length,failures};}
export async function checkKnockoutResults(){const r=verifyKnockoutResults(await fetch(new URL('./knockout-result-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,3)));return {...r,failures:0};}
