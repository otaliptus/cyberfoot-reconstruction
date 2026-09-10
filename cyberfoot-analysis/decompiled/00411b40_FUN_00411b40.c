// Address: 00411b40
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00411b40(VARIANTARG *param_1)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  LONG *pLVar4;
  LONG *pLVar5;
  int *piVar6;
  int iVar7;
  void *local_318;
  uint local_314;
  int local_310;
  SAFEARRAY *local_30c;
  VARIANTARG *local_308;
  int local_304;
  LONG local_300 [127];
  LONG local_104 [64];
  
  local_308 = param_1;
  if ((*(byte *)((int)&param_1->n1 + 1) & 0x20) == 0) {
    FUN_00411988(0x80070057);
  }
  uVar1 = (local_308->n1).n2.vt;
  if ((uVar1 & 0xfff) == 0xc) {
    if ((uVar1 & 0x4000) == 0) {
      local_30c = *(SAFEARRAY **)((int)&local_308->n1 + 8);
    }
    else {
      local_30c = (SAFEARRAY *)**(int **)((int)&local_308->n1 + 8);
    }
    uVar3 = (uint)local_30c->cDims;
    local_314 = uVar3;
    if (-1 < (int)(uVar3 - 1)) {
      iVar7 = 0;
      piVar6 = &local_304;
      do {
        SafeArrayGetLBound(local_30c,iVar7 + 1,piVar6 + 1);
        FUN_00411988();
        SafeArrayGetUBound(local_30c,iVar7 + 1,&local_310);
        FUN_00411988();
        *piVar6 = (local_310 - piVar6[1]) + 1;
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (-1 < (int)(local_314 - 1)) {
      pLVar4 = local_300;
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
      cVar2 = FUN_00411ab4(iVar7);
      if (cVar2 != '\0') {
        SafeArrayPtrOfIndex(local_30c,local_104,&local_318);
        FUN_00411988();
        FUN_00411d38(local_318);
      }
      cVar2 = FUN_00411ae4(iVar7);
    } while (cVar2 != '\0');
  }
  VariantClear(local_308);
  FUN_00411988();
  return;
}

