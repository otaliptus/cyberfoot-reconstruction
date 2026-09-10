// Address: 0060cc6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0060cc6c(uint param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar2 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  local_20 = FUN_00402c38();
  lVar1 = (longlong)iVar2 * (longlong)iVar2;
  local_1c = FUN_00402c38((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
  if (local_20 < 0) {
    local_20 = 0;
  }
  iVar2 = local_20;
  if (local_1c < 0) {
    local_1c = 0;
  }
  local_18 = 100 - (local_20 + local_1c);
  if (local_18 < 0) {
    local_18 = 0;
  }
  if ((int)param_1 < 0) {
    local_20 = local_18;
    local_18 = iVar2;
  }
  *param_2 = local_20;
  param_2[1] = local_1c;
  param_2[2] = local_18;
  return;
}

