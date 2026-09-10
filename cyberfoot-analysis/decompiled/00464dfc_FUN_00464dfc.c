// Address: 00464dfc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00464dfc(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    cVar1 = FUN_0046685c(*(int *)(param_1 + 0x58));
    if (cVar1 == '\0') {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffffff7f;
    }
    else {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x80;
    }
  }
  return;
}

