// Address: 00433f18
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00433f18(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 8);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      iVar1 = FUN_00432768(*(undefined4 *)(param_1 + 0x10),iVar3);
      (**(code **)(**(int **)(iVar1 + 4) + 0x28))();
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

