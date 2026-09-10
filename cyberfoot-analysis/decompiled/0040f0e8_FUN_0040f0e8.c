// Address: 0040f0e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

PCNZCH FUN_0040f0e8(char *param_1,PCNZCH param_2)

{
  char cVar1;
  int iVar2;
  uint cchCount1;
  PCNZCH lpString1;
  int iVar3;
  
  if ((((param_1 != (char *)0x0) && (*param_1 != '\0')) && (param_2 != (PCNZCH)0x0)) &&
     (*param_2 != '\0')) {
    iVar2 = FUN_0040a760(param_1);
    cchCount1 = FUN_0040a760(param_2);
    for (lpString1 = (PCNZCH)FUN_0040a920(param_1,param_2);
        (lpString1 != (PCNZCH)0x0 && (cchCount1 <= (uint)(iVar2 - ((int)lpString1 - (int)param_1))))
        ; lpString1 = (PCNZCH)FUN_0040a920(lpString1 + 1,param_2)) {
      cVar1 = FUN_0040ed98(param_1,(int)lpString1 - (int)param_1);
      if ((cVar1 != '\x02') &&
         (iVar3 = CompareStringA(0x400,0,lpString1,cchCount1,param_2,cchCount1), iVar3 == 2)) {
        return lpString1;
      }
      if (cVar1 == '\x01') {
        lpString1 = lpString1 + 1;
      }
    }
  }
  return (PCNZCH)0x0;
}

