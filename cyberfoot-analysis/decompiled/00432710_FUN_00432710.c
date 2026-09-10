// Address: 00432710
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00432710(int param_1,char param_2,undefined1 param_3)

{
  undefined1 extraout_CL;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar1 = extraout_DL;
    param_3 = extraout_CL;
  }
  FUN_00403a54(param_1,0);
  *(undefined1 *)(param_1 + 0x10) = param_3;
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

