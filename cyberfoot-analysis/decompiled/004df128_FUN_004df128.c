// Address: 004df128
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004df128(void)

{
  ATOM AVar1;
  LPCSTR pCVar2;
  
  FUN_004df120();
  pCVar2 = (LPCSTR)FUN_00404da4(DAT_0067aed4);
  AVar1 = GlobalAddAtomA(pCVar2);
  DAT_0067aece = FUN_004d394c(AVar1);
  pCVar2 = (LPCSTR)FUN_00404da4(DAT_0067aed8);
  AVar1 = GlobalAddAtomA(pCVar2);
  DAT_0067aed0 = FUN_004d394c(AVar1);
  return;
}

