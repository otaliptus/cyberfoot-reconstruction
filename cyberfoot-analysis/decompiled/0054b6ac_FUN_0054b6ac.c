// Address: 0054b6ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_0054b6ac(int *param_1,char param_2)

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
  FUN_0054c6a4(param_1,0);
  (**(code **)(*param_1 + 0x118))(param_1,3);
  param_1[0xac] = 0xff0000;
  param_1[0xaf] = 200;
  FUN_004048d4(param_1 + 0xb0);
  FUN_004048d4(param_1 + 0xb1);
  param_1[0xb2] = -1;
  iVar1 = FUN_00403a54(PTR_PTR_004b23cc,1);
  param_1[0xbe] = iVar1;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

