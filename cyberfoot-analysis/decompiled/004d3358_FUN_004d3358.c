// Address: 004d3358
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004d3358(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = thunk_FUN_004d3375(param_1);
  iVar2 = iVar1 - param_1 >> 1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + (uint)((iVar1 - param_1 & 1U) != 0);
  }
  return iVar2;
}

