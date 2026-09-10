// Address: 0041d240
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041d240(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 8) + -1;
  if (-1 < iVar2) {
    do {
      iVar1 = FUN_0041e01c(*(undefined4 *)(param_1 + 4),iVar2);
      FUN_0041cddc(iVar1,param_2);
      if (*(int *)(*(int *)(iVar1 + 0xc) + 8) == 0) {
        FUN_00403a84(iVar1);
        FUN_0041df0c(*(undefined4 *)(param_1 + 4),iVar2);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}

