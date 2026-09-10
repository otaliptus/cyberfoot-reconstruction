// Address: 004c3c3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c3c3c(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_004c3cdd;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_8 = param_1;
  FUN_00404928(param_3,param_1);
  FUN_00404928(param_4,&DAT_004c3cf8);
  while( true ) {
    iVar2 = FUN_004c2f84(*param_3,param_2);
    puVar1 = puStack_24;
    if (iVar2 < 0) break;
    iVar2 = FUN_00409ff8(*param_4);
    FUN_00409dd8(iVar2 + 1,&local_c);
    FUN_00404928(param_4,local_c);
    FUN_004c3400(*param_3,param_2,&local_14);
    FUN_004c2f48(local_14,&local_10);
    FUN_00404928(param_3,local_10);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004c3ce4;
  puStack_28 = (undefined1 *)0x4c3cdc;
  FUN_004048f8(&local_14,3,puVar1);
  return;
}

