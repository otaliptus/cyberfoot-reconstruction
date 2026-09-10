// Address: 0045cb24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_0045cb24(int *param_1,char param_2)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_0045bdb4(param_1,0);
  FUN_004659c4(param_1,0xb9);
  FUN_004659e8(param_1,0x59);
  (**(code **)(*param_1 + 0x5c))(param_1,0);
  *(undefined1 *)((int)param_1 + 0x226) = 1;
  *(undefined1 *)((int)param_1 + 0x227) = 1;
  iVar1 = FUN_00403a54(PTR_LAB_0045b55c,1);
  param_1[0x88] = iVar1;
  *(int **)(iVar1 + 0x10) = param_1;
  (**(code **)(*param_1 + 0xbc))(param_1,0);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

