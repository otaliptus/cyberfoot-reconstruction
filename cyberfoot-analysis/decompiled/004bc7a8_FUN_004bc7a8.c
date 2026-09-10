// Address: 004bc7a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bc7a8(undefined2 param_1,short param_2,undefined4 param_3,int param_4)

{
  if (param_2 == -1) {
    if (*(double *)(param_4 + 8) == (double)_DAT_004bc7f8) {
      FUN_00406d44(PTR_PTR_0066aeb8,param_3);
    }
    else {
      FUN_00409dd8(param_1,param_3);
    }
  }
  else {
    FUN_00409dd8(param_2,param_3);
  }
  return;
}

