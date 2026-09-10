// Address: 004c3604
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c3604(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_FS_OFFSET;
  int *piVar4;
  undefined1 *puVar5;
  int iStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined1 local_21;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined1 local_10 [4];
  int local_c;
  undefined4 *local_8;
  
  puStack_54 = &stack0xfffffffc;
  local_40 = 0;
  local_44 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_28 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_58 = &LAB_004c37dd;
  iStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_5c;
  local_21 = *PTR_DAT_0066b70c;
  local_8 = param_3;
  uVar1 = FUN_00404ba4(param_1,param_2,param_3,&local_20);
  uVar2 = FUN_00404ba4(param_2);
  puVar5 = local_10;
  piVar4 = &local_c;
  FUN_004c3038(param_1,param_2,&local_1c,piVar4,&local_14,puVar5,uVar2,uVar1);
  local_18 = FUN_00404da4(local_20);
  local_14 = local_14 + -1;
  if (-1 < local_14) {
    do {
      FUN_00409ff8(local_1c);
      local_14 = local_14 + -1;
    } while (local_14 != -1);
  }
  FUN_00409fa8(local_8);
  if (local_c != -0xff) {
    iVar3 = FUN_00404ba4(*local_8);
    iVar3 = iVar3 - local_c;
    if (iVar3 == 0) {
      FUN_004030d4(local_2c,&DAT_004c37ec);
      local_2f = local_21;
      local_30 = 1;
      FUN_004030a4(local_2c,&local_30,2);
      FUN_00404b48(&local_28,local_2c);
      FUN_00404bf0(local_8,local_28,*local_8);
    }
    else if (iVar3 < 1) {
      if (iVar3 < 0) {
        FUN_00404abc(&local_40,local_21);
        FUN_00404f94(0x30,-iVar3,&local_44,local_40);
        FUN_00404c64(local_8,3);
      }
    }
    else {
      FUN_00404e04(*local_8,1,iVar3,&local_34);
      FUN_00404abc(&local_38,local_21);
      FUN_00404e04(*local_8,iVar3 + 1,local_c,&local_3c);
      FUN_00404c64(local_8,3);
    }
  }
  *in_FS_OFFSET = (int)piVar4;
  FUN_004048f8(&local_44,5,puVar5,&LAB_004c37e4);
  FUN_004048d4(&local_28);
  FUN_004048f8(&local_20,2);
  return;
}

