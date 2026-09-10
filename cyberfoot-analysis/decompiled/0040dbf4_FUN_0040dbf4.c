// Address: 0040dbf4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0040dbf4(LCID param_1,LCTYPE param_2,uint param_3)

{
  int iVar1;
  uint local_10;
  
  local_10 = param_3;
  iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)&local_10,2);
  if (0 < iVar1) {
    param_3 = local_10 & 0xff;
  }
  return param_3;
}

