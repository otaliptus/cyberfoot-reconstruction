// Address: 00455374
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00455374(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x20) = param_2;
  uVar1 = FUN_0041ea50(param_1);
  (**(code **)(**(int **)(param_1 + 4) + 0x2c))(*(int **)(param_1 + 4),uVar1);
  return;
}

