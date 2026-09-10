// Address: 0040ab4e
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0040ab4e(uint param_1,undefined4 param_2,byte *param_3)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  byte *unaff_ESI;
  int unaff_EDI;
  
  if ((char)param_1 == '*') {
    iVar1 = *(int *)(unaff_EBP + -0xc);
    if (iVar1 <= *(int *)(unaff_EBP + 8)) {
      *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0xc) + 1;
    }
    if (unaff_ESI == param_3) {
LAB_0040aaa6:
      uVar2 = FUN_0040add3(unaff_EDI - *(int *)(unaff_EBP + -8));
      return uVar2;
    }
    param_1 = CONCAT31((int3)((uint)iVar1 >> 8),*unaff_ESI);
  }
  else {
    while ((0x2f < (byte)param_1 && ((byte)param_1 < 0x3a))) {
      if (unaff_ESI == param_3) goto LAB_0040aaa6;
      param_1 = (uint)*unaff_ESI;
      unaff_ESI = unaff_ESI + 1;
    }
  }
  return param_1;
}

