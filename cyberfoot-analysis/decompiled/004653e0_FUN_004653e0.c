// Address: 004653e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004653e0(void)

{
  int iVar1;
  int *piVar2;
  uint extraout_EDX;
  undefined1 auStack_1c [16];
  
  piVar2 = (int *)FUN_00403e50();
  FUN_0048632c(*(undefined4 *)PTR_DAT_0066b3ac,piVar2);
  iVar1 = piVar2[0x28];
  if ((iVar1 == 0) || ((*(byte *)(iVar1 + 0x1c) & 8) != 0)) {
    (**(code **)(*piVar2 + 0x68))(piVar2,0);
  }
  else {
    FUN_004673cc(iVar1,0xb039,0,piVar2);
    (**(code **)(*piVar2 + 0x68))(piVar2,0);
    FUN_00465ba8(piVar2,auStack_1c);
    FUN_00403c80(piVar2,0xffffffff,auStack_1c);
    piVar2[0x28] = 0;
  }
  FUN_00403a84(piVar2[0x1b]);
  piVar2[0x1b] = 0;
  FUN_00403a84(piVar2[0x1d]);
  FUN_00403a84(piVar2[0x1a]);
  FUN_0040a9d4(piVar2[0x19]);
  FUN_00426ea4(piVar2,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(piVar2);
  }
  return;
}

