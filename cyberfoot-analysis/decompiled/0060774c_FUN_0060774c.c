// Address: 0060774c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0060774c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = FUN_004032c8(100);
  if (iVar1 < 0x51) {
    if (iVar1 - 1U < 0x21) {
      uVar2 = FUN_006078a8(DAT_0066a768,param_2);
    }
    else if (iVar1 - 0x22U < 0x21) {
      uVar2 = FUN_006078a8(DAT_0066a76c,param_2);
    }
    else if (iVar1 - 0x43U < 0xe) {
      uVar2 = FUN_006078a8(DAT_0066a770,param_2);
    }
  }
  else if (iVar1 - 0x51U < 5) {
    uVar2 = FUN_006078a8(DAT_0066a774,param_2);
  }
  else if (iVar1 - 0x56U < 6) {
    uVar2 = FUN_006078a8(DAT_0066a778,param_2);
  }
  else if (iVar1 - 0x5cU < 9) {
    uVar2 = FUN_006078a8(DAT_0066a77c,param_2);
  }
  return uVar2;
}

