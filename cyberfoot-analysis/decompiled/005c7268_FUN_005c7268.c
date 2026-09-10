// Address: 005c7268
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005c7268(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x37c));
  iVar3 = iVar2 + 1;
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
    if (1 < iVar3) {
      if (0x14 < iVar3) {
        FUN_005c5d38(param_1,1,iVar2 + -0x13,2);
        uVar1 = *(undefined4 *)(param_1 + 0x37c);
        iVar2 = FUN_0054c0f0(uVar1);
        FUN_0054c10c(uVar1,iVar2 + -1);
        return;
      }
      FUN_005c5d38(param_1,1,iVar2,1);
      uVar1 = *(undefined4 *)(param_1 + 0x37c);
      iVar2 = FUN_0054c0f0(uVar1);
      FUN_0054c10c(uVar1,iVar2 + -1);
    }
  }
  else if (1 < iVar3) {
    if (iVar3 < 0xb) {
      FUN_005c5d38(param_1,1,iVar2,1);
      uVar1 = *(undefined4 *)(param_1 + 0x37c);
      iVar2 = FUN_0054c0f0(uVar1);
      FUN_0054c10c(uVar1,iVar2 + -1);
    }
    else {
      FUN_005c5d38(param_1,1,iVar2 + -9,2);
      uVar1 = *(undefined4 *)(param_1 + 0x37c);
      iVar2 = FUN_0054c0f0(uVar1);
      FUN_0054c10c(uVar1,iVar2 + -1);
    }
  }
  return;
}

