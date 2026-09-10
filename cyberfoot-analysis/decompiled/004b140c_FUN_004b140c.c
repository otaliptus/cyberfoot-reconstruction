// Address: 004b140c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004b140c(int param_1,char param_2,int param_3)

{
  undefined4 uVar1;
  int extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_3 + 4);
  }
  uVar1 = GdipCreateFont();
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_004b149c(param_1,0);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uVar3;
  }
  return param_1;
}

