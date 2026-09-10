// Address: 00426b34
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00426b34(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  int local_c;
  undefined1 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_18 = 0;
  puStack_24 = &LAB_00426ba2;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  if (param_2 != 0) {
    FUN_0040db5c(param_2,&local_18);
    local_14 = local_18;
    local_10 = 0xb;
    local_8 = 0;
    local_c = param_2;
    FUN_0040e468(PTR_DAT_0041c4ec,1,PTR_PTR_0066b10c,1,&local_14);
    FUN_00404250();
    puVar1 = puStack_20;
  }
  puStack_20 = puVar1;
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00426ba9;
  puStack_24 = (undefined1 *)0x426ba1;
  FUN_004048d4(&local_18,uStack_28,puVar1);
  return;
}

