// Address: 0042d394
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042d394(int param_1,undefined2 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x42d3af;
  FUN_0041dec0(*(undefined4 *)(param_1 + 4),param_3);
  puStack_20 = &LAB_0042d3d8;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_0041dec0(*(undefined4 *)(param_1 + 8),param_2);
  *in_FS_OFFSET = uStack_24;
  return;
}

