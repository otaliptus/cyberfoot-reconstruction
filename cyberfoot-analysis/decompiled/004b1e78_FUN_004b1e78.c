// Address: 004b1e78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004b1e78(int param_1,char param_2)

{
  undefined4 uVar1;
  char extraout_DL;
  char cVar2;
  int *in_FS_OFFSET;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = GdipCreateImageAttributes();
  *(undefined4 *)(param_1 + 8) = uVar1;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = param_1 + 4;
  }
  return param_1;
}

