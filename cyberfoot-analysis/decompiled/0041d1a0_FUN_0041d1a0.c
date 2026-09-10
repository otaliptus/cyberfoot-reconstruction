// Address: 0041d1a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_0041d1a0(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      uVar2 = FUN_0041e01c(*(undefined4 *)(param_1 + 4),iVar4);
      cVar1 = FUN_0041cda4(uVar2,param_2);
      if (cVar1 != '\0') {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

