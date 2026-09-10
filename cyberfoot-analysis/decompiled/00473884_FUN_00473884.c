// Address: 00473884
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_00473884(int *param_1,char param_2,int param_3,int param_4)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403de8();
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00426e58(param_1,0,0);
  param_1[0xd] = param_3;
  param_1[0xc] = param_4;
  (**(code **)(*param_1 + 0x34))();
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

