// Address: 00433ed8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00433ed8(int param_1)

{
  int iVar1;
  
  while( true ) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 8);
    if (iVar1 < 1) break;
    iVar1 = FUN_00432768(*(int *)(param_1 + 0x10),iVar1 + -1);
    (**(code **)(**(int **)(iVar1 + 4) + 0x2c))();
  }
  (**(code **)(**(int **)(param_1 + 0x10) + 8))();
  (**(code **)(**(int **)(param_1 + 0x14) + 8))();
  (**(code **)(**(int **)(param_1 + 0x18) + 8))();
  return;
}

