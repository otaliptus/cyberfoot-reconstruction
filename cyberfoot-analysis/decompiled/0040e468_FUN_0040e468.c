// Address: 0040e468
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040e468(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar2;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = 0;
  if (param_2 != '\0') {
    puStack_2c = (undefined1 *)0x40e47e;
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
  }
  puStack_30 = &LAB_0040e4d4;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puVar2 = &local_8;
  puStack_2c = &stack0xfffffffc;
  FUN_00406d44(param_3,&local_c);
  FUN_0040ae64(local_c,param_5,param_4,puVar2);
  FUN_00404928(param_1 + 4,local_8);
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0040e4db;
  puStack_30 = (undefined1 *)0x40e4d3;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

