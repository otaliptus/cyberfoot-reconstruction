// Address: 0050f47c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0050f47c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x490) & 0x80) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0xc;
  }
  iVar1 = FUN_0050ae54(*(undefined4 *)(param_1 + 0x4d4));
  iVar2 = FUN_00465c0c(param_1);
  if (iVar2 - iVar3 < iVar1) {
    iVar1 = FUN_0050ae54(*(undefined4 *)(param_1 + 0x4d4));
    iVar2 = FUN_00465c0c(param_1);
    iVar1 = iVar1 - (iVar2 - iVar3);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

