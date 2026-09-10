// Address: 005185e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_005185e8(int param_1,char param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_00517ff0(param_1,0,param_3,param_4);
  *(undefined4 *)(param_1 + 0x60) = 0x20;
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

