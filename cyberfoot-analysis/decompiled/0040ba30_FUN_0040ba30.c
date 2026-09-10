// Address: 0040ba30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040ba30(void)

{
  char cVar1;
  char *unaff_EBX;
  int unaff_EBP;
  char *unaff_EDI;
  
  cVar1 = *unaff_EBX;
  if (cVar1 == '\0') {
    if (*(int *)(unaff_EBP + -0x44) <= *(int *)(unaff_EBP + -0x3c)) goto LAB_0040ba71;
    cVar1 = '0';
  }
  if (*(int *)(unaff_EBP + -0x44) == 0) {
    *(ushort *)unaff_EDI = CONCAT11(cVar1,*(undefined1 *)(unaff_EBP + -9));
  }
  else {
    *unaff_EDI = cVar1;
    if ((((*(char *)(unaff_EBP + -0x35) != '\0') && (1 < *(int *)(unaff_EBP + -0x44))) &&
        ((char)((ushort)*(int *)(unaff_EBP + -0x44) % 3) == '\x01')) &&
       (*(char *)(unaff_EBP + -10) != '\0')) {
      unaff_EDI[1] = *(char *)(unaff_EBP + -10);
    }
  }
LAB_0040ba71:
  *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x44) + -1;
  return;
}

