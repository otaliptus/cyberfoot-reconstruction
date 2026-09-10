// Address: 004b166c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004b166c(int param_1,char param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  uVar1 = *(undefined4 *)(param_3 + 4);
  uVar2 = GdipCreatePathGradientFromPath();
  *(undefined4 *)(param_1 + 8) = uVar2;
  FUN_004aed98(param_1,0);
  if (cVar3 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uVar1;
  }
  return param_1;
}

