// Address: 004630f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

LRESULT FUN_004630f0(UINT param_1,WPARAM param_2,LPARAM param_3)

{
  LRESULT LVar1;
  
  if (*(HWND *)(*(int *)PTR_DAT_0066b3ac + 0x30) != (HWND)0x0) {
    LVar1 = SendMessageA(*(HWND *)(*(int *)PTR_DAT_0066b3ac + 0x30),param_1,param_2,param_3);
    return LVar1;
  }
  return 0;
}

