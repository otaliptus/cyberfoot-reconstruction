// Address: 004b0580
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_004b0580(int *param_1,char param_2)

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
  iVar1 = FUN_00403a54(PTR_PTR_0041c090,1);
  param_1[0xb] = iVar1;
  *(undefined1 *)(param_1 + 0xc) = 1;
  (**(code **)(*param_1 + 0x3c))(param_1,0);
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0xffffff;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

