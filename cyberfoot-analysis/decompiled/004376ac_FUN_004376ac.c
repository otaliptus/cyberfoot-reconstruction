// Address: 004376ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004376ac(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_FS_OFFSET;
  undefined4 *puVar7;
  undefined1 *puStack_90;
  undefined1 *puStack_8c;
  undefined1 *puStack_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined *local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined *local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined *local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_88 = &stack0xfffffffc;
  local_74 = 0;
  local_78 = 0;
  local_20 = 0;
  local_18 = 0;
  local_1c = 0;
  local_14 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_8c = &LAB_0043785d;
  puStack_90 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_90;
  local_8 = param_2;
  FUN_00404f94(0x2d,0x1b,&local_14);
  FUN_00404bf0(&local_c,local_14,&DAT_00437874);
  iVar3 = FUN_0042747c(param_1);
  if (-1 < iVar3 + -1) {
    iVar6 = 0;
    do {
      uVar4 = FUN_00427450(param_1,iVar6);
      cVar2 = FUN_00403c10(uVar4,PTR_PTR_00459de4);
      if (cVar2 != '\0') {
        uVar4 = local_10;
        uVar5 = FUN_00427450(param_1,iVar6);
        FUN_00466208(uVar5,&local_18);
        FUN_00404f94(0x20,3,&local_1c,local_18,uVar4);
        FUN_00404c64(&local_10,3);
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar7 = &local_20;
  FUN_0040f7c8(local_10,&DAT_00437884,0,puVar7,DAT_00437878);
  FUN_0040496c(&local_10,local_20);
  local_70 = local_c;
  local_6c = 0xb;
  uVar4 = local_8;
  FUN_00466208(param_1,&local_74);
  local_68 = local_74;
  local_64 = 0xb;
  local_60 = &DAT_00437874;
  local_5c = 0xb;
  local_58 = local_c;
  local_54 = 0xb;
  FUN_00466208(*(undefined4 *)(param_1 + 0x2f8),&local_78);
  local_50 = local_78;
  local_4c = 0xb;
  local_48 = &DAT_00437874;
  local_44 = 0xb;
  local_40 = local_c;
  local_3c = 0xb;
  local_38 = local_10;
  local_34 = 0xb;
  local_30 = &DAT_00437874;
  local_2c = 0xb;
  local_28 = local_c;
  local_24 = 0xb;
  FUN_0040ae64("%s%s%s%s%s%s%s%s%s%s",&local_70,9,uVar4);
  puVar1 = puStack_90;
  *in_FS_OFFSET = (int)puVar7;
  puStack_90 = &LAB_00437864;
  FUN_004048f8(&local_78,2,puVar1);
  FUN_004048f8(&local_20,2);
  FUN_004048d4(&local_18);
  FUN_004048f8(&local_14,3);
  return;
}

