// Address: 0045df84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_0045df84(int *param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403de8();
    cVar3 = extraout_DL;
  }
  FUN_0045d16c(param_1,0);
  uVar1 = (**(code **)(*param_1 + 0xf8))();
  iVar2 = FUN_00403a54(uVar1,1);
  param_1[0x8f] = iVar2;
  *(int **)(iVar2 + 0x10) = param_1;
  param_1[0x8e] = 0x10;
  *(undefined1 *)((int)param_1 + 0x276) = 0;
  param_1[0x9b] = 0;
  *(undefined1 *)(param_1 + 0x9a) = 1;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  if (cVar3 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

