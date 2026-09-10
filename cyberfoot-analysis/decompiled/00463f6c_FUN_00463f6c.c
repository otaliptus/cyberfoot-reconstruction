// Address: 00463f6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_00463f6c(HWND param_1,undefined4 param_2,DWORD param_3)

{
  ATOM AVar1;
  DWORD DVar2;
  LPCSTR lpString;
  HANDLE pvVar3;
  int iVar4;
  bool bVar5;
  DWORD local_c;
  
  bVar5 = false;
  if (param_1 != (HWND)0x0) {
    local_c = param_3;
    DVar2 = GetWindowThreadProcessId(param_1,&local_c);
    if (DVar2 != 0) {
      DVar2 = GetCurrentProcessId();
      if (DVar2 == local_c) {
        lpString = (LPCSTR)FUN_00404da4(DAT_0066cb64);
        AVar1 = GlobalFindAtomA(lpString);
        if (AVar1 == DAT_0066cb60) {
          pvVar3 = GetPropA(param_1,(LPCSTR)(uint)DAT_0066cb60);
          bVar5 = pvVar3 != (HANDLE)0x0;
        }
        else {
          iVar4 = FUN_00463060(param_1);
          bVar5 = iVar4 != 0;
        }
      }
    }
  }
  return bVar5;
}

