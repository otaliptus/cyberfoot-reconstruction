// Address: 00484c38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00484c38(int param_1,char param_2)

{
  undefined *puVar1;
  HKL pHVar2;
  undefined4 uVar3;
  HDC hdc;
  int iVar4;
  char extraout_DL;
  char cVar5;
  undefined4 *in_FS_OFFSET;
  
  cVar5 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar5 = extraout_DL;
  }
  FUN_00426e58(param_1,0);
  puVar1 = PTR_DAT_0066aef4;
  *(int *)(PTR_DAT_0066aef4 + 4) = param_1;
  *(undefined1 **)puVar1 = &LAB_00484fdc;
  puVar1 = PTR_DAT_0066af0c;
  *(int *)(PTR_DAT_0066af0c + 4) = param_1;
  *(undefined1 **)puVar1 = &LAB_00484fe8;
  FUN_00484ff4(param_1);
  pHVar2 = GetKeyboardLayout(0);
  *(HKL *)(param_1 + 0x3c) = pHVar2;
  uVar3 = FUN_00403a54(PTR_PTR_0041b73c,1);
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  uVar3 = FUN_00403a54(PTR_PTR_0041b73c,1);
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  uVar3 = FUN_00403a54(PTR_PTR_0041b73c,1);
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  uVar3 = FUN_00403a54(PTR_PTR_0041b73c,1);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  uVar3 = FUN_00403a54(PTR_PTR_0041b73c,1);
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  hdc = GetDC((HWND)0x0);
  iVar4 = GetDeviceCaps(hdc,0x5a);
  *(int *)(param_1 + 0x40) = iVar4;
  ReleaseDC((HWND)0x0,hdc);
  (**(code **)PTR_DAT_0066b248)();
  uVar3 = FUN_0042a1cc(PTR_PTR_0042893c,1);
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  uVar3 = FUN_0042a1cc(PTR_PTR_0042893c,1);
  *(undefined4 *)(param_1 + 0x88) = uVar3;
  uVar3 = FUN_0042a1cc(PTR_PTR_0042893c,1);
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  FUN_004854a4(param_1);
  iVar4 = *(int *)(param_1 + 0x84);
  *(int *)(iVar4 + 0xc) = param_1;
  *(undefined1 **)(iVar4 + 8) = &LAB_00485338;
  iVar4 = *(int *)(param_1 + 0x88);
  *(int *)(iVar4 + 0xc) = param_1;
  *(undefined1 **)(iVar4 + 8) = &LAB_00485338;
  iVar4 = *(int *)(param_1 + 0x80);
  *(int *)(iVar4 + 0xc) = param_1;
  *(undefined1 **)(iVar4 + 8) = &LAB_00485338;
  if (cVar5 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = 0;
  }
  return param_1;
}

