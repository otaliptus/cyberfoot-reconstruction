// Address: 004a8d3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a8d3c(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  *param_2 = param_3;
  param_2[1] = param_4;
  while (0 < (int)param_2[1]) {
    FUN_0049e780(param_2,0);
    if (param_2[4] == 0) {
      FUN_004a8cb0(param_2[0xf],param_2[0xe],*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x130));
      param_2[3] = param_2[0xe];
      param_2[4] = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x130);
    }
  }
  return;
}

