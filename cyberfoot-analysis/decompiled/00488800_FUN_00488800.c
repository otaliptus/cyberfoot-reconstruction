// Address: 00488800
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

LRESULT FUN_00488800(int param_1)

{
  LRESULT LVar1;
  
  if (*(char *)(param_1 + 0xa4) == '\0') {
    LVar1 = SendMessageA(*(HWND *)(param_1 + 0x30),0xb031,1,0);
    return LVar1;
  }
  return *(LRESULT *)(param_1 + 0xb0);
}

