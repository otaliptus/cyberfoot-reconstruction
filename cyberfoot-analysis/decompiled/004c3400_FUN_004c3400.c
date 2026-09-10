// Address: 004c3400
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c3400(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  int local_28;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_38 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_3c = &LAB_004c35de;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  iVar2 = FUN_004c2f84(param_1,param_2);
  if (iVar2 < 0) {
    FUN_0040496c(&local_10,param_1);
    FUN_0040496c(&local_c,param_2);
    FUN_00404928(param_3,&DAT_004c35f4);
  }
  else {
    FUN_0040496c(&local_c,param_1);
    FUN_0040496c(&local_10,param_2);
    FUN_004048d4(param_3);
  }
  if ((local_c == 0) || (uVar4 = 0, local_10 == 0)) {
    uVar4 = local_c == 0;
    if ((bool)uVar4) {
      FUN_00404bf0(param_3,&DAT_004c35f4,local_10);
    }
    else {
      FUN_00404928(param_3,local_c);
    }
  }
  FUN_00404cf0(local_c,&DAT_004c3600);
  if (!(bool)uVar4) {
    FUN_00404cf0(local_10,&DAT_004c3600);
    if (!(bool)uVar4) {
      local_21 = 0;
      local_14 = FUN_00404da4(local_c);
      local_18 = FUN_00404da4(local_10);
      iVar2 = FUN_00404ba4(local_c);
      local_1c = FUN_00404ba4(local_10);
      local_28 = FUN_004323b8(iVar2,local_1c);
      FUN_004048d4(param_3);
      if (0 < local_28) {
        iVar3 = 1;
        do {
          local_20 = local_1c - iVar3;
          if (iVar2 < iVar3) {
            local_22 = 0x30;
          }
          else {
            local_22 = *(undefined1 *)(local_14 + (iVar2 - iVar3));
          }
          if (local_1c < iVar3) {
            local_23 = 0x30;
          }
          else {
            local_23 = *(undefined1 *)(local_18 + local_20);
          }
          FUN_004c3250(CONCAT31((int3)((uint)&local_8 >> 8),local_22),local_23,&local_21,&local_8);
          FUN_00404bf0(param_3,local_8,*param_3);
          iVar3 = iVar3 + 1;
          local_28 = local_28 + -1;
        } while (local_28 != 0);
      }
      if (*param_3 == 0) {
        FUN_00404928(param_3,&DAT_004c3600);
      }
      goto LAB_004c35c3;
    }
  }
  FUN_00404cf0(local_10,&DAT_004c3600);
  if ((bool)uVar4) {
    FUN_00404928(param_3,local_c);
  }
  else {
    FUN_00404cf0(local_c,&DAT_004c3600);
    if ((bool)uVar4) {
      FUN_00404928(param_3,&DAT_004c3600);
    }
    else {
      FUN_00404928(param_3,local_10);
    }
  }
LAB_004c35c3:
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_004c35e5;
  puStack_3c = (undefined1 *)0x4c35dd;
  FUN_004048f8(&local_10,3,puVar1);
  return;
}

