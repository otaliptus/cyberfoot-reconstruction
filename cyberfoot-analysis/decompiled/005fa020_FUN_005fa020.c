// Address: 005fa020
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005fa020(undefined4 param_1)

{
  int iVar1;
  
  if (PTR_DAT_0066ac78[0x6c8] == '\0') {
    FUN_005f9800(param_1);
    FUN_005f9f2c(param_1);
  }
  FUN_00656410();
  FUN_005f92d8(param_1);
  iVar1 = 2;
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
    iVar1 = *(int *)(PTR_DAT_0066ac78 + 0x16c);
    if (iVar1 < 0x3c) {
      iVar1 = 3;
    }
    else if (iVar1 < 0x5d) {
      iVar1 = 1;
    }
    else if (iVar1 < 0x66) {
      iVar1 = FUN_004032c8(3,PTR_DAT_0066ac78);
      iVar1 = iVar1 + 5;
      FUN_004032c8(3);
    }
    else {
      iVar1 = FUN_004032c8(3,PTR_DAT_0066ac78);
      iVar1 = iVar1 + 3;
      FUN_004032c8(3);
    }
  }
  else if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
    iVar1 = *(int *)(PTR_DAT_0066ac78 + 0x16c);
    if (iVar1 < 0x3f) {
      iVar1 = 3;
    }
    else if (iVar1 < 0x78) {
      iVar1 = 1;
    }
    else if (iVar1 < 0x88) {
      iVar1 = FUN_004032c8(2,PTR_DAT_0066ac78);
      FUN_004032c8(2);
    }
    else {
      iVar1 = FUN_004032c8(2,PTR_DAT_0066ac78);
      iVar1 = iVar1 + 2;
      FUN_004032c8(2);
    }
  }
  if (5 < *(int *)(PTR_DAT_0066ac78 + 0xc0)) {
    iVar1 = iVar1 + 3;
  }
  if (0 < iVar1) {
    do {
      FUN_00653268(0xffffffff);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (DAT_006d3f40 != '\0') {
    FUN_005f99c4(param_1);
    return;
  }
  FUN_005f9bcc(param_1);
  return;
}

