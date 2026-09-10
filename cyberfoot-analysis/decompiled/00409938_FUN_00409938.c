// Address: 00409938
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00409938(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  PCNZWCH lpString2;
  int cchCount1;
  PCNZWCH lpString1;
  DWORD DVar2;
  
  SetLastError(0);
  iVar1 = FUN_00405260(param_2);
  lpString2 = (PCNZWCH)FUN_00405250(param_2);
  cchCount1 = FUN_00405260(param_1);
  lpString1 = (PCNZWCH)FUN_00405250(param_1);
  iVar1 = CompareStringW(0x400,1,lpString1,cchCount1,lpString2,iVar1);
  iVar1 = iVar1 + -2;
  DVar2 = GetLastError();
  if (DVar2 != 0) {
    if (DVar2 == 0x78) {
      iVar1 = FUN_00409820(param_1,param_2,1);
    }
    else {
      FUN_0040f904();
    }
  }
  return iVar1;
}

