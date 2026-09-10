// Address: 004418a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004418a0(int param_1)

{
  HKEY hKey;
  
  hKey = *(HKEY *)(param_1 + 4);
  if (hKey != (HKEY)0x0) {
    if (*(char *)(param_1 + 0xc) == '\0') {
      RegFlushKey(hKey);
    }
    else {
      RegCloseKey(hKey);
    }
    *(undefined4 *)(param_1 + 4) = 0;
    FUN_004048d4(param_1 + 0x10);
  }
  return;
}

