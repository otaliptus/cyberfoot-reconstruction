// Address: 004e6544
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_004e6544(uint param_1,DWORD param_2,uint param_3)

{
  if (0xff < param_3) {
    FUN_00404830("Assertion failure","C:\\Components\\Berg\\Sources\\NxSharedDraw.pas",99);
  }
  if ((int)param_1 < 0) {
    param_1 = GetSysColor(param_1 & 0xff);
  }
  if ((int)param_2 < 0) {
    param_2 = GetSysColor(param_2 & 0xff);
  }
  return ((param_1 & 0xff00ff) * param_3 + (param_2 & 0xff00ff) * (param_3 ^ 0xff) & 0xff00ff00) +
         ((param_1 & 0xff00) * param_3 + (param_2 & 0xff00) * (param_3 ^ 0xff) & 0xff0000) >> 8;
}

