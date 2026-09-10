// Address: 0044f318
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0044f318(int *param_1,char param_2)

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
  FUN_0046872c(param_1,0);
  param_1[0x14] = ~DAT_0044f4f8 & param_1[0x14] | _DAT_0044f4fc;
  FUN_004659c4(param_1,0xfa);
  FUN_004659e8(param_1,0x96);
  FUN_00450200(param_1,1);
  (**(code **)(*param_1 + 0x128))(param_1,0);
  FUN_004663cc(param_1,0);
  FUN_0046cd14(param_1,1);
  FUN_004505e0(param_1,1);
  FUN_00450284(param_1,1);
  FUN_00450214(param_1,1);
  iVar1 = FUN_0042acbc(PTR_PTR_00460cd4,1);
  param_1[0x84] = iVar1;
  FUN_00464de4(iVar1,param_1);
  param_1[0x9b] = -1;
  iVar1 = FUN_0044db50(PTR_PTR_00445cb4,1,param_1);
  param_1[0x8f] = iVar1;
  iVar1 = (**(code **)(*param_1 + 0xfc))();
  param_1[0x8b] = iVar1;
  iVar1 = (**(code **)(*param_1 + 0xf8))();
  param_1[0xa3] = iVar1;
  iVar1 = FUN_0044f1fc(PTR_PTR_0044601c,1,param_1);
  param_1[0x8d] = iVar1;
  iVar1 = FUN_0041f0f8(PTR_PTR_00445f38,1,param_1,PTR_PTR_00445e8c);
  param_1[0xa4] = iVar1;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  *(undefined1 *)((int)param_1 + 0x295) = 0;
  param_1[0xa8] = 0;
  iVar1 = FUN_00473884(PTR_PTR_00462768,1,0x20,0x20);
  param_1[0x89] = iVar1;
  iVar1 = FUN_0047e358();
  param_1[0x94] = iVar1;
  iVar1 = FUN_0047e358();
  param_1[0x97] = iVar1;
  iVar1 = FUN_00403a54(PTR_DAT_0047361c,1);
  param_1[0x9f] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(code **)(iVar1 + 8) = FUN_0044fa6c;
  iVar1 = FUN_00403a54(PTR_DAT_0047361c,1);
  param_1[0xa0] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(code **)(iVar1 + 8) = FUN_0044fa6c;
  iVar1 = FUN_00403a54(PTR_DAT_0047361c,1);
  param_1[0xa1] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(code **)(iVar1 + 8) = FUN_0044fa6c;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

