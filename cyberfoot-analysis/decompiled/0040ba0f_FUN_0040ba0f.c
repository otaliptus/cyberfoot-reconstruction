// Address: 0040ba0f
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040ba0f(void)

{
  int *piVar1;
  char cVar2;
  char *unaff_EBX;
  int unaff_EBP;
  char *unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x48) == 0) {
    cVar2 = *unaff_EBX;
    if (cVar2 == '\0') {
      if (*(int *)(unaff_EBP + -0x44) <= *(int *)(unaff_EBP + -0x3c)) goto LAB_0040ba71;
      goto LAB_0040ba40;
    }
  }
  else {
    if (-1 < *(int *)(unaff_EBP + -0x48)) {
      do {
        FUN_0040ba30();
        piVar1 = (int *)(unaff_EBP + -0x48);
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
      FUN_0040ba30();
      return;
    }
    *(int *)(unaff_EBP + -0x48) = *(int *)(unaff_EBP + -0x48) + 1;
    if (*(int *)(unaff_EBP + -0x40) < *(int *)(unaff_EBP + -0x44)) goto LAB_0040ba71;
LAB_0040ba40:
    cVar2 = '0';
  }
  if (*(int *)(unaff_EBP + -0x44) == 0) {
    *(ushort *)unaff_EDI = CONCAT11(cVar2,*(undefined1 *)(unaff_EBP + -9));
  }
  else {
    *unaff_EDI = cVar2;
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

