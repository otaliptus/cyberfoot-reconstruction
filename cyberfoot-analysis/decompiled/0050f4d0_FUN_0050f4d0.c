// Address: 0050f4d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050f4d0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x490) & 0x80) == 0) {
    *param_2 = 0;
  }
  else {
    *param_2 = 0xc;
  }
  if ((*(byte *)(param_1 + 0x490) & 0x40) == 0) {
    param_2[1] = 0;
  }
  else {
    param_2[1] = *(int *)(param_1 + 0x2c0);
  }
  iVar1 = FUN_0050ae54(*(undefined4 *)(param_1 + 0x4d4));
  iVar2 = *(int *)(param_1 + 0x238);
  param_2[2] = (iVar1 - *(int *)(iVar2 + 0x2c)) + *param_2;
  param_2[3] = param_2[1] + *(int *)(param_1 + 0x2e4) + 6;
  iVar2 = FUN_0050f404(param_1,CONCAT31((int3)((uint)iVar2 >> 8),3));
  param_2[3] = param_2[3] + iVar2;
  return;
}

