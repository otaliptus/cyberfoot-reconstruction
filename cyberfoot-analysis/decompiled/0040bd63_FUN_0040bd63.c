// Address: 0040bd63
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040bd63(void)

{
  char cVar1;
  char *unaff_ESI;
  
  do {
    cVar1 = *unaff_ESI;
    if (cVar1 == '\0') {
      return;
    }
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 == ' ');
  return;
}

