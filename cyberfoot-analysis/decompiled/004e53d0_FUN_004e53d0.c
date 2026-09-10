// Address: 004e53d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_004e53d0(undefined4 param_1,DWORD param_2,DWORD param_3,uint param_4)

{
  if (0xff < param_4) {
    FUN_00404830("Assertion failure","C:\\Components\\Berg\\Sources\\NxSharedCommon.pas",0x2f3);
  }
  if ((int)param_2 < 0) {
    param_2 = GetSysColor(param_2 & 0xff);
  }
  if ((int)param_3 < 0) {
    param_3 = GetSysColor(param_3 & 0xff);
  }
  return ((param_2 & 0xff00ff) * param_4 + (param_3 & 0xff00ff) * (param_4 ^ 0xff) & 0xff00ff00) +
         ((param_2 & 0xff00) * param_4 + (param_3 & 0xff00) * (param_4 ^ 0xff) & 0xff0000) >> 8;
}

