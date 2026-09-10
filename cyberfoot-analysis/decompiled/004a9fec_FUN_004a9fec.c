// Address: 004a9fec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a9fec(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_004ab820(param_1);
  iVar1 = *(int *)(*(int *)(param_1 + 0x138) + 8);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      FUN_004a63ac(*(undefined4 *)(param_1 + 0x138),iVar2);
      FUN_00403a84();
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004a6364(*(undefined4 *)(param_1 + 0x138),0);
  return;
}

