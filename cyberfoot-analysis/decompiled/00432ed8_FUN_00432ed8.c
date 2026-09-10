// Address: 00432ed8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00432ed8(HWND param_1,WPARAM param_2,uint param_3)

{
  undefined1 auStack_28 [12];
  int local_1c;
  undefined4 local_18;
  
  local_18 = 0xf000;
  local_1c = ((param_3 & 1) + 1) * 0x1000;
  SendMessageA(param_1,0x102b,param_2,(LPARAM)auStack_28);
  return;
}

