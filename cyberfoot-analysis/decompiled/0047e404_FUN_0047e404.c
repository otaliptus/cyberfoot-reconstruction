// Address: 0047e404
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

byte FUN_0047e404(int param_1)

{
  byte bVar1;
  
  bVar1 = DAT_0047e44c;
  if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
    bVar1 = DAT_0047e44c | 1;
  }
  if ((*(byte *)(param_1 + 0x11) & 0x80) != 0) {
    bVar1 = bVar1 | 4;
  }
  if ((*(byte *)(param_1 + 0x12) & 0x80) != 0) {
    bVar1 = bVar1 | 2;
  }
  if ((*(byte *)(param_1 + 1) & 0x80) != 0) {
    bVar1 = bVar1 | 8;
  }
  if ((*(byte *)(param_1 + 2) & 0x80) != 0) {
    bVar1 = bVar1 | 0x10;
  }
  if ((*(byte *)(param_1 + 4) & 0x80) != 0) {
    bVar1 = bVar1 | 0x20;
  }
  return bVar1;
}

