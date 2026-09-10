// Address: 00463060
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

LRESULT FUN_00463060(HWND param_1,undefined4 param_2,DWORD param_3)

{
  DWORD DVar1;
  LRESULT LVar2;
  DWORD local_8;
  
  local_8 = param_3;
  DVar1 = GetWindowThreadProcessId(param_1,&local_8);
  if (DVar1 != 0) {
    DVar1 = GetCurrentProcessId();
    if (DVar1 == local_8) {
      LVar2 = SendMessageA(param_1,DAT_0066cb6c,0,0);
      return LVar2;
    }
  }
  return 0;
}

