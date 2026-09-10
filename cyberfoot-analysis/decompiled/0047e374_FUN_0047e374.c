// Address: 0047e374
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

byte FUN_0047e374(uint param_1)

{
  SHORT SVar1;
  byte bVar2;
  
  bVar2 = DAT_0047e3c4;
  if ((param_1 & 4) != 0) {
    bVar2 = DAT_0047e3c4 | 1;
  }
  if ((param_1 & 8) != 0) {
    bVar2 = bVar2 | 4;
  }
  if ((param_1 & 1) != 0) {
    bVar2 = bVar2 | 8;
  }
  if ((param_1 & 2) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  if ((param_1 & 0x10) != 0) {
    bVar2 = bVar2 | 0x20;
  }
  SVar1 = GetKeyState(0x12);
  if (SVar1 < 0) {
    bVar2 = bVar2 | 2;
  }
  return bVar2;
}

