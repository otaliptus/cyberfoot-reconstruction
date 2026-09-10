// Address: 004813a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004813a8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_0046cae0(param_1,param_2,param_3,2,0);
  iVar2 = (**(code **)PTR_DAT_0066b184)();
  iVar3 = FUN_00484eb4(DAT_0066cbf8);
  if (-1 < iVar3 + -1) {
    iVar5 = 0;
    do {
      iVar4 = FUN_00484ea0(DAT_0066cbf8,iVar5);
      if (iVar2 == *(int *)(iVar4 + 4)) {
        uVar1 = FUN_00484ea0(DAT_0066cbf8,iVar5);
        return uVar1;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_00484eb4(DAT_0066cbf8);
  if (-1 < iVar3 + -1) {
    iVar5 = 0;
    do {
      FUN_0041e01c(*(undefined4 *)(DAT_0066cbf8 + 0x58),iVar5);
      FUN_00403a84();
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(**(int **)(DAT_0066cbf8 + 0x58) + 8))();
  (**(code **)PTR_DAT_0066b248)();
  iVar3 = FUN_00484eb4(DAT_0066cbf8);
  if (-1 < iVar3 + -1) {
    iVar5 = 0;
    do {
      iVar4 = FUN_00484ea0(DAT_0066cbf8,iVar5);
      if (iVar2 == *(int *)(iVar4 + 4)) {
        uVar1 = FUN_00484ea0(DAT_0066cbf8,iVar5);
        return uVar1;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar1;
}

