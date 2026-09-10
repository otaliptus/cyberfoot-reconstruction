// Address: 0042dcec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042dcec(undefined4 param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = 0;
  if (param_2 != '\0') {
    puStack_2c = (undefined1 *)0x42dd02;
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
  }
  puStack_30 = &LAB_0042dd5c;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  FUN_0042e1bc(param_3,&local_8);
  uVar2 = local_8;
  FUN_0042e224(param_3,&local_c);
  uVar1 = local_c;
  FUN_0042dd84(param_1,0,param_3,local_c,uVar2);
  *in_FS_OFFSET = uVar1;
  FUN_004048f8(&local_c,2,param_4,&LAB_0042dd63);
  return;
}

