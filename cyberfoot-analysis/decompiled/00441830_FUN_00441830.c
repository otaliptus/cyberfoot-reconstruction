// Address: 00441830
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00441830(int param_1,char param_2)

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
  FUN_004418d0(param_1,0x80000001);
  *(undefined4 *)(param_1 + 0x18) = 0xf003f;
  *(undefined1 *)(param_1 + 0xc) = 1;
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

