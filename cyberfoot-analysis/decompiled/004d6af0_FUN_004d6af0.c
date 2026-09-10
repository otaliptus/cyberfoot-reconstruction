// Address: 004d6af0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d6af0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_c = 0;
  local_10 = 0;
  puStack_20 = (undefined1 *)0x4d6b0b;
  local_8 = param_2;
  FUN_00404d94(param_4);
  puStack_24 = &LAB_004d6bb2;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *(undefined4 *)(param_1 + 4) = param_3;
  puStack_20 = &stack0xfffffffc;
  iVar2 = FUN_004195b4(param_3,param_4,DAT_004d6bc4);
  *(int *)(param_1 + 8) = iVar2;
  if (iVar2 != 0) {
    FUN_00404bf0(&local_c,param_4,&DAT_004d6bd0,0,0,&LAB_004d6974,param_1);
    (**(code **)(*local_8 + 4))(local_8,local_c,0);
    FUN_00404bf0(&local_10,param_4,"_UTF7",FUN_004d6a84,param_1,FUN_004d69fc,param_1);
    (**(code **)(*local_8 + 4))(local_8,local_10,0);
  }
  puVar1 = puStack_20;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004d6bb9;
  puStack_24 = (undefined1 *)0x4d6ba9;
  FUN_004048f8(&local_10,2,puVar1);
  puStack_24 = (undefined1 *)0x4d6bb1;
  FUN_004048d4(&param_4);
  return;
}

