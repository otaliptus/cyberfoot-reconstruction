// Address: 004660dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004660dc(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x30)) {
    if (param_1 == param_2) {
      FUN_0040e42c(PTR_DAT_0041b6dc,1,PTR_PTR_0066b460);
      FUN_00404250();
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_00469678(*(int *)(param_1 + 0x30),param_1);
    }
    if (param_2 != 0) {
      FUN_004695a4(param_2,param_1);
      FUN_0046585c(param_1);
    }
  }
  return;
}

