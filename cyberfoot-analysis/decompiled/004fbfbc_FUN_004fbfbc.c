// Address: 004fbfbc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_004fbfbc(int *param_1,char param_2)

{
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403de8();
    cVar1 = extraout_DL;
  }
  FUN_00509edc(param_1,0);
  *(undefined1 *)(param_1 + 0x34) = DAT_004fc06c;
  FUN_00404ff0(param_1 + 0x3b);
  FUN_004048d4(param_1 + 0x3a);
  *(undefined1 *)((int)param_1 + 0xd1) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FUN_00404ff0(param_1 + 0x3c);
  FUN_00404ff0(param_1 + 0x3d);
  FUN_0050a4a0(param_1,&LAB_004fc074);
  FUN_0050a67c(param_1,4);
  (**(code **)(*param_1 + 0x44))(param_1,4);
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

