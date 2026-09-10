// Address: 0040144c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

WORD FUN_0040144c(void)

{
  WORD WVar1;
  _STARTUPINFOA _Stack_48;
  
  GetStartupInfoA(&_Stack_48);
  WVar1 = 10;
  if (((byte)_Stack_48.dwFlags & 1) != 0) {
    WVar1 = _Stack_48.wShowWindow;
  }
  return WVar1;
}

