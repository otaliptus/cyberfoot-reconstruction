// Address: 0060ee88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0060ee88(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x60ee9c;
  FUN_0043b234(DAT_006d4918,0);
  puStack_14 = (undefined1 *)0x60eea3;
  FUN_0060ef04(param_1);
  puStack_14 = (undefined1 *)0x60eebb;
  FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005f2378,PTR_DAT_0066b4d0);
  puStack_14 = (undefined1 *)0x60eec7;
  FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b4d0);
  puStack_18 = &LAB_0060eee9;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_00483d64(DAT_006d4490);
  *in_FS_OFFSET = uStack_1c;
  return;
}

