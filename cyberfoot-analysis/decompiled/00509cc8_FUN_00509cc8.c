// Address: 00509cc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00509cc8(int param_1,char param_2)

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
  FUN_00509968(param_1,0);
  FUN_00509a8c(param_1,0xff00000f);
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x33) = 1;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

