// Address: 0042d080
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042d080(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_0042d103;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_3;
  local_8 = param_2;
  puVar2 = (undefined4 *)FUN_00405b6c(0x10,PTR_DAT_0042ce64);
  FUN_00409724(local_8,&local_10);
  FUN_00404928(puVar2 + 1,local_10);
  *puVar2 = param_4;
  FUN_00404928(puVar2 + 2,local_c);
  puVar2[3] = param_5;
  FUN_0041dec0(param_1,puVar2);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0042d10a;
  puStack_24 = (undefined1 *)0x42d102;
  FUN_004048d4(&local_10,uStack_28,puVar1);
  return;
}

