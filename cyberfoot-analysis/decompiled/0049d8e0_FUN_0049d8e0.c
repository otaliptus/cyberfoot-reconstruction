// Address: 0049d8e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0049d8e0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_18;
  int *local_14;
  
  iVar1 = *(int *)(param_1 + 0x168);
  if (*(int *)(param_1 + 0xc4) != 0) {
    if (*(int *)(iVar1 + 0x24) == 0) {
      puVar3 = (undefined4 *)(iVar1 + 0x14);
      for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0xf0); iVar4 = iVar4 + 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0xc4);
    }
    *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + -1;
  }
  local_14 = (int *)(param_1 + 0x110);
  for (local_18 = 0; local_18 < *(int *)(param_1 + 0x10c); local_18 = local_18 + 1) {
    iVar4 = *local_14;
    iVar2 = *(int *)(param_1 + 0xf4 + iVar4 * 4);
    FUN_0049d808(param_1,*param_2,*(undefined4 *)(iVar1 + 0x14 + iVar4 * 4),
                 *(undefined4 *)(iVar1 + 0x5c + *(int *)(iVar2 + 0x18) * 4),
                 *(undefined4 *)(iVar1 + 0x4c + *(int *)(iVar2 + 0x14) * 4));
    *(int *)(iVar1 + 0x14 + iVar4 * 4) = (int)*(short *)*param_2;
    param_2 = param_2 + 1;
    local_14 = local_14 + 1;
  }
  return 1;
}

