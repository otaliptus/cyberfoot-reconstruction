// Address: 0050ab30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

byte FUN_0050ab30(int *param_1)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = DAT_0050ab68;
  if ((char)param_1[0x15] != '\0') {
    uVar1 = (**(code **)(*param_1 + 0x40))();
    if (((uVar1 & 2) != 0) || (param_1[0x19] != 0)) {
      if ((*(byte *)(param_1 + 0x1f) & 0x40) != 0) {
        bVar2 = bVar2 | 1;
      }
      if ((*(byte *)(param_1 + 0x1f) & 4) != 0) {
        bVar2 = bVar2 | 2;
      }
    }
  }
  return bVar2;
}

