// Address: 00509e84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00509e84(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x10)) {
    *(int *)(param_1 + 0x10) = param_2;
    FUN_0050abec(*(undefined4 *)(param_1 + 4),3,0xffffffff);
  }
  return;
}

