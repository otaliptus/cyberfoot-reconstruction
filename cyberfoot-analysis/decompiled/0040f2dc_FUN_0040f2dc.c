// Address: 0040f2dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040f2dc(void)

{
  char cVar1;
  LCID LVar2;
  int iVar3;
  CHAR *pCVar4;
  WORD *pWVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  WORD local_19a [129];
  CHAR local_98 [148];
  
  DAT_0066c744 = 0x409;
  DAT_0066c748 = 9;
  DAT_0066c74c = 1;
  LVar2 = GetThreadLocale();
  if (LVar2 != 0) {
    DAT_0066c744 = LVar2;
  }
  if ((ushort)LVar2 != 0) {
    DAT_0066c748 = (uint)((ushort)LVar2 & 0x3ff);
    DAT_0066c74c = (LVar2 & 0xffff) >> 10;
  }
  puVar6 = &DAT_0040f430;
  puVar7 = &DAT_00662134;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  if (DAT_006620ec == 2) {
    cVar1 = FUN_0040f2c4();
    uVar8 = cVar1 == '\0';
    if ((bool)uVar8) {
      FUN_0040f264();
      FUN_004035bc(&DAT_00662134,&DAT_0040f430,0x20);
      DAT_0066c750 = !(bool)uVar8;
      if ((bool)DAT_0066c750) {
        DAT_0066c751 = 0;
      }
      else {
        iVar3 = 0x80;
        pCVar4 = local_98;
        do {
          *pCVar4 = (CHAR)iVar3;
          iVar3 = iVar3 + 1;
          pCVar4 = pCVar4 + 1;
        } while (iVar3 != 0x100);
        GetStringTypeExA(DAT_0066c744,2,local_98,0x80,local_19a);
        iVar3 = 0x80;
        pWVar5 = local_19a;
        do {
          if (*pWVar5 == 2) {
            DAT_0066c751 = *pWVar5 == 2;
            return;
          }
          pWVar5 = pWVar5 + 1;
          iVar3 = iVar3 + -1;
          DAT_0066c751 = 0;
        } while (iVar3 != 0);
      }
    }
    else {
      DAT_0066c751 = 0;
      DAT_0066c750 = 0;
    }
  }
  else {
    iVar3 = GetSystemMetrics(0x4a);
    DAT_0066c751 = iVar3 != 0;
    iVar3 = GetSystemMetrics(0x2a);
    DAT_0066c750 = iVar3 != 0;
    if ((bool)DAT_0066c750) {
      FUN_0040f264();
    }
  }
  return;
}

