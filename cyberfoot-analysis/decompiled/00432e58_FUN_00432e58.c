// Address: 00432e58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00432e58(HWND param_1,WPARAM param_2)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(param_1,0x102a,param_2,0);
  return -(uint)(LVar1 != 0);
}

