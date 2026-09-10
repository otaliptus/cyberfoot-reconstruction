// Address: 00465308
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_00465308(int *param_1,char param_2)

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
  FUN_00426e58(param_1,0);
  param_1[0xf] = (int)param_1;
  param_1[0xe] = *(int *)(*param_1 + 0x74);
  param_1[0x14] = DAT_004653d8;
  iVar1 = FUN_0042a1cc(PTR_PTR_0042893c,1);
  param_1[0x1a] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(code **)(iVar1 + 8) = FUN_004662b8;
  *(undefined1 *)((int)param_1 + 0x61) = DAT_004653dc;
  iVar1 = FUN_00464e28(PTR_PTR_00460ffc,1,param_1);
  param_1[0x1d] = iVar1;
  *(int **)(iVar1 + 0x1c) = param_1;
  *(undefined1 **)(iVar1 + 0x18) = &LAB_0046718c;
  param_1[0x1c] = -0xfffffb;
  *(undefined1 *)((int)param_1 + 0x57) = 1;
  *(undefined1 *)(param_1 + 0x16) = 1;
  *(undefined1 *)((int)param_1 + 0x59) = 1;
  *(undefined1 *)((int)param_1 + 0x5a) = 1;
  *(undefined1 *)((int)param_1 + 0x9a) = 1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined1 *)((int)param_1 + 0x5e) = 0;
  *(undefined2 *)((int)param_1 + 0x7a) = 0xfff4;
  param_1[0x2e] = (int)PTR_PTR_0047dc0c;
  *(undefined1 *)(param_1 + 0x54) = 1;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

