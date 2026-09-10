// Address: 0047b2e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_0047b2e0(int *param_1,char param_2)

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
  FUN_00479db8(param_1,0);
  param_1[0x16] = -1;
  param_1[0x17] = -1;
  iVar1 = param_1[0xd];
  *(int **)(iVar1 + 0x8c) = param_1;
  *(undefined4 *)(iVar1 + 0x88) = *(undefined4 *)(*param_1 + 0x3c);
  param_1[0xe] = *(int *)(*(int *)PTR_DAT_0066b3ac + 0x30);
  *(undefined1 *)((int)param_1 + 0x61) = 1;
  FUN_0047b29c(DAT_0066cbe4,param_1);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

