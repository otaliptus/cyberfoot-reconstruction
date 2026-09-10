// Address: 0042b67c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042b67c(int *param_1,byte param_2)

{
  param_2 = ~*(byte *)(param_1 + 2) & param_2;
  if (DAT_0042b6ec != param_2) {
    if ((param_2 & 1) != 0) {
      (**(code **)(*param_1 + 0x14))();
      if (param_1[1] == 0) {
        FUN_0040e42c(PTR_DAT_0041b6dc,1,PTR_PTR_0066b030);
        FUN_00404250();
      }
    }
    if ((param_2 & 2) != 0) {
      FUN_0042b718(param_1);
    }
    if ((param_2 & 4) != 0) {
      FUN_0042b744(param_1);
    }
    if ((param_2 & 8) != 0) {
      FUN_0042b774(param_1);
    }
    *(byte *)(param_1 + 2) = param_2 | *(byte *)(param_1 + 2);
  }
  return;
}

