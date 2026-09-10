// Address: 0047e3c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

byte FUN_0047e3c8(uint param_1)

{
  SHORT SVar1;
  byte bVar2;
  
  bVar2 = DAT_0047e400;
  SVar1 = GetKeyState(0x10);
  if (SVar1 < 0) {
    bVar2 = bVar2 | 1;
  }
  SVar1 = GetKeyState(0x11);
  if (SVar1 < 0) {
    bVar2 = bVar2 | 4;
  }
  if ((param_1 & 0x20000000) != 0) {
    bVar2 = bVar2 | 2;
  }
  return bVar2;
}

