// Address: 00409758
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00409758(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  PCNZCH lpString2;
  int cchCount1;
  PCNZCH lpString1;
  
  iVar1 = FUN_00404ba4(param_2);
  lpString2 = (PCNZCH)FUN_00404da4(param_2);
  cchCount1 = FUN_00404ba4(param_1);
  lpString1 = (PCNZCH)FUN_00404da4(param_1);
  iVar1 = CompareStringA(0x400,0,lpString1,cchCount1,lpString2,iVar1);
  return iVar1 + -2;
}

