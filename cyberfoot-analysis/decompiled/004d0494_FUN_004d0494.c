// Address: 004d0494
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d0494(int param_1)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x254) + 8))();
  iVar1 = *(int *)(param_1 + 0x28c);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x218) = 0xffffff;
    *(undefined4 *)(iVar1 + 0x21c) = *(undefined4 *)(*(int *)(param_1 + 0x254) + 0x1c);
  }
  return;
}

