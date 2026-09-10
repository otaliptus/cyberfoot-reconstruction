// Address: 004e7fc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e7fc8(int param_1)

{
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xfe;
    FUN_004e8480(param_1,0);
  }
  if ((*(byte *)(param_1 + 0x51) & 1) != 0) {
    *(byte *)(param_1 + 0x51) = *(byte *)(param_1 + 0x51) & 0xfe;
    FUN_004e8480(param_1,2);
  }
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfe;
    FUN_004e8480(param_1,1);
  }
  return;
}

