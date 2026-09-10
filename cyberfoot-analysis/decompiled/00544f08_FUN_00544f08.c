// Address: 00544f08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_00544f08(int *param_1,char param_2)

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
  FUN_0045b76c(param_1,0);
  *(undefined1 *)(param_1 + 0x65) = 0;
  iVar1 = FUN_00403a54(PTR_PTR_004b23cc,1);
  param_1[0x71] = iVar1;
  iVar1 = FUN_00403a54(PTR_DAT_0047361c,1);
  param_1[0x8c] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_00545038;
  FUN_00466238(param_1,0);
  (**(code **)(*param_1 + 0x5c))(param_1,0);
  param_1[0x72] = 0;
  param_1[0x73] = 0xff0000;
  param_1[0x79] = 0x808080;
  param_1[0x78] = 2;
  FUN_00545660(param_1,1);
  *(undefined1 *)(param_1 + 0x77) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  param_1[0x7b] = -1;
  param_1[0x7d] = 0x1fffffff;
  param_1[0x7e] = 0x1fffffff;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

