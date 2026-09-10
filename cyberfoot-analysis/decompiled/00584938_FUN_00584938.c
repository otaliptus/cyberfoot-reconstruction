// Address: 00584938
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00584938(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x238)) {
    if (param_2 == *(int *)(param_1 + 0x234)) {
      param_2 = param_2 + -1;
    }
    if (param_2 < *(int *)(param_1 + 0x234)) {
      *(int *)(param_1 + 0x238) = param_2;
      *(float *)(param_1 + 0x1d4) = _DAT_00584994 / (float)(*(int *)(param_1 + 0x234) - param_2);
      if (*(int *)(param_1 + 0x25c) < *(int *)(param_1 + 0x238)) {
        *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x238);
      }
    }
    FUN_00584438();
  }
  return;
}

