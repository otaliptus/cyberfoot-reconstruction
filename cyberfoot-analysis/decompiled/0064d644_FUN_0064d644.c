// Address: 0064d644
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064d644(int param_1,int param_2,int *param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  puVar1 = PTR_DAT_0066ae84;
  local_18 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  iVar3 = 0;
  local_14 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066ae84);
  if ((0 < local_14) && (-1 < local_14 + -1)) {
    iVar2 = 0;
    do {
      if ((*(int *)(*(int *)puVar1 + iVar2 * 0x18) == param_1) &&
         (*(int *)(*(int *)puVar1 + 4 + iVar2 * 0x18) == param_2)) {
        local_18 = local_18 + 1;
        local_20 = local_20 + *(int *)(*(int *)puVar1 + 8 + iVar2 * 0x18);
        local_1c = local_1c + *(int *)(*(int *)puVar1 + 0xc + iVar2 * 0x18);
        if (*(int *)(*(int *)puVar1 + 0xc + iVar2 * 0x18) <
            *(int *)(*(int *)puVar1 + 8 + iVar2 * 0x18)) {
          local_2c = local_2c + 1;
          iVar3 = iVar2;
        }
        else if (*(int *)(*(int *)puVar1 + 8 + iVar2 * 0x18) <
                 *(int *)(*(int *)puVar1 + 0xc + iVar2 * 0x18)) {
          local_28 = local_28 + 1;
          iVar3 = iVar2;
        }
        else {
          local_24 = local_24 + 1;
          iVar3 = iVar2;
        }
      }
      else if ((*(int *)(*(int *)puVar1 + iVar2 * 0x18) == param_2) &&
              (*(int *)(*(int *)puVar1 + 4 + iVar2 * 0x18) == param_1)) {
        local_18 = local_18 + 1;
        local_20 = local_20 + *(int *)(*(int *)puVar1 + 0xc + iVar2 * 0x18);
        local_1c = local_1c + *(int *)(*(int *)puVar1 + 8 + iVar2 * 0x18);
        if (*(int *)(*(int *)puVar1 + 0xc + iVar2 * 0x18) <
            *(int *)(*(int *)puVar1 + 8 + iVar2 * 0x18)) {
          local_28 = local_28 + 1;
          iVar3 = iVar2;
        }
        else if (*(int *)(*(int *)puVar1 + 8 + iVar2 * 0x18) <
                 *(int *)(*(int *)puVar1 + 0xc + iVar2 * 0x18)) {
          local_2c = local_2c + 1;
          iVar3 = iVar2;
        }
        else {
          local_24 = local_24 + 1;
          iVar3 = iVar2;
        }
      }
      *param_3 = local_18;
      param_3[1] = local_24;
      param_3[2] = local_2c;
      param_3[3] = local_28;
      param_3[4] = local_20;
      param_3[5] = local_1c;
      param_3[6] = *(int *)(*(int *)puVar1 + 0x10 + iVar3 * 0x18);
      param_3[7] = *(int *)(*(int *)puVar1 + 0x14 + iVar3 * 0x18);
      param_3[8] = *(int *)(*(int *)puVar1 + iVar3 * 0x18);
      param_3[9] = *(int *)(*(int *)puVar1 + 4 + iVar3 * 0x18);
      param_3[10] = *(int *)(*(int *)puVar1 + 8 + iVar3 * 0x18);
      param_3[0xb] = *(int *)(*(int *)puVar1 + 0xc + iVar3 * 0x18);
      iVar2 = iVar2 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

