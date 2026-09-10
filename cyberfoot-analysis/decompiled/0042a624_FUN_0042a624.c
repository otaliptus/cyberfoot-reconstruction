// Address: 0042a624
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0042a624(int param_1)

{
  int nNumber;
  int iVar1;
  int nNumerator;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  nNumerator = 0x48;
  nNumber = FUN_0042a580(param_1);
  iVar1 = MulDiv(nNumber,nNumerator,iVar1);
  return -iVar1;
}

