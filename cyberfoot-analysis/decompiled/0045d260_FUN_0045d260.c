// Address: 0045d260
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045d260(void)

{
  char cVar1;
  int *piVar2;
  uint extraout_EDX;
  
  piVar2 = (int *)FUN_00403e50();
  cVar1 = FUN_0046cde4(piVar2);
  if (cVar1 != '\0') {
    (**(code **)(*piVar2 + 0xac))();
  }
  FUN_0047e36c(piVar2[0x95]);
  FUN_0047e36c(piVar2[0x93]);
  FUN_00403a84(piVar2[0x82]);
  FUN_00468850(piVar2,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(piVar2);
  }
  return;
}

