// Address: 00409e30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00409e30(ulonglong *param_1,uint param_2,short param_3)

{
  float10 fVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ushort *unaff_ESI;
  ushort *puVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar1 = (float10)1;
  if ((*param_1 & 0x8000000000000000) == 0) {
    fVar8 = (float10)(longlong)*param_1;
  }
  else {
    fVar8 = (float10)0x7fffffffffffffff + fVar1 + (float10)(*param_1 & 0x7fffffffffffffff);
  }
  fVar7 = (float10)param_3;
  puVar6 = unaff_ESI;
  do {
    puVar6 = puVar6 + -1;
    *puVar6 = (short)ROUND(fVar8 - (float10)(unkint10)(fVar8 / fVar7) * fVar7);
    fVar8 = fVar8 / fVar7;
    uVar3 = *puVar6 + 0x30;
    if (0x39 < uVar3) {
      uVar3 = *puVar6 + 0x37;
    }
    *puVar6 = uVar3;
  } while (fVar1 <= fVar8);
  ffree(fVar1);
  ffree(fVar8);
  ffree(fVar7);
  ffree(fVar8);
  uVar4 = (uint)((int)unaff_ESI - (int)puVar6) >> 1;
  if ((-1 < (int)param_2) && (iVar5 = param_2 - uVar4, uVar4 <= param_2 && iVar5 != 0)) {
    iVar2 = -iVar5;
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      (puVar6 + iVar2)[iVar5] = 0x30;
    }
    puVar6[iVar2] = 0x30;
  }
  return;
}

