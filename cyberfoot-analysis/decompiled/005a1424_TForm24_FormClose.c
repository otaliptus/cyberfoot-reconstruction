// Address: 005a1424
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm24_FormClose(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_20 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_20;
  DAT_006d2490 = 0;
  *in_FS_OFFSET = uVar1;
  *param_3 = 2;
  return;
}

