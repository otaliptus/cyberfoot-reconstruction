// Address: 00463094
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

HANDLE FUN_00463094(HWND param_1,undefined4 param_2,DWORD param_3)

{
  ATOM AVar1;
  DWORD DVar2;
  LPCSTR lpString;
  HANDLE pvVar3;
  DWORD local_c;
  
  pvVar3 = (HANDLE)0x0;
  if (param_1 != (HWND)0x0) {
    local_c = param_3;
    DVar2 = GetWindowThreadProcessId(param_1,&local_c);
    if (DVar2 != 0) {
      DVar2 = GetCurrentProcessId();
      if (DVar2 == local_c) {
        lpString = (LPCSTR)FUN_00404da4(DAT_0066cb68);
        AVar1 = GlobalFindAtomA(lpString);
        if (AVar1 == DAT_0066cb62) {
          pvVar3 = GetPropA(param_1,(LPCSTR)(uint)DAT_0066cb62);
        }
        else {
          pvVar3 = (HANDLE)FUN_00463060(param_1);
        }
      }
    }
  }
  return pvVar3;
}

