// Address: 0042c924
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042c924(int *param_1,HICON param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined4 uStack_70;
  undefined1 local_58;
  undefined1 local_57;
  short local_56;
  int local_50;
  undefined4 local_4c;
  ICONINFO local_48;
  int local_34;
  undefined1 local_2e [2];
  undefined2 local_2c;
  undefined2 local_2a;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  char local_5;
  
  local_5 = param_3;
  FUN_004032a8(local_2e,6,0);
  FUN_004032a8(&local_58,0x10,0);
  uStack_70 = 0x42c95c;
  GetIconInfo(param_2,&local_48);
  FUN_0042c918();
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  puStack_74 = (undefined1 *)0x2;
  puStack_78 = (undefined1 *)0x42c97f;
  FUN_0042c7e4(local_48.hbmMask,&local_c,&local_14);
  puStack_74 = (undefined1 *)0x10;
  puStack_78 = (undefined1 *)0x42c98f;
  FUN_0042c7e4(local_48.hbmColor,&local_10,&local_18);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  puStack_78 = &LAB_0042caeb;
  uStack_7c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_7c;
  puStack_74 = &stack0xfffffffc;
  local_1c = FUN_0040952c(local_c);
  local_20 = FUN_0040952c(local_14);
  local_24 = FUN_0040952c(local_10);
  local_28 = FUN_0040952c(local_18);
  uVar4 = 2;
  FUN_0042c850(local_48.hbmMask,0,local_1c,2,local_20);
  uVar3 = 0x10;
  FUN_0042c850(local_48.hbmColor,0,local_24,0x10,local_28);
  if (local_5 != '\0') {
    local_34 = local_10 + 0x16 + local_18 + local_14;
    (**(code **)(*param_1 + 0x10))(param_1,&local_34,4);
  }
  local_2c = 1;
  local_2a = 1;
  (**(code **)(*param_1 + 0x10))(param_1,local_2e,6);
  iVar2 = local_24;
  local_58 = *(undefined1 *)(local_24 + 4);
  local_57 = *(undefined1 *)(local_24 + 8);
  local_56 = *(short *)(local_24 + 0xc) * *(short *)(local_24 + 0xe);
  local_50 = local_10 + local_18 + local_14;
  local_4c = 0x16;
  (**(code **)(*param_1 + 0x10))(param_1,&local_58,0x10);
  piVar1 = (int *)(iVar2 + 8);
  *piVar1 = *piVar1 + *(int *)(iVar2 + 8);
  (**(code **)(*param_1 + 0x10))(param_1,local_24,local_10);
  (**(code **)(*param_1 + 0x10))(param_1,local_28,local_18);
  (**(code **)(*param_1 + 0x10))(param_1,local_20,local_14);
  *in_FS_OFFSET = uVar3;
  FUN_0040281c(local_24,local_10,uVar4,&LAB_0042caf2);
  FUN_0040281c(local_28,local_18);
  FUN_0040281c(local_1c,local_c);
  FUN_0040281c(local_20,local_14);
  return;
}

