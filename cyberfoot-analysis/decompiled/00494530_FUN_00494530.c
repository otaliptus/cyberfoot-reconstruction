// Address: 00494530
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00494530(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 *local_10;
  int local_c;
  
  local_10 = (undefined4 *)*param_4;
  for (local_c = 0; local_c < *(int *)(param_1 + 0x138); local_c = local_c + 1) {
    puVar3 = (undefined1 *)*param_3;
    puVar2 = (undefined1 *)*local_10;
    puVar4 = puVar2 + *(int *)(param_1 + 0x70);
    for (; puVar2 < puVar4; puVar2 = puVar2 + 2) {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = uVar1;
      puVar2[1] = uVar1;
    }
    local_10 = local_10 + 1;
    param_3 = param_3 + 1;
  }
  return;
}

