// Address: 0042d3fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0042d3fc(int param_1,short param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 8) + -1;
  if (-1 < iVar3) {
    do {
      sVar1 = FUN_0041e01c(*(undefined4 *)(param_1 + 8),iVar3);
      if (param_2 == sVar1) {
        uVar2 = FUN_0041e01c(*(undefined4 *)(param_1 + 4),iVar3);
        return uVar2;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return 0;
}

