// Address: 00522630
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00522630(int param_1)

{
  FUN_00426dac(param_1);
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    if (*(HANDLE *)(param_1 + 0x80) != (HANDLE)0x0) {
      SetEvent(*(HANDLE *)(param_1 + 0x80));
    }
    FUN_00426bf0(param_1,3);
    if (*(char *)(param_1 + 0xe) != '\0') {
      FUN_00426d84(param_1);
    }
  }
  return;
}

