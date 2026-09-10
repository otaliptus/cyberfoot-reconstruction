// Address: 00409d94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00409d94(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  int iVar6;
  ushort *unaff_ESI;
  ushort *puVar7;
  short sVar5;
  
  puVar7 = unaff_ESI;
  do {
    uVar1 = (ulonglong)param_1;
    param_1 = param_1 / 10;
    sVar5 = (short)(uVar1 % 10);
    uVar4 = sVar5 + 0x30;
    puVar7 = puVar7 + -1;
    if (0x39 < uVar4) {
      uVar4 = sVar5 + 0x37;
    }
    *puVar7 = uVar4;
  } while (param_1 != 0);
  uVar3 = (uint)((int)unaff_ESI - (int)puVar7) >> 1;
  iVar6 = param_2 - uVar3;
  if (uVar3 <= param_2 && iVar6 != 0) {
    iVar2 = -iVar6;
    while (iVar6 = iVar6 + -1, iVar6 != 0) {
      (puVar7 + iVar2)[iVar6] = 0x30;
    }
    puVar7[iVar2] = 0x30;
  }
  return;
}

