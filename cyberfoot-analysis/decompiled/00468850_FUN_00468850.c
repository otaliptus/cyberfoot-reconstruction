// Address: 00468850
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00468850(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint extraout_EDX;
  
  piVar1 = (int *)FUN_00403e50();
  FUN_004270f8(piVar1);
  if ((char)piVar1[0x6a] != '\0') {
    *(undefined1 *)(piVar1 + 0x6a) = 0;
    FUN_00463eb4(piVar1,0);
  }
  FUN_00406880(piVar1 + 0x5f);
  FUN_00403a84(piVar1[0x5e]);
  if (piVar1[0xc] != 0) {
    FUN_004694f0(piVar1,1);
  }
  if (piVar1[0x60] != 0) {
    (**(code **)(*piVar1 + 0xac))();
  }
  iVar2 = FUN_00469730(piVar1);
  while (iVar2 != 0) {
    piVar3 = (int *)FUN_004696f4(piVar1,iVar2 + -1);
    FUN_0046955c(piVar1,piVar3);
    (**(code **)(*piVar3 + -4))(piVar3,1);
    iVar2 = FUN_00469730(piVar1);
  }
  FUN_00403a84(piVar1[0x5c]);
  if (piVar1[99] != 0) {
    FUN_00427f80();
  }
  FUN_004653e0(piVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(piVar1);
  }
  return;
}

