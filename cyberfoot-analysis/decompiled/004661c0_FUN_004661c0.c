// Address: 004661c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004661c0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x7c) = param_2;
  if (param_2 != 0) {
    FUN_0047ab0c(param_2,param_1);
    FUN_00426f28(param_2,param_1);
  }
  return;
}

