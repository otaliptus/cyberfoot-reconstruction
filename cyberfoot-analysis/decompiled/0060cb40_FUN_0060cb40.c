// Address: 0060cb40
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0060cb40(int param_1,char param_2,int *param_3)

{
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_2 == '\0') {
    local_1c = FUN_00402c38();
  }
  else {
    local_1c = FUN_00402c38();
  }
  local_18 = FUN_00402c38((int)((longlong)param_1 * (longlong)param_1),
                          (int)((ulonglong)((longlong)param_1 * (longlong)param_1) >> 0x20));
  if (local_1c < 0) {
    local_1c = 0;
  }
  if (local_18 < 0) {
    local_18 = 0;
  }
  if (0x18 < param_1) {
    local_18 = 5;
  }
  local_14 = 100 - (local_1c + local_18);
  if (local_14 < 0) {
    local_14 = 0;
  }
  *param_3 = local_1c;
  param_3[1] = local_18;
  param_3[2] = local_14;
  return;
}

