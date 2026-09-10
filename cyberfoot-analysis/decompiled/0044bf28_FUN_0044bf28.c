// Address: 0044bf28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0044bf28(int *param_1,char param_2)

{
  int iVar1;
  HDC hdc;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_0045cb24(param_1,0);
  param_1[0x14] = param_1[0x14] | _DAT_0044c050;
  iVar1 = FUN_0044a8ec(PTR_PTR_00444d70,1,param_1,0);
  param_1[0x8d] = iVar1;
  iVar1 = FUN_0044a8ec(PTR_PTR_00444d70,1,param_1,1);
  param_1[0x8e] = iVar1;
  iVar1 = FUN_0044aee8(PTR_PTR_00444e04,1,param_1);
  param_1[0x8f] = iVar1;
  iVar1 = FUN_00403a54(PTR_PTR_0044b300,1);
  param_1[0x92] = iVar1;
  *(int **)(iVar1 + 0x10) = param_1;
  FUN_0046cd14(param_1,1);
  FUN_004659c4(param_1,0xb9);
  FUN_004659e8(param_1,0x59);
  (**(code **)(*param_1 + 0x5c))(param_1,0);
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x96) = 1;
  FUN_0044c5f0(param_1,1);
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x5a);
  param_1[0x91] = iVar1;
  param_1[0x97] = (int)PTR_PTR_00444fd0;
  ReleaseDC((HWND)0x0,hdc);
  *(char *)(param_1 + 0x90) = (char)param_1[0x89];
  FUN_004673cc(param_1,0xb03d,0,0);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

