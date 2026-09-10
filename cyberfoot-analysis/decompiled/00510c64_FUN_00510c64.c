// Address: 00510c64
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00510c64(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  puStack_24 = &stack0xfffffffc;
  local_18 = 0;
  puStack_28 = &LAB_00510cfd;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_0050f004(param_1,&local_14);
  *param_2 = local_14 - *(int *)(*(int *)(param_1 + 0x238) + 0x2c);
  FUN_0050f004(param_1,&local_14);
  param_2[1] = local_10 + 4;
  iVar2 = FUN_00465c0c(param_1);
  param_2[2] = iVar2 - *(int *)(*(int *)(param_1 + 0x238) + 0x2c);
  FUN_00404b6c(&local_18,*(undefined4 *)(param_1 + 0x274));
  iVar2 = FUN_0042b400(*(undefined4 *)(param_1 + 0x208),local_18);
  puVar1 = puStack_24;
  param_2[3] = iVar2 + param_2[1];
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00510d04;
  puStack_28 = (undefined1 *)0x510cfc;
  FUN_004048d4(&local_18,uStack_2c,puVar1);
  return;
}

