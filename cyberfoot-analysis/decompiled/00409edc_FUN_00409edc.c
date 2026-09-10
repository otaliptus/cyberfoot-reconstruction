// Address: 00409edc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00409edc(ulonglong *param_1,uint param_2,short param_3)

{
  float10 fVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  byte *unaff_ESI;
  byte *pbVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  int local_8;
  
  if (((char)param_3 == '\0') && (param_3 = 10, (*param_1 & 0x8000000000000000) != 0)) {
    local_8 = -(int)*param_1;
    FUN_00409f10(&local_8);
    unaff_ESI[-1] = 0x2d;
    return;
  }
  fVar1 = (float10)1;
  if ((*param_1 & 0x8000000000000000) == 0) {
    fVar8 = (float10)(longlong)*param_1;
  }
  else {
    fVar8 = (float10)0x7fffffffffffffff + fVar1 + (float10)(*param_1 & 0x7fffffffffffffff);
  }
  fVar6 = (float10)param_3;
  pbVar5 = unaff_ESI;
  do {
    pbVar5 = pbVar5 + -1;
    fVar7 = fVar8 - (float10)(unkint10)(fVar8 / fVar6) * fVar6;
    fVar8 = fVar8 / fVar6;
    local_8._0_1_ = (char)(short)ROUND(fVar7);
    bVar3 = (char)local_8 + 0x30;
    if (0x39 < bVar3) {
      bVar3 = (char)local_8 + 0x37;
    }
    *pbVar5 = bVar3;
  } while (fVar1 <= fVar8);
  ffree(fVar1);
  ffree(fVar8);
  ffree(fVar6);
  ffree(fVar8);
  iVar4 = param_2 - ((int)unaff_ESI - (int)pbVar5);
  if ((uint)((int)unaff_ESI - (int)pbVar5) <= param_2 && iVar4 != 0) {
    iVar2 = -iVar4;
    while (iVar4 = iVar4 + -1, iVar4 != 0) {
      (pbVar5 + iVar2)[iVar4] = 0x30;
    }
    pbVar5[iVar2] = 0x30;
  }
  return;
}

