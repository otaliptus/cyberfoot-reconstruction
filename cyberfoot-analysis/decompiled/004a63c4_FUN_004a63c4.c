// Address: 004a63c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004a63c4(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 8);
  if (-1 < iVar4 + -1) {
    iVar3 = 0;
    do {
      uVar2 = FUN_004a63ac(param_1,iVar3);
      cVar1 = FUN_00403c10(uVar2,param_2);
      if (cVar1 != '\0') {
        uVar2 = FUN_004a63ac(param_1,iVar3);
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

