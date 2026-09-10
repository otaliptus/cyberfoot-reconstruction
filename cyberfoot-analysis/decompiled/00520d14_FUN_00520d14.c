// Address: 00520d14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00520d14(int param_1,char param_2)

{
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar1 = extraout_DL;
  }
  FUN_005204fc(param_1,0);
  FUN_004032a8(param_1 + 0xc,0xb,0);
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

