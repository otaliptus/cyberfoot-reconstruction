// Address: 00449adc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00449adc(int param_1,char param_2)

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
  FUN_0046872c(param_1,0);
  FUN_004659c4(param_1,0x96);
  FUN_004659e8(param_1,0x2d);
  FUN_0046cd14(param_1,1);
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 10;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 1;
  *(undefined4 *)(param_1 + 0x210) = 2;
  *(undefined4 *)(param_1 + 0x224) = 1;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0x14;
  *(undefined1 *)(param_1 + 0x209) = 0;
  *(undefined1 *)(param_1 + 0x20a) = 1;
  *(undefined1 *)(param_1 + 0x208) = 0;
  *(uint *)(param_1 + 0x50) = ~DAT_00449bb0 & *(uint *)(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x218) = 1;
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

