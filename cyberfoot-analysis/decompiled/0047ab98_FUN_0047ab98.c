// Address: 0047ab98
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047ab98(int param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    cVar1 = FUN_0047a51c(param_1);
    if (param_3 == 0) {
      SendMessageA(*(HWND *)(param_1 + 0x38),0xb015,0,0);
    }
    if (cVar1 != '\0') {
      DrawMenuBar(*(HWND *)(param_1 + 0x38));
    }
  }
  FUN_0047a694(param_1,param_2,param_3,param_4);
  return;
}

