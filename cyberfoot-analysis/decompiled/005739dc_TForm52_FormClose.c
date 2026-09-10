// Address: 005739dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm52_FormClose(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  puStack_1c = &LAB_00573a30;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0040fe60(&DAT_006d1f24);
  FUN_0040fe60(&DAT_006d1f28);
  FUN_0040fe60(&DAT_006d1f2c);
  FUN_0040fe60(&DAT_006d1f30);
  FUN_0040fe60(&DAT_006d1f34);
  *in_FS_OFFSET = uStack_20;
  *param_3 = 2;
  return;
}

