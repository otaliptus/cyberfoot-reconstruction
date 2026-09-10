// Address: 005f5e80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm67_FormClose(int param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  puStack_1c = &LAB_005f5ead;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00474234(*(undefined4 *)(param_1 + 0x2f8));
  *in_FS_OFFSET = uStack_20;
  *param_3 = 2;
  return;
}

