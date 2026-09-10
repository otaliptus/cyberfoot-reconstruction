// Address: 00487fa0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00487fa0(int param_1,UINT param_2,undefined1 param_3)

{
  UINT_PTR UVar1;
  
  FUN_00487fe4(param_1);
  UVar1 = SetTimer((HWND)0x0,0,param_2,FUN_00485c18);
  *(short *)(param_1 + 0x8a) = (short)UVar1;
  *(undefined1 *)(param_1 + 0x89) = param_3;
  if (*(short *)(param_1 + 0x8a) == 0) {
    FUN_00488198(param_1);
  }
  return;
}

