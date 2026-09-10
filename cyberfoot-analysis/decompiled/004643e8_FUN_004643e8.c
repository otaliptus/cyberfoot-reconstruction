// Address: 004643e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004643e8(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  HWND pHVar3;
  int iVar4;
  
  DAT_0066cb74 = param_1;
  param_1[1] = 0;
  GetCursorPos((LPPOINT)&DAT_0066cb80);
  piVar1 = DAT_0066cb74;
  DAT_0066cb74[3] = DAT_0066cb80;
  piVar1[4] = DAT_0066cb84;
  DAT_0066cb88 = GetCursor();
  DAT_0066cb7c = FUN_00463614(DAT_0066cb74);
  DAT_0066cb8c = param_3;
  cVar2 = FUN_00403c10(param_1,PTR_PTR_00460b74);
  if (cVar2 == '\0') {
    if (param_2 == '\0') {
      DAT_0066cb90 = '\0';
    }
    else {
      DAT_0066cb90 = '\x01';
    }
  }
  else {
    iVar4 = param_1[0x11];
    if (param_1[0x13] == iVar4 || param_1[0x13] - iVar4 < 0) {
      param_1[8] = 0;
      param_1[9] = 0;
    }
    else {
      *(double *)(param_1 + 8) =
           (double)(param_1[3] - iVar4) / (double)(param_1[0x13] - param_1[0x11]);
    }
    if (param_1[0x14] - param_1[0x12] < 1) {
      param_1[10] = 0;
      param_1[0xb] = 0;
    }
    else {
      *(double *)(param_1 + 10) =
           (double)(param_1[4] - param_1[0x12]) / (double)(param_1[0x14] - param_1[0x12]);
    }
    if (param_2 == '\0') {
      DAT_0066cb90 = '\0';
    }
    else {
      DAT_0066cb90 = '\x02';
      (**(code **)(*param_1 + 0x30))();
    }
  }
  DAT_0066cb94 = (**(code **)(*DAT_0066cb74 + 8))();
  if (DAT_0066cb94 != 0) {
    iVar4 = DAT_0066cb84;
    pHVar3 = GetDesktopWindow();
    FUN_0046e604(DAT_0066cb94,pHVar3,DAT_0066cb80,iVar4);
  }
  DAT_0066cb9c = FUN_00403a54(PTR_PTR_0046341c,1);
  if (DAT_0066cb90 != '\0') {
    FUN_00464118(&DAT_0066cb80);
  }
  return;
}

