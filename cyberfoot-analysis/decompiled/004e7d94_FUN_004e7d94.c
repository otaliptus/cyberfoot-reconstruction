// Address: 004e7d94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004e7d94(int param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar1 = extraout_DL;
    param_3 = extraout_ECX;
  }
  FUN_004e79e4(param_1,0,param_3,param_4);
  *(undefined4 *)(param_1 + 0x28) = 8;
  *(undefined1 *)(param_1 + 0x40) = DAT_004e7dec;
  *(undefined1 *)(param_1 + 0x51) = DAT_004e7dec;
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

