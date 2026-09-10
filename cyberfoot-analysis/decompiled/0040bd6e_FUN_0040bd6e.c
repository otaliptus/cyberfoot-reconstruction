// Address: 0040bd6e
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040bd6e(void)

{
  int unaff_EBP;
  char *unaff_ESI;
  
  while( true ) {
    if ((byte)(*unaff_ESI - 0x3aU) < 0xf6) break;
    *(uint *)(unaff_EBP + -0xc) = (uint)(byte)(*unaff_ESI - 0x30);
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}

