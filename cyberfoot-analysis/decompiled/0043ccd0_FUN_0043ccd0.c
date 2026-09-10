// Address: 0043ccd0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_0043ccd0(undefined4 param_1,undefined4 param_2)

{
  PCNZCH lpString1;
  int iVar1;
  int iVar2;
  PCNZCH lpString2;
  bool bVar3;
  
  lpString1 = (PCNZCH)FUN_00404da4(param_2);
  iVar1 = FUN_00404ba4(param_1);
  iVar2 = FUN_00404ba4(param_2);
  if (iVar2 < iVar1) {
    bVar3 = false;
  }
  else {
    iVar2 = iVar1;
    lpString2 = (PCNZCH)FUN_00404da4(param_1);
    iVar1 = CompareStringA(0x400,1,lpString1,iVar1,lpString2,iVar2);
    bVar3 = iVar1 == 2;
  }
  return bVar3;
}

