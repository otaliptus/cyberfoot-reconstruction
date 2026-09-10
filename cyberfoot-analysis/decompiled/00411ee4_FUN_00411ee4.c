// Address: 00411ee4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00411ee4(VARIANTARG *param_1,VARIANTARG *param_2,code *param_3)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  SAFEARRAY *psa;
  LONG *pLVar4;
  LONG *pLVar5;
  SAFEARRAYBOUND *pSVar6;
  int iVar7;
  void *local_320;
  void *local_31c;
  SAFEARRAY *local_318;
  uint local_314;
  int local_310;
  code *local_30c;
  VARIANTARG *local_308;
  SAFEARRAYBOUND local_304 [64];
  LONG local_104 [64];
  
  local_30c = param_3;
  local_308 = param_1;
  if ((*(byte *)((int)&param_2->n1 + 1) & 0x20) == 0) {
    FUN_00411988(0x80070057);
  }
  uVar1 = (param_2->n1).n2.vt;
  if ((uVar1 & 0xfff) == 0xc) {
    if ((uVar1 & 0x4000) == 0) {
      local_318 = *(SAFEARRAY **)((int)&param_2->n1 + 8);
    }
    else {
      local_318 = (SAFEARRAY *)**(int **)((int)&param_2->n1 + 8);
    }
    uVar3 = (uint)local_318->cDims;
    local_314 = uVar3;
    if (-1 < (int)(uVar3 - 1)) {
      iVar7 = 0;
      pSVar6 = local_304;
      do {
        SafeArrayGetLBound(local_318,iVar7 + 1,&pSVar6->lLbound);
        FUN_00411988();
        SafeArrayGetUBound(local_318,iVar7 + 1,&local_310);
        FUN_00411988();
        pSVar6->cElements = (local_310 - pSVar6->lLbound) + 1;
        iVar7 = iVar7 + 1;
        pSVar6 = pSVar6 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    psa = SafeArrayCreate(0xc,local_314,local_304);
    if (psa == (SAFEARRAY *)0x0) {
      FUN_004116e0();
    }
    FUN_00411d38(local_308);
    (local_308->n1).n2.vt = 0x200c;
    *(SAFEARRAY **)((int)&local_308->n1 + 8) = psa;
    if (-1 < (int)(local_314 - 1)) {
      pLVar4 = &local_304[0].lLbound;
      pLVar5 = local_104;
      uVar3 = local_314;
      do {
        *pLVar5 = *pLVar4;
        pLVar5 = pLVar5 + 1;
        pLVar4 = pLVar4 + 2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    do {
      iVar7 = local_314 - 1;
      cVar2 = FUN_00411e58(iVar7);
      if (cVar2 != '\0') {
        SafeArrayPtrOfIndex(local_318,local_104,&local_31c);
        FUN_00411988();
        SafeArrayPtrOfIndex(psa,local_104,&local_320);
        FUN_00411988();
        (*local_30c)(local_320,local_31c);
      }
      cVar2 = FUN_00411e88(iVar7);
    } while (cVar2 != '\0');
  }
  else {
    VariantCopy(local_308,param_2);
    FUN_00411988();
  }
  return;
}

