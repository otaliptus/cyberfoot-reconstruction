// Address: 0041ccfc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041ccfc(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  undefined4 local_110;
  undefined1 local_10c;
  undefined1 local_108 [256];
  undefined4 local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = 0;
  puStack_120 = &LAB_0041cd97;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_004039d4(param_2,local_108);
  FUN_00404b48(&local_8,local_108);
  iVar2 = FUN_0041cc58(param_1,local_8);
  if (iVar2 != 0) {
    local_110 = local_8;
    local_10c = 0xb;
    FUN_0040e468(PTR_DAT_0041b354,1,PTR_PTR_0066b404,0,&local_110);
    FUN_00404250();
  }
  FUN_0041dec0(*(undefined4 *)(param_1 + 4),param_2);
  puVar1 = puStack_11c;
  *in_FS_OFFSET = uStack_124;
  puStack_11c = &LAB_0041cd9e;
  puStack_120 = (undefined1 *)0x41cd96;
  FUN_004048d4(&local_8,uStack_124,puVar1);
  return;
}

