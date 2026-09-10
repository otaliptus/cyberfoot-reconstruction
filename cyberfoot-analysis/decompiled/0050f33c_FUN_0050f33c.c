// Address: 0050f33c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050f33c(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 700) == '\0') {
    if ((*(byte *)(param_1 + 0x490) & 0x80) == 0) {
      *param_2 = 0;
    }
    else {
      *param_2 = 0xc;
    }
    iVar1 = FUN_00465c50(param_1);
    iVar2 = *(int *)(param_1 + 0x298) + 4;
    param_2[1] = iVar1 - iVar2;
    iVar1 = FUN_0050f404(param_1,CONCAT31((int3)((uint)iVar2 >> 8),3));
    param_2[1] = param_2[1] - iVar1;
    iVar1 = FUN_0050ae54(*(undefined4 *)(param_1 + 0x4d4));
    param_2[2] = (iVar1 - *(int *)(*(int *)(param_1 + 0x238) + 0x2c)) + *param_2;
    iVar1 = FUN_00465c50(param_1);
    param_2[3] = iVar1;
    return;
  }
  if (*(char *)(param_1 + 700) == '\x01') {
    FUN_0040709c(0,0,0,param_2,0);
  }
  return;
}

