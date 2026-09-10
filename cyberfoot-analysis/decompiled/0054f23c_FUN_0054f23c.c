// Address: 0054f23c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054f23c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0054e8d4(param_1);
  iVar2 = *(int *)(param_1 + 0x168);
  if ((iVar2 <= param_2) && (iVar2 = param_2, *(int *)(param_1 + 0x16c) < param_2)) {
    iVar2 = *(int *)(param_1 + 0x16c);
  }
  if (iVar2 != *(int *)(param_1 + 0x170)) {
    *(int *)(param_1 + 0x170) = iVar2;
    iVar2 = FUN_0054e8d4(param_1);
    if (iVar1 != iVar2) {
      FUN_00466754(param_1);
    }
  }
  return;
}

