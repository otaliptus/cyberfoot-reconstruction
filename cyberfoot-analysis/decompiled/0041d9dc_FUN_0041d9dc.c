// Address: 0041d9dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0041d9dc(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  if ((DAT_0066c864 != 0) && (iVar3 = *(int *)(DAT_0066c864 + 8) + -1, -1 < iVar3)) {
    do {
      pcVar1 = (code *)FUN_0041e01c(DAT_0066c864,iVar3);
      iVar2 = (*pcVar1)(param_1);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return 0;
}

