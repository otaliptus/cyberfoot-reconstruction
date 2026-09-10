// Address: 004af018
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004af018(int param_1,char param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  uVar1 = GdipCreateFromHDC();
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_004afbcc(param_1,0);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = param_3;
  }
  return param_1;
}

