// Address: 004689f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004689f4(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x468a06;
  FUN_00469298(param_1);
  puStack_14 = &LAB_00468a34;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00465644(param_1,param_2);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00468a3b;
  puStack_14 = (undefined1 *)0x468a33;
  FUN_004692a0(param_1,uStack_18,puVar1);
  return;
}

