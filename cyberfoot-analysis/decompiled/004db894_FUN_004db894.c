// Address: 004db894
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004db894(uint param_1)

{
  if (*PTR_DAT_0066adfc == '\0') {
    FUN_00404830("Assertion failure",
                 "c:\\program files (x86)\\borland\\delphi7\\Lib\\Delphi Unicode Controls\\Source\\TntMenus.pas"
                 ,0xb9);
  }
  MapVirtualKeyW(param_1 & 0xffff,2);
  return;
}

