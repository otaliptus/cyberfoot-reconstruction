// Address: 004dbb14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004dbb14(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 1;
  iVar1 = FUN_00405260(param_1);
  if (0 < iVar1) {
    do {
      if (((*(short *)(param_1 + -2 + iVar2 * 2) == 0x26) && (0 < iVar1 - iVar2)) &&
         (iVar2 = iVar2 + 1, *(short *)(param_1 + -2 + iVar2 * 2) != 0x26)) {
        iVar3 = iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= iVar1);
  }
  return iVar3;
}

