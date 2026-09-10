// Address: 0050f688
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050f688(int param_1,int *param_2)

{
  int iVar1;
  
  param_2[1] = 0;
  iVar1 = FUN_0050f330(param_1);
  *param_2 = iVar1;
  if ((*(byte *)(param_1 + 0x490) & 0x80) != 0) {
    *param_2 = *param_2 + 0xc;
  }
  iVar1 = FUN_00465c0c(param_1);
  param_2[2] = iVar1;
  iVar1 = FUN_00465c50(param_1);
  param_2[3] = iVar1;
  return;
}

