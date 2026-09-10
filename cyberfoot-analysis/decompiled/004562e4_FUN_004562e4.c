// Address: 004562e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_004562e4(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403de8();
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  FUN_00403a54(param_1,0);
  uVar1 = (**(code **)(*param_1 + 0x84))();
  uVar2 = (**(code **)(*param_1 + 0x80))();
  iVar3 = FUN_004431d0(uVar2,1,param_3,uVar1);
  param_1[5] = iVar3;
  if (cVar4 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

