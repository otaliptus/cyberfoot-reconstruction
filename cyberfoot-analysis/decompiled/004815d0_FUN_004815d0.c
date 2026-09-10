// Address: 004815d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004815d0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x260) = param_2;
  if (param_2 != 0) {
    FUN_00426f28(param_2,param_1);
    FUN_00478a78(param_2,0);
  }
  return;
}

