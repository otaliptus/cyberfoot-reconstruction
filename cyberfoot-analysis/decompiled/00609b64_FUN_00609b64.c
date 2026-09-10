// Address: 00609b64
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00609b64(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004032c8(4);
  iVar1 = iVar1 + 2 +
          (*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x1a0 + param_1 * 0x1bc) +
          *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x1a4 + param_1 * 0x1bc)) * 2;
  if (iVar1 + 0xb6 < 0xbf) {
    iVar1 = iVar1 + 0xb6;
  }
  else {
    iVar1 = 0xbe;
  }
  *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x184 + param_1 * 0x1bc) = iVar1;
  return;
}

