// Address: 005a5c74
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm29_FormClose(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  puStack_1c = &LAB_005a5cb0;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004060a8(&DAT_006d2594,PTR_DAT_005a5bd4,1,0);
  *in_FS_OFFSET = uStack_20;
  *param_3 = 2;
  return;
}

