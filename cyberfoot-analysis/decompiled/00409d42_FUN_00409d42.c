// Address: 00409d42
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00409d42(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  byte bVar3;
  int iVar5;
  byte *unaff_ESI;
  byte *pbVar6;
  char cVar4;
  
  pbVar6 = unaff_ESI;
  do {
    uVar1 = (ulonglong)param_1;
    param_1 = param_1 / 10;
    pbVar6 = pbVar6 + -1;
    cVar4 = (char)(uVar1 % 10);
    bVar3 = cVar4 + 0x30;
    if (0x39 < bVar3) {
      bVar3 = cVar4 + 0x37;
    }
    *pbVar6 = bVar3;
  } while (param_1 != 0);
  iVar5 = param_2 - ((int)unaff_ESI - (int)pbVar6);
  if ((uint)((int)unaff_ESI - (int)pbVar6) <= param_2 && iVar5 != 0) {
    iVar2 = -iVar5;
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      (pbVar6 + iVar2)[iVar5] = 0x30;
    }
    pbVar6[iVar2] = 0x30;
  }
  return;
}

