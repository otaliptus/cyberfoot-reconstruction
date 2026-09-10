// Address: 0051c874
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0051c874(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < 2) {
    return param_1;
  }
  iVar3 = 1;
  for (iVar1 = param_1; 0 < iVar1; iVar1 = iVar1 >> 2) {
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    iVar3 = iVar3 * 2;
  }
  do {
    iVar1 = iVar3;
    uVar2 = param_1 / iVar1 + iVar1;
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
  } while ((iVar1 != iVar3) && (iVar3 != iVar1 + 1));
  return iVar1;
}

