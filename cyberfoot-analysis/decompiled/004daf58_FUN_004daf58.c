// Address: 004daf58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_004daf58(int *param_1,char param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403de8();
    cVar4 = extraout_DL;
  }
  FUN_00465308(param_1,0);
  FUN_00466334(param_1,0);
  (**(code **)(*param_1 + 0x68))(param_1,*(undefined4 *)(*(int *)PTR_DAT_0066b3ac + 0x44));
  FUN_00466128(param_1,1);
  uVar1 = FUN_00473540(PTR_PTR_004d88b0,1,param_1);
  FUN_0046557c(param_1,uVar1);
  piVar2 = (int *)(**(code **)(*param_1 + 0x3c))();
  (**(code **)(*piVar2 + 0x34))();
  iVar3 = (**(code **)(*param_1 + 0x3c))();
  *(int **)(iVar3 + 0x4c) = param_1;
  *(undefined1 **)(iVar3 + 0x48) = &LAB_004db02c;
  *(int **)(DAT_0067aeb0 + 0x38) = param_1;
  if (cVar4 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = &LAB_004db02c;
  }
  return param_1;
}

