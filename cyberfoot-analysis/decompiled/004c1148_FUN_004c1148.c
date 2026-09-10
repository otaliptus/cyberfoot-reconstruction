// Address: 004c1148
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c1148(int param_1,undefined4 param_2,undefined1 param_3,int *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_FS_OFFSET;
  undefined4 *puStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_5;
  
  puStack_3c = &stack0xfffffffc;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  puStack_40 = &LAB_004c130e;
  puStack_44 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_44;
  local_c = 0;
  local_5 = param_3;
  FUN_00404928(param_4,param_2);
  iVar3 = FUN_00404ba4(param_1);
  if (0 < iVar3) {
    local_18 = 1;
    local_1c = iVar3;
    do {
      cVar2 = FUN_004c09bc(param_1,local_18);
      if ((byte)(cVar2 - 1U) < 2) {
        local_14 = FUN_004c0ed8(param_1,local_18);
        local_10 = FUN_00404ba4(*param_4);
        local_10 = local_10 + 1;
        iVar6 = local_c + 1;
        iVar4 = FUN_00404ba4(*param_4);
        iVar3 = local_10;
        if (iVar6 <= iVar4) {
          local_20 = (iVar4 - iVar6) + 1;
          do {
            cVar2 = FUN_004c0b8c(*(undefined1 *)(param_1 + -1 + local_18));
            iVar3 = iVar6;
            if (cVar2 == *(char *)(*param_4 + -1 + iVar6)) break;
            iVar6 = iVar6 + 1;
            local_20 = local_20 + -1;
            iVar3 = local_10;
          } while (local_20 != 0);
        }
        local_10 = iVar3;
        iVar3 = FUN_00404ba4(*param_4);
        if (iVar3 < local_10) {
          uVar5 = FUN_004c0b8c(*(undefined1 *)(param_1 + -1 + local_18));
          FUN_00404abc(&local_24,uVar5);
          FUN_00404bac(param_4,local_24);
        }
        puStack_44 = &local_28;
        FUN_004c0fb0(param_1,*param_4,local_c + 1);
        FUN_00404928(param_4,local_28);
        local_c = local_14;
      }
      local_18 = local_18 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  uVar5 = FUN_00404ba4(param_1);
  iVar3 = FUN_004c0ed8(param_1,uVar5);
  iVar4 = FUN_00404ba4(*param_4);
  if (iVar3 != iVar4) {
    iVar4 = FUN_00404ba4(*param_4);
    FUN_004c0fb0(param_1,*param_4,local_c + 1,&local_2c,
                 CONCAT31((int3)((uint)(iVar4 + 1) >> 8),local_5),iVar3 - local_c,iVar4 + 1);
    FUN_00404928(param_4,local_2c);
  }
  iVar3 = FUN_00404ba4(*param_4);
  if (0 < iVar3) {
    local_14 = 1;
    local_1c = iVar3;
    do {
      if ((*(char *)(*param_4 + -1 + local_14) == ' ') &&
         (cVar2 = FUN_004c0f88(param_1,local_14 + -1), cVar2 == '\0')) {
        iVar3 = thunk_FUN_00404db0(param_4);
        *(undefined1 *)(iVar3 + -1 + local_14) = local_5;
      }
      local_14 = local_14 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  puVar1 = puStack_3c;
  *in_FS_OFFSET = (int)puStack_44;
  puStack_3c = &LAB_004c1315;
  puStack_40 = (undefined1 *)0x4c130d;
  FUN_004048f8(&local_2c,3,puVar1);
  return;
}

