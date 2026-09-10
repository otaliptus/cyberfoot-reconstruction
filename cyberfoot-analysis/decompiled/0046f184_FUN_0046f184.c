// Address: 0046f184
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046f184(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 extraout_EDX;
  
  if (*(int *)(param_4 + -4) == *(int *)(param_1 + 4)) {
    *(int *)(param_4 + -8) = param_1;
    return;
  }
  if ((*(int *)(param_4 + -8) == 0) && (*(int *)(param_1 + 0xc) != 0)) {
    param_3 = param_4;
    FUN_0046f184(*(undefined4 *)(param_1 + 0xc));
    param_2 = extraout_EDX;
  }
  if ((*(int *)(param_4 + -8) == 0) && (*(int *)(param_1 + 8) != 0)) {
    FUN_0046f184(*(undefined4 *)(param_1 + 8),param_2,param_3,param_4);
  }
  return;
}

