// Address: 0046d114
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046d114(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  
  iVar1 = param_1[0x1d];
  if (*(int *)(iVar1 + 0x14) == 0) {
    *param_2 = 0;
  }
  else {
    *param_2 = *(undefined4 *)(param_1[0x1d] + 0x14);
  }
  if (*(int *)(iVar1 + 0x10) == 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(param_1[0x1d] + 0x10);
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    *param_5 = 0;
  }
  else {
    *param_5 = *(undefined4 *)(param_1[0x1d] + 0xc);
  }
  if (*(int *)(iVar1 + 8) == 0) {
    *param_4 = 0;
  }
  else {
    *param_4 = *(undefined4 *)(param_1[0x1d] + 8);
  }
  (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,param_4,param_5);
  return;
}

