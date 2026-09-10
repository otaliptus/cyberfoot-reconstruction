"""Published Delphi field offsets; DFM child order is not declaration order."""
import json,struct,pefile
from pathlib import Path
R=Path(__file__).resolve().parents[1];b=pefile.PE(str(R/'payload/cf2015.exe')).get_memory_mapped_image();classes=json.loads((R/'reports/delphi-methods.json').read_text());result={}
for c in classes:
 a=int(c['vmt'],16);ptr=struct.unpack_from('<I',b,a-0x400000-56)[0]
 if not ptr:continue
 p=ptr-0x400000;n=struct.unpack_from('<H',b,p)[0];p+=6;fields={}
 for i in range(n):
  off,typ,length=struct.unpack_from('<IHB',b,p);name=b[p+7:p+7+length].decode('cp1252');fields[name]={'offset':off,'typeIndex':typ};p+=7+length
 result[c['name']]=fields
path=R.parent/'cyberfoot-web/native-port/form-fields.json';path.write_text(json.dumps(result,indent=1));print('Classes:',len(result),'fields:',sum(map(len,result.values())))
