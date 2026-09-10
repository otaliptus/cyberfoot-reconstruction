// Address: 0049b19c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049b19c(int param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  undefined4 *local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  
  local_10 = 0;
  local_1c = (undefined4 *)(*(int *)(param_1 + 0x160) + 0xc);
  iVar1 = *(int *)(param_1 + 0x40);
  local_18 = param_5;
  local_14 = param_2;
  for (; local_10 < *(int *)(param_1 + 0x38); local_10 = local_10 + 1) {
    (*(code *)*local_1c)
              (param_1,iVar1,*local_14 + param_3 * 4,*local_18 + param_4 * *(int *)(iVar1 + 0xc) * 4
              );
    local_14 = local_14 + 1;
    local_18 = local_18 + 1;
    local_1c = local_1c + 1;
    iVar1 = iVar1 + 0x54;
  }
  return;
}

