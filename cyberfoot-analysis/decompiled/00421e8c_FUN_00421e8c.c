// Address: 00421e8c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00421e8c(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 8);
    if (-1 < iVar1 + -1) {
      iVar2 = 0;
      do {
        FUN_0041e01c(*(undefined4 *)(param_1 + 0x30),iVar2);
        FUN_00403a84();
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00403a84(*(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}

