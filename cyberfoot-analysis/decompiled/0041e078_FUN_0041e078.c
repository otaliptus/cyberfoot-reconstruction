// Address: 0041e078
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0041e078(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0;
      (iVar1 < *(int *)(param_1 + 8) && (param_2 != *(int *)(*(int *)(param_1 + 4) + iVar1 * 4)));
      iVar1 = iVar1 + 1) {
  }
  if (iVar1 == *(int *)(param_1 + 8)) {
    iVar1 = -1;
  }
  return iVar1;
}

