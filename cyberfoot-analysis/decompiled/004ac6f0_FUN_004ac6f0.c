// Address: 004ac6f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ac6f0(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2 != '\0') {
    puStack_28 = (undefined1 *)0x4ac704;
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
  }
  puStack_2c = &LAB_004ac762;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_004ac5d0(param_3,&local_8);
  FUN_004ac620(param_1,0,local_8,param_4,param_7);
  FUN_00404928(param_1 + 0x10,param_6);
  FUN_00404928(param_1 + 0x14,param_5);
  puVar1 = puStack_30;
  *in_FS_OFFSET = param_4;
  puStack_30 = &LAB_004ac769;
  FUN_004048d4(&local_8,param_4,puVar1);
  return;
}

