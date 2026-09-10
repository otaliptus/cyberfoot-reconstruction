// Address: 0041cacc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0041cacc(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    do {
      iVar2 = FUN_0041e01c(*(undefined4 *)(param_1 + 0xc),iVar5);
      cVar1 = thunk_FUN_00403cb4(param_2,iVar2);
      if (cVar1 != '\0') {
        if (iVar3 != 0) {
          cVar1 = thunk_FUN_00403cb4(iVar2,iVar3);
          if (cVar1 == '\0') goto LAB_0041cb1e;
        }
        iVar3 = iVar2;
      }
LAB_0041cb1e:
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar3;
}

