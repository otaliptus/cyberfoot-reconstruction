// Address: 00607820
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00607820(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004032c8(100);
  if (iVar1 < 0x33) {
    if (param_1 == 1) {
      uVar2 = 0xc;
    }
    else {
      uVar2 = 3;
    }
  }
  else {
    if (param_1 != 1) {
      return 1;
    }
    uVar2 = 10;
  }
  return uVar2;
}

