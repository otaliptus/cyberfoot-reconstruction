import sys,pefile,capstone
from pathlib import Path
r=Path(__file__).resolve().parents[1];p=pefile.PE(str(r/'payload/cf2015.exe'));c=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_32)
a=int(sys.argv[1],16);n=int(sys.argv[2],0) if len(sys.argv)>2 else 256
for i in c.disasm(p.get_data(a-p.OPTIONAL_HEADER.ImageBase,n),a): print(f'{i.address:08x}: {i.mnemonic:8} {i.op_str}')
