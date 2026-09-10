from pathlib import Path
import pefile,struct,re,json
R=Path(__file__).resolve().parents[1];p=pefile.PE(str(R/'payload/cf2015.exe'));im=p.get_memory_mapped_image()
def data(a,n):return im[a-0x400000:a-0x400000+n]
def word(a):return struct.unpack('<I',data(a,4))[0]
coeff={}
for a in [0x60cc24,0x60cc30,0x60cc3c,0x60cc48,0x60cc54,0x60cc60,0x60cd34,0x60cd44,0x60cd50]:
 sig,se=struct.unpack('<QH',data(a,10));coeff[hex(a)]=[str(-sig if se&0x8000 else sig),(se&0x7fff)-16383-63]
print(coeff)
print({hex(a):struct.unpack('<f',data(a,4))[0] for a in [0x60cd40,0x60cd5c,0x60cf98,0x60cf9c,0x60cfa0,0x60cfa4,0x651eb8]})
tables={}
for key,a in [('favoured',0x66b254),('upset',0x66b2d8)]:
 base=word(a);tables[key]=[list(struct.unpack('<10i',data(base+i*40,40))) for i in range(5)]
s=(R/'decompiled/0064f2d0_FUN_0064f2d0.c').read_text();countries=[0]*202
for c,val in re.findall(r'case (0x[0-9a-f]+|\d+):\s+(?:return|uVar1 =) (\d+);',s):countries[int(c,0)]=int(val)
out='// Literal original score tables and x87 coefficients; extracted from cf2015.exe.\n'
out+='export const scoreCoefficients='+json.dumps(coeff)+';\n'
out+='export const scoreTables='+json.dumps(tables)+';\n'
out+='export const countryGroups='+json.dumps(countries)+';\n'
(R.parent/'cyberfoot-web/native-port/score-tables.mjs').write_text(out)
