// Address: 006468f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006468f4(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_28 = &stack0xfffffffc;
  puStack_34 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_0064699d;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_38 = &LAB_0064694f;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040be58("# ### ### ##0",&local_14,0,SUB108((float10)param_1,0),
               (short)((unkuint10)(float10)param_1 >> 0x40));
  FUN_004051d4(&local_10,local_14);
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = (undefined1 *)0x64697a;
  FUN_0040502c(local_c,local_10,puVar1);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_006469a4;
  puStack_2c = (undefined1 *)0x646994;
  FUN_004048f8(&local_18,2,puVar1);
  puStack_2c = (undefined1 *)0x64699c;
  FUN_00404ff0(&local_10);
  return;
}

