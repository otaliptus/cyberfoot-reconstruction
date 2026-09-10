// Address: 004a059c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004a059c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (*(int *)(iVar1 + 0x34) == 0) {
    iVar2 = (**(code **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x28),
                       1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f),1);
    *(int *)(iVar1 + 0x34) = iVar2;
    if (iVar2 == 0) {
      return 1;
    }
  }
  if (*(int *)(iVar1 + 0x28) == 0) {
    *(int *)(iVar1 + 0x28) = 1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f);
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  uVar3 = param_2 - *(int *)(param_1 + 0x10);
  if (uVar3 < *(uint *)(iVar1 + 0x28)) {
    uVar4 = *(int *)(iVar1 + 0x28) - *(int *)(iVar1 + 0x30);
    if (uVar3 < uVar4) {
      uVar4 = uVar3;
    }
    FUN_0049de20();
    if (uVar3 - uVar4 == 0) {
      *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + uVar4;
      if (*(int *)(iVar1 + 0x30) == *(int *)(iVar1 + 0x28)) {
        *(undefined4 *)(iVar1 + 0x30) = 0;
      }
      if (*(uint *)(iVar1 + 0x2c) < *(uint *)(iVar1 + 0x28)) {
        *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + uVar4;
      }
    }
    else {
      FUN_0049de20();
      *(uint *)(iVar1 + 0x30) = uVar3 - uVar4;
      *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
    }
  }
  else {
    FUN_0049de20();
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
  }
  return 0;
}

