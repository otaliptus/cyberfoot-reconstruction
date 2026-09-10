// Address: 005bb714
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_005bb714(int *param_1,char param_2)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_00426e58(param_1,0);
  (**(code **)(*param_1 + 0x30))();
  *(int *)(param_1[0xc] + 0x38) = *(int *)(param_1[0xc] + 0x38) + 1;
  iVar1 = FUN_005bb464(PTR_DAT_005bb260,1,param_1);
  param_1[0xe] = iVar1;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

