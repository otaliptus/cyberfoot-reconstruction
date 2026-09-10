// Address: 00417628
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00417628(LONG *param_1,uint param_2,VARTYPE param_3,ushort *param_4)

{
  char cVar1;
  SAFEARRAY *pSVar2;
  SAFEARRAYBOUND *pSVar3;
  UINT UVar4;
  SAFEARRAYBOUND local_20c [64];
  UINT local_c;
  VARTYPE local_6;
  
  local_6 = param_3;
  if (((param_2 & 1) != 0) && ((int)param_2 < 0x80)) {
    cVar1 = FUN_004177d0(param_3);
    if (cVar1 != '\0') goto LAB_00417657;
  }
  FUN_004116e0();
LAB_00417657:
  UVar4 = (int)(param_2 + 1) >> 1;
  if ((int)UVar4 < 0) {
    UVar4 = UVar4 + ((param_2 + 1 & 1) != 0);
  }
  local_c = UVar4;
  if (-1 < (int)(UVar4 - 1)) {
    pSVar3 = local_20c;
    do {
      pSVar3->lLbound = *param_1;
      pSVar3->cElements = (param_1[1] - pSVar3->lLbound) + 1;
      param_1 = param_1 + 2;
      pSVar3 = pSVar3 + 1;
      UVar4 = UVar4 - 1;
    } while (UVar4 != 0);
  }
  pSVar2 = SafeArrayCreate(local_6,local_c,local_20c);
  if (pSVar2 == (SAFEARRAY *)0x0) {
    FUN_004116e0();
  }
  FUN_00411d38(param_4);
  *param_4 = local_6 | 0x2000;
  *(SAFEARRAY **)(param_4 + 4) = pSVar2;
  return;
}

