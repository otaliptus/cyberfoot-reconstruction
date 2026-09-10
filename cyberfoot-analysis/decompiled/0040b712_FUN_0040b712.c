// Address: 0040b712
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040b712(void)

{
  int iVar1;
  int unaff_EBP;
  undefined1 *puVar2;
  undefined1 *unaff_EDI;
  
  puVar2 = *(undefined1 **)(unaff_EBP + -0xc);
  if (puVar2 != (undefined1 *)0x0) {
    iVar1 = *(int *)(puVar2 + -4);
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *unaff_EDI = *puVar2;
      puVar2 = puVar2 + 1;
      unaff_EDI = unaff_EDI + 1;
    }
  }
  return;
}

