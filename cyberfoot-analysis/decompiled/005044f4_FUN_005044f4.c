// Address: 005044f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_005044f4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_0050ae9c(*(undefined4 *)(param_1 + 0x4d4));
  if (-1 < iVar1 + -1) {
    iVar4 = 0;
    do {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x4d4) + 0x30))(*(int **)(param_1 + 0x4d4),iVar4);
      if ((*(byte *)(iVar2 + 0x7d) & 0x10) != 0) {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x4d4) + 0x30))(*(int **)(param_1 + 0x4d4),iVar4);
        return uVar3;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

