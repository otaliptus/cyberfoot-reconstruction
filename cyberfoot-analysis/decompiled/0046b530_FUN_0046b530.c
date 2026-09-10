// Address: 0046b530
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0046b530(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0046b49c(param_1);
  if ((0 < iVar1) && (iVar3 = iVar1 + -1, -1 < iVar3)) {
    do {
      iVar2 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x178),iVar3);
      if (*(char *)(iVar2 + 0x57) == '\0') {
        iVar1 = iVar1 + -1;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return iVar1;
}

