// Address: 0041cfe0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0041cfe0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      iVar1 = FUN_0041e01c(*(undefined4 *)(param_1 + 4),iVar3);
      if (*(char *)(iVar1 + 0x10) != '\0') {
        iVar4 = FUN_0041cc58(iVar1,param_2);
      }
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

