// Address: 0042a834
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042a834(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x42a846;
  FUN_00429f24(param_1);
  puStack_14 = &LAB_0042a879;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00429828(DAT_0066c8e4,param_1,param_2);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0042a880;
  puStack_14 = (undefined1 *)0x42a878;
  FUN_00429f34(param_1,uStack_18,puVar1);
  return;
}

