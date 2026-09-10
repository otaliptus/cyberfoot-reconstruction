// Address: 0048423c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0048423c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(char *)(param_1 + 0x1a6) != '\0') && (iVar2 = FUN_00469730(param_1), -1 < iVar2 + -1)) {
    iVar4 = 0;
    do {
      iVar3 = FUN_004696f4(param_1,iVar4);
      if (((*(char *)(iVar3 + 0x57) != '\0') && (cVar1 = FUN_0048420c(iVar3), cVar1 != '\0')) ||
         ((cVar1 = FUN_00403c10(iVar3,PTR_PTR_00461f94), cVar1 != '\0' &&
          (cVar1 = FUN_0048423c(iVar3), cVar1 != '\0')))) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

