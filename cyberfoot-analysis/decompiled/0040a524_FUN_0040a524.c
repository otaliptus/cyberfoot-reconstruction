// Address: 0040a524
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040a524(int param_1)

{
  BOOL BVar1;
  
  BVar1 = FindNextFileA(*(HANDLE *)(param_1 + 0x14),(LPWIN32_FIND_DATAA)(param_1 + 0x18));
  if (BVar1 != 0) {
    FUN_0040a470(param_1);
    return;
  }
  GetLastError();
  return;
}

