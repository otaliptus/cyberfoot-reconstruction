// Address: 004f1c0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004f1c0c(int param_1,char param_2)

{
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar1 = extraout_DL;
  }
  FUN_004efca0(param_1,0);
  *(uint *)(param_1 + 0x50) = ~DAT_004f1cb0 & *(uint *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  FUN_004048d4(param_1 + 0x268);
  *(undefined1 *)(param_1 + 0x26c) = DAT_004f1cb4;
  *(undefined4 *)(param_1 + 0x270) = 2;
  FUN_004048d4(param_1 + 0x274);
  FUN_004048d4(param_1 + 0x278);
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x284) = 0;
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

