// Address: 00449a40
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00449a40(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1 == *(int *)(*(int *)(param_1 + 4) + 0xc)) {
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  }
  else {
    cVar1 = FUN_00449a78(param_1);
    if (cVar1 == '\0') {
      iVar2 = -1;
      while (param_1 != 0) {
        iVar2 = iVar2 + 1;
        param_1 = FUN_00449a10();
      }
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}

