// Address: 00494358
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00494358(int param_1,int *param_2,int *param_3,int param_4,int *param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *local_20;
  undefined4 *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  iVar2 = *(int *)(param_1 + 0x1c4);
  if (*(int *)(param_1 + 0x138) <= *(int *)(iVar2 + 0x5c)) {
    local_10 = 0;
    local_14 = *(int *)(param_1 + 0xd8);
    local_1c = (undefined4 *)(iVar2 + 0x34);
    local_20 = param_2;
    for (; local_10 < *(int *)(param_1 + 0x24); local_10 = local_10 + 1) {
      (*(code *)*local_1c)
                (param_1,local_14,*param_3 * local_1c[0xc] * 4 + *local_20,
                 local_10 * 4 + iVar2 + 0xc);
      local_1c = local_1c + 1;
      local_20 = local_20 + 1;
      local_14 = local_14 + 0x54;
    }
    *(undefined4 *)(iVar2 + 0x5c) = 0;
  }
  local_18 = *(int *)(param_1 + 0x138) - *(int *)(iVar2 + 0x5c);
  if (*(uint *)(iVar2 + 0x60) < local_18) {
    local_18 = *(uint *)(iVar2 + 0x60);
  }
  uVar1 = param_4 - *param_5;
  if (uVar1 < local_18) {
    local_18 = uVar1;
  }
  (**(code **)(*(int *)(param_1 + 0x1c8) + 4))
            (param_1,iVar2 + 0xc,*(int *)(iVar2 + 0x5c),local_18,*param_5 * 4 + param_6);
  *param_5 = *param_5 + local_18;
  *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) - local_18;
  iVar3 = *(int *)(iVar2 + 0x5c) + local_18;
  *(int *)(iVar2 + 0x5c) = iVar3;
  if (*(int *)(param_1 + 0x138) <= iVar3) {
    *param_3 = *param_3 + 1;
  }
  return;
}

