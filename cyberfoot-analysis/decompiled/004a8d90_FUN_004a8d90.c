// Address: 004a8d90
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a8d90(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  while( true ) {
    iVar1 = FUN_0049e780(param_2,4);
    if (iVar1 == 1) break;
    FUN_004a8cb0(param_2[0xf],param_2[0xe],*(int *)(*(int *)(param_1 + 0xc) + 0x130) - param_2[4]);
    param_2[3] = param_2[0xe];
    param_2[4] = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x130);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x130);
  if ((int)param_2[4] < iVar1) {
    FUN_004a8cb0(param_2[0xf],param_2[0xe],iVar1 - param_2[4]);
  }
  return;
}

