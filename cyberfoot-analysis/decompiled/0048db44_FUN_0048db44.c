// Address: 0048db44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0048db44(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x4c) != 0) || (*(int *)(param_1 + 300) != 0)) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x28) == 3) &&
     (((*(int *)(param_1 + 0x24) == 3 && (*(int *)(param_1 + 0x2c) == 2)) &&
      (*(int *)(param_1 + 0x78) == 3)))) {
    iVar1 = *(int *)(param_1 + 0xd8);
    if (((((*(int *)(iVar1 + 8) == 2) && (*(int *)(iVar1 + 0x5c) == 1)) &&
         (*(int *)(iVar1 + 0xb0) == 1)) &&
        ((*(int *)(iVar1 + 0xc) < 3 && (*(int *)(iVar1 + 0x60) == 1)))) &&
       (*(int *)(iVar1 + 0xb4) == 1)) {
      iVar1 = *(int *)(param_1 + 0xd8);
      iVar2 = *(int *)(param_1 + 0x13c);
      if (((*(int *)(iVar1 + 0x24) == iVar2) && (iVar2 == *(int *)(iVar1 + 0x78))) &&
         (iVar2 == *(int *)(iVar1 + 0xcc))) {
        return 1;
      }
      return 0;
    }
    return 0;
  }
  return 0;
}

