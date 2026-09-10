// Address: 00409d2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00409d2c(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar5;
  byte *unaff_ESI;
  byte *pbVar6;
  char cVar4;
  
  pbVar6 = unaff_ESI;
  if ((char)param_3 == '\0') {
    if ((int)param_1 < 0) {
      FUN_00409d42(-param_1);
      unaff_ESI[-1] = 0x2d;
      return;
    }
    param_3 = 10;
  }
  do {
    uVar2 = param_1 / param_3;
    pbVar6 = pbVar6 + -1;
    cVar4 = (char)(param_1 % param_3);
    bVar3 = cVar4 + 0x30;
    if (0x39 < bVar3) {
      bVar3 = cVar4 + 0x37;
    }
    *pbVar6 = bVar3;
    param_1 = uVar2;
  } while (uVar2 != 0);
  iVar5 = param_2 - ((int)unaff_ESI - (int)pbVar6);
  if ((uint)((int)unaff_ESI - (int)pbVar6) <= param_2 && iVar5 != 0) {
    iVar1 = -iVar5;
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      (pbVar6 + iVar1)[iVar5] = 0x30;
    }
    pbVar6[iVar1] = 0x30;
  }
  return;
}

