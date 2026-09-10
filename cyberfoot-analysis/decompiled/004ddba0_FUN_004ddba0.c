// Address: 004ddba0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004ddba0(HWND param_1)

{
  char cVar1;
  BOOL BVar2;
  
  if (*PTR_DAT_0066adfc == '\0') {
    return 1;
  }
  BVar2 = IsWindowUnicode(param_1);
  if ((BVar2 == 0) && (cVar1 = FUN_004ddb70(param_1), cVar1 == '\0')) {
    return 1;
  }
  return 2;
}

