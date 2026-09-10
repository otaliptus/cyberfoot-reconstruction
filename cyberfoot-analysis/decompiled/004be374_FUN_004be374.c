// Address: 004be374
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004be374(int *param_1)

{
  int iVar1;
  
  if (param_1[0xc] != 0) {
    iVar1 = FUN_0047e4c0(param_1);
    *(int *)(iVar1 + 0x24c) = param_1[0xa1];
  }
  *(undefined1 *)(param_1 + 0xa3) = 0;
  (**(code **)(*param_1 + 200))();
  FUN_00467754(param_1);
  return;
}

