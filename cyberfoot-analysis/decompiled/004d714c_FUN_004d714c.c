// Address: 004d714c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d714c(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_24 = 0;
  local_20 = 0;
  puStack_38 = &LAB_004d72d4;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_40 = (undefined1 *)0x4d717b;
  local_c = param_2;
  local_8 = param_1;
  FUN_00403cc4(*param_2);
  puStack_40 = (undefined1 *)0x4d7180;
  iVar3 = FUN_00419c28();
  puVar2 = puStack_34;
  local_10 = (int)*(short *)(iVar3 + 8);
  if (local_10 < 1) {
    *in_FS_OFFSET = uStack_3c;
    puStack_34 = &LAB_004d72db;
    puStack_38 = (undefined1 *)0x4d72d3;
    FUN_004048f8(&local_24,2,puVar2);
    return;
  }
  puStack_40 = (undefined1 *)0x4d719d;
  local_18 = FUN_00403a54(PTR_DAT_004d68f0,1);
  puStack_44 = &LAB_004d72b2;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_4c = (undefined1 *)0x4d71ba;
  puStack_40 = &stack0xfffffffc;
  local_1c = FUN_00403a54(PTR_DAT_004d6be4,1);
  puStack_50 = &LAB_004d7295;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_58 = (undefined1 *)0x4d71d6;
  puStack_4c = &stack0xfffffffc;
  local_14 = FUN_004027fc(local_10 << 2);
  puStack_5c = &LAB_004d7278;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  puStack_58 = &stack0xfffffffc;
  uVar4 = FUN_00403cc4(*local_c);
  FUN_00419e64(uVar4,local_14);
  if (-1 < local_10 + -1) {
    iVar5 = 0;
    iVar3 = local_10;
    do {
      puVar1 = *(undefined4 **)(local_14 + iVar5 * 4);
      if (puVar1 == (undefined4 *)0x0) break;
      if (**(char **)*puVar1 == '\v') {
        uVar4 = 0x4d7223;
        FUN_00404b48(&local_20,(int)puVar1 + 0x1a);
        uStack_60 = local_20;
        FUN_004d6af0(local_18,local_8,local_c,uVar4);
      }
      else if (**(char **)*puVar1 == '\t') {
        uVar4 = 0x4d7246;
        FUN_00404b48(&local_24,(int)puVar1 + 0x1a);
        uStack_60 = local_24;
        FUN_004d7034(local_1c,local_8,local_c,uVar4);
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar2 = puStack_58;
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_004d727f;
  puStack_5c = (undefined1 *)0x4d7277;
  FUN_0040281c(local_14,local_10 << 2,puVar2);
  return;
}

