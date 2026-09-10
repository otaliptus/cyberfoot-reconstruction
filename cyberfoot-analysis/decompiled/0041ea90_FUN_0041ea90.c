// Address: 0041ea90
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041ea90(undefined4 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined1 local_118 [256];
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_18 = 0;
  puStack_12c = &LAB_0041eb25;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  if (param_1[1] == 0) {
    FUN_004039d4(*param_1,local_118);
    FUN_00404b48(param_2,local_118);
  }
  else {
    puStack_128 = &stack0xfffffffc;
    FUN_00403c80(param_1[1],&local_18,0,param_2);
    local_14 = local_18;
    local_10 = 0xb;
    local_c = FUN_0041ea50(param_1);
    local_8 = 0;
    FUN_0040ae64("%s[%d]",&local_14,1,param_2);
  }
  puVar1 = puStack_128;
  *in_FS_OFFSET = uStack_130;
  puStack_128 = &LAB_0041eb2c;
  puStack_12c = (undefined1 *)0x41eb24;
  FUN_004048d4(&local_18,uStack_130,puVar1);
  return;
}

