// Address: 0040db5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040db5c(DWORD param_1,undefined4 param_2)

{
  DWORD DVar1;
  CHAR local_104 [256];
  
  DVar1 = FormatMessageA(0x3200,(LPCVOID)0x0,param_1,0,local_104,0x100,(va_list *)0x0);
  for (; (0 < (int)DVar1 && (((byte)local_104[DVar1 - 1] < 0x21 || (local_104[DVar1 - 1] == 0x2e))))
      ; DVar1 = DVar1 - 1) {
  }
  FUN_004049c4(param_2,local_104,DVar1);
  return;
}

