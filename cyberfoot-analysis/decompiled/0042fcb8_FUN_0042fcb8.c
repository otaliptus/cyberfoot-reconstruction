// Address: 0042fcb8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_0042fcb8(int *param_1,char param_2)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_0042cb20(param_1,0);
  param_1[0xd] = 0x20000000;
  iVar1 = FUN_00403a54(PTR_PTR_00429318,1);
  param_1[10] = iVar1;
  FUN_0042f210(iVar1);
  if (DAT_006626cc != '\0') {
    (**(code **)(*param_1 + 0x6c))(param_1,1);
  }
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

