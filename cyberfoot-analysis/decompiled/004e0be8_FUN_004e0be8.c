// Address: 004e0be8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

LRESULT FUN_004e0be8(HWND param_1,undefined4 param_2,WPARAM param_3)

{
  LRESULT LVar1;
  
  if (*PTR_DAT_0066adfc == '\0') {
    FUN_00404830("Assertion failure",
                 "c:\\program files (x86)\\borland\\delphi7\\Lib\\Delphi Unicode Controls\\Source\\TntStdCtrls.pas"
                 ,0x4d0);
  }
  if (param_3 == 0xffffffff) {
    param_3 = FUN_004e0b30(param_1,param_2);
  }
  if ((int)param_3 < 0) {
    LVar1 = 0;
  }
  else {
    LVar1 = SendMessageW(param_1,0xc1,param_3,0);
  }
  return LVar1;
}

