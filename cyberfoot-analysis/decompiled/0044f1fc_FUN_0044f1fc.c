// Address: 0044f1fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0044f1fc(int param_1,char param_2,int param_3)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00403a54(param_1,0);
  if (param_3 == 0) {
    FUN_0040e42c(PTR_DAT_00408738,1,PTR_PTR_0066b3d8);
    FUN_00404250();
  }
  *(int *)(param_1 + 4) = param_3;
  FUN_0044f270(param_1,0);
  FUN_0044f284(param_1,0);
  FUN_0044f298(param_1,1);
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

