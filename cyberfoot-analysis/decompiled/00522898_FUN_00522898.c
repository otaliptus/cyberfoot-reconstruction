// Address: 00522898
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00522898(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;
  
  local_8 = FUN_0051b34c(*(undefined4 *)(param_1 + 0x30));
  iVar1 = FUN_0051aad8(*(undefined4 *)(param_1 + 0x2c));
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      FUN_005212bc(*(undefined4 *)(param_1 + 0x2c),iVar3);
      iVar2 = FUN_0051e0fc();
      if (local_8 < iVar2) {
        FUN_005212bc(*(undefined4 *)(param_1 + 0x2c),iVar3);
        local_8 = FUN_0051e0fc();
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return local_8;
}

