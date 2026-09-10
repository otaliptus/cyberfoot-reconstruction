// Address: 0050f004
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050f004(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((char)param_1[0xaf] == '\0') {
    if ((*(byte *)(param_1 + 0x124) & 0x80) == 0) {
      *param_2 = 0;
    }
    else {
      *param_2 = 0xc;
    }
    param_2[1] = 0;
    if ((*(byte *)(param_1 + 0x124) & 0x40) != 0) {
      param_2[1] = param_2[1] + param_1[0xb0];
    }
    if ((*(byte *)((int)param_1 + 0x491) & 1) != 0) {
      param_2[1] = param_2[1] + param_1[0xb9] + 6;
      iVar1 = FUN_0050f404(param_1,3);
      param_2[1] = param_2[1] + iVar1;
    }
    iVar1 = FUN_0050ae54(param_1[0x135]);
    iVar2 = (iVar1 - *(int *)(param_1[0x8e] + 0x2c)) + *param_2;
    param_2[2] = iVar2;
    iVar1 = FUN_00465c0c(param_1);
    if (iVar1 < iVar2) {
      iVar1 = FUN_00465c0c(param_1);
      param_2[2] = iVar1;
    }
    if ((*(byte *)(param_1 + 0x124) & 0x10) == 0) {
      iVar1 = FUN_00465c50(param_1);
      param_2[3] = iVar1;
    }
    else {
      iVar1 = FUN_00465c50(param_1);
      param_2[3] = (iVar1 - param_1[0xa6]) + -4;
      iVar1 = FUN_0050f404(param_1,3);
      param_2[3] = param_2[3] - iVar1;
    }
  }
  else if (((char)param_1[0xaf] == '\x01') &&
          ((**(code **)(*param_1 + 0x44))(param_1,param_2), (*(byte *)(param_1 + 0x124) & 0x40) != 0
          )) {
    param_2[1] = param_2[1] + param_1[0xb0];
  }
  return;
}

