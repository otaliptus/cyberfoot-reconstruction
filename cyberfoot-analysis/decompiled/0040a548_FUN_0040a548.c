// Address: 0040a548
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040a548(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x14) != (HANDLE)0xffffffff) {
    FindClose(*(HANDLE *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  }
  return;
}

