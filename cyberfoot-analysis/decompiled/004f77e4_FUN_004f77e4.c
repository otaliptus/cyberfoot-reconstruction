// Address: 004f77e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f77e4(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *in_FS_OFFSET;
  int iStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_2c = *param_3;
  uStack_28 = param_3[1];
  uStack_24 = param_3[2];
  uStack_20 = param_3[3];
  local_1c = *param_2;
  uStack_18 = param_2[1];
  uStack_14 = param_2[2];
  uStack_10 = param_2[3];
  puStack_3c = (undefined1 *)0x4f7809;
  FUN_004170d0(&local_1c);
  puStack_3c = (undefined1 *)0x4f7811;
  FUN_004170d0(&local_2c);
  puStack_40 = &LAB_004f7863;
  iStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_44;
  puStack_3c = &stack0xfffffffc;
  FUN_0050f85c(param_1,&local_1c,&local_2c);
  (**(code **)(*param_1 + 0x23c))(param_1,local_c,local_8);
  *in_FS_OFFSET = (int)&local_c;
  puStack_40 = &LAB_004f786a;
  iStack_44 = 0x4f7862;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  return;
}

