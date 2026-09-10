// Address: 004340e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004340e8(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined2 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int *local_14;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_c = 0;
  local_10 = (int *)0x0;
  local_14 = (int *)0x0;
  puStack_28 = &LAB_004341cd;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_2;
  if (param_3 != 0) {
    FUN_00404928(param_1 + 0x24,param_3);
    puVar1 = puStack_24;
  }
  puStack_24 = puVar1;
  iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 8);
  if (0 < iVar2) {
    if (iVar2 == 1) {
      iVar2 = FUN_00432768(*(undefined4 *)(param_1 + 0x18),0);
      FUN_00406898(&local_c,*(undefined4 *)(iVar2 + 4));
      FUN_004068c4(&local_10,local_c,&DAT_004341e0,param_4,CONCAT22(extraout_var,param_5));
      (**(code **)(*local_10 + 0x40))(local_10,local_8,param_3);
    }
    else {
      iVar2 = FUN_00432768(*(undefined4 *)(param_1 + 0x18),0);
      FUN_00406898(&local_c,*(undefined4 *)(iVar2 + 4));
      FUN_004068c4(&local_14,local_c,&DAT_004341e0,param_4,CONCAT22(extraout_var_00,param_5));
      (**(code **)(*local_14 + 0x40))(local_14,local_8,param_3);
    }
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004341d4;
  puStack_28 = (undefined1 *)0x4341c4;
  FUN_00405744(&local_14,PTR_DAT_0043394c,2);
  puStack_28 = (undefined1 *)0x4341cc;
  FUN_00406880(&local_c);
  return;
}

