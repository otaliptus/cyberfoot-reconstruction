// Address: 0049458c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049458c(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  
  param_4 = (undefined4 *)*param_4;
  local_18 = param_4;
  local_14 = param_3;
  for (local_10 = 0; local_10 < *(int *)(param_1 + 0x138); local_10 = local_10 + 2) {
    puVar2 = (undefined1 *)*local_18;
    puVar4 = puVar2 + *(int *)(param_1 + 0x70);
    puVar3 = (undefined1 *)*local_14;
    for (; puVar2 < puVar4; puVar2 = puVar2 + 2) {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = uVar1;
      puVar2[1] = uVar1;
    }
    FUN_00497714(param_4,local_10,param_4,*(undefined4 *)(param_1 + 0x70),1,local_10 + 1);
    local_14 = local_14 + 1;
    local_18 = local_18 + 2;
  }
  return;
}

