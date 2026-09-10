// Address: 004812a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004812a8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(char *)(param_1 + 0x22f) == '\x02') && (*(int *)(param_1 + 0x254) != 0)) {
    SendMessageA(*(HWND *)(param_1 + 0x254),0x229,0,0);
    uVar1 = FUN_00463094();
  }
  return uVar1;
}

