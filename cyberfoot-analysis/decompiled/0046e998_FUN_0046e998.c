// Address: 0046e998
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_0046e998(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    for (iVar2 = FUN_0046ef90(); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
      cVar1 = FUN_0046e998(iVar2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)(*(int *)(param_1 + 4) + 0x57);
  }
  return uVar3;
}

