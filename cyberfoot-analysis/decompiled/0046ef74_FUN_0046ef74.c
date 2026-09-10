// Address: 0046ef74
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0046ef74(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    cVar1 = FUN_0046e998(iVar2);
    if (cVar1 != '\0') break;
    iVar2 = *(int *)(iVar2 + 0x18);
  }
  return iVar2;
}

