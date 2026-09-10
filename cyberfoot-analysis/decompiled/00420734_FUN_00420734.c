// Address: 00420734
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00420734(int *param_1,int param_2,undefined4 param_3)

{
  if ((param_2 < 0) || (param_1[5] <= param_2)) {
    FUN_0041f4bc(param_1,PTR_PTR_0066b4e8,param_2);
  }
  (**(code **)(*param_1 + 0x84))();
  *(undefined4 *)(param_1[4] + 4 + param_2 * 8) = param_3;
  (**(code **)(*param_1 + 0x80))();
  return;
}

