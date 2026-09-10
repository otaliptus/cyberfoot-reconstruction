// Address: 005473bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005473bc(ushort *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  ushort *local_8;
  
  puStack_10 = (undefined1 *)0x5473cc;
  local_8 = param_1;
  FUN_00405608(&local_8);
  puStack_14 = &LAB_00547443;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00405260(local_8);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0054744a;
  puStack_14 = (undefined1 *)0x547442;
  FUN_00404ff0(&local_8,uStack_18,puVar1);
  return;
}

