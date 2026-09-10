// Address: 004245dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004245dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(*(int *)(*(int *)(param_4 + -4) + 0x30) + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      iVar2 = FUN_0041e01c(*(undefined4 *)(*(int *)(param_4 + -4) + 0x30),iVar4);
      cVar1 = FUN_004096cc(*(undefined4 *)(iVar2 + 8),param_1);
      if (cVar1 != '\0') {
        return iVar2;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

