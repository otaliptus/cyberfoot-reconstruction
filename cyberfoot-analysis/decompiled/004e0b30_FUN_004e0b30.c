// Address: 004e0b30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e0b30(HWND param_1,WPARAM param_2)

{
  if (*PTR_DAT_0066adfc == '\0') {
    FUN_00404830("Assertion failure",
                 "c:\\program files (x86)\\borland\\delphi7\\Lib\\Delphi Unicode Controls\\Source\\TntStdCtrls.pas"
                 ,0x4ca);
  }
  SendMessageW(param_1,0xbb,param_2,0);
  return;
}

