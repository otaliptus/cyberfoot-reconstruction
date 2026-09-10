// Address: 004f1350
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_004f1350(int *param_1,char param_2)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 local_20;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_004eff5c(param_1,0);
  FUN_004bc42c();
  (**(code **)(*param_1 + 0x114))();
  iVar1 = FUN_00403a54(PTR_PTR_0041bda0,1);
  param_1[0xa6] = iVar1;
  iVar1 = FUN_00403a54(PTR_PTR_0041bda0,1);
  param_1[0xa8] = iVar1;
  FUN_0040502c(param_1 + 0xa9,L"None");
  *(undefined1 *)(param_1 + 0xaa) = 1;
  *(undefined1 *)((int)param_1 + 0x2a9) = 2;
  FUN_0040502c(param_1 + 0xab,L"Today");
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    local_20 = SUB84((double)in_ST0,0);
    *in_FS_OFFSET = local_20;
  }
  return param_1;
}

