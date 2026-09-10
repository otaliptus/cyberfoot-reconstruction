// Address: 00465ba8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00465ba8(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[1] = *(undefined4 *)(param_1 + 0x44);
  param_2[2] = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x48);
  param_2[3] = *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x4c);
  return;
}

