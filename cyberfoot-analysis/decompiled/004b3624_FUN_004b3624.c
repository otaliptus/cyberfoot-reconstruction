// Address: 004b3624
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_004b3624(int *param_1,char param_2,int param_3)

{
  undefined4 uVar1;
  int extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403de8();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  uVar1 = (**(code **)(*param_1 + 0x28))();
  FUN_0041f0f8(param_1,0,param_3,uVar1);
  param_1[7] = param_3;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

