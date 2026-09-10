// Address: 0041e680
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041e680(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  undefined4 local_118;
  undefined1 local_114;
  undefined1 *local_110;
  undefined1 local_10c;
  undefined1 local_108 [256];
  undefined4 local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_8 = 0;
  puStack_128 = &LAB_0041e736;
  puStack_12c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_12c;
  if (param_2 == (undefined4 *)0x0) {
    FUN_0040496c(&local_8,&DAT_0041e74c);
  }
  else {
    puStack_124 = &stack0xfffffffc;
    FUN_004039d4(*param_2,local_108);
    FUN_00404b48(&local_8,local_108);
  }
  local_118 = local_8;
  local_114 = 0xb;
  FUN_004039d4(*param_1,local_108);
  local_110 = local_108;
  local_10c = 4;
  uVar2 = 1;
  FUN_0040e468(PTR_DAT_00408d90,1,PTR_PTR_0066b150,1,&local_118);
  FUN_00404250();
  puVar1 = puStack_12c;
  *in_FS_OFFSET = uVar2;
  puStack_12c = &LAB_0041e73d;
  FUN_004048d4(&local_8,uVar2,puVar1);
  return;
}

