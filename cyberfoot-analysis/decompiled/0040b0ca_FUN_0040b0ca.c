// Address: 0040b0ca
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0040b0ca(uint param_1,undefined4 param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  ushort *unaff_ESI;
  int unaff_EDI;
  
  if ((short)param_1 == 0x2a) {
    iVar1 = *(int *)(unaff_EBP + -0xc);
    if (iVar1 <= *(int *)(unaff_EBP + 8)) {
      *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0xc) + 1;
    }
    if (unaff_ESI == param_3) {
LAB_0040b01d:
      uVar2 = FUN_0040b384((uint)(unaff_EDI - *(int *)(unaff_EBP + -8)) >> 1);
      return uVar2;
    }
    param_1 = CONCAT22((short)((uint)iVar1 >> 0x10),*unaff_ESI);
  }
  else {
    while ((0x2f < (ushort)param_1 && ((ushort)param_1 < 0x3a))) {
      if (unaff_ESI == param_3) goto LAB_0040b01d;
      param_1 = (uint)*unaff_ESI;
      unaff_ESI = unaff_ESI + 1;
    }
  }
  return param_1;
}

