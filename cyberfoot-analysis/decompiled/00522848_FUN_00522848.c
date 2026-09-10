// Address: 00522848
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

byte FUN_00522848(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte local_9;
  
  local_9 = 0;
  iVar2 = FUN_0051aad8(*(undefined4 *)(param_1 + 0x2c));
  if (-1 < iVar2 + -1) {
    iVar4 = 0;
    do {
      piVar3 = (int *)FUN_005212bc(*(undefined4 *)(param_1 + 0x2c),iVar4);
      bVar1 = (**(code **)(*piVar3 + 0xc))();
      if (local_9 < bVar1) {
        local_9 = bVar1;
      }
      if (1 < bVar1) {
        return local_9;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return local_9;
}

