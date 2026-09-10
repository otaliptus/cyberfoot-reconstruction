// Address: 0040e3ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040e3ac(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2 != '\0') {
    puStack_28 = (undefined1 *)0x40e3c0;
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
  }
  puStack_2c = &LAB_0040e406;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_0040ae64(param_3,param_5,param_4,&local_8);
  FUN_00404928(param_1 + 4,local_8);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0040e40d;
  puStack_2c = (undefined1 *)0x40e405;
  FUN_004048d4(&local_8,uStack_30,puVar1);
  return;
}

