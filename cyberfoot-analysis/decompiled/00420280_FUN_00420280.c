// Address: 00420280
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00420280(void)

{
  int *piVar1;
  uint extraout_EDX;
  
  piVar1 = (int *)FUN_00403e50();
  piVar1[8] = 0;
  piVar1[9] = 0;
  piVar1[10] = 0;
  piVar1[0xb] = 0;
  FUN_0041f140(piVar1,extraout_EDX & 0xfffffffc);
  if (piVar1[5] != 0) {
    FUN_00405744(piVar1[4],PTR_DAT_0041bd7c,piVar1[5]);
  }
  piVar1[5] = 0;
  (**(code **)(*piVar1 + 0x28))(piVar1,0);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(piVar1);
  }
  return;
}

