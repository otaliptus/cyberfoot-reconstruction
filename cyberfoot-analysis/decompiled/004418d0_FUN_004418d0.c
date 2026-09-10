// Address: 004418d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004418d0(int param_1,HKEY param_2)

{
  if (param_2 != *(HKEY *)(param_1 + 8)) {
    if (*(char *)(param_1 + 0x14) != '\0') {
      RegCloseKey(*(HKEY *)(param_1 + 8));
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
    *(HKEY *)(param_1 + 8) = param_2;
    FUN_004418a0(param_1);
  }
  return;
}

