// Address: 00432eb8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00432eb8(HWND param_1,WPARAM param_2)

{
  uint uVar1;
  
  uVar1 = SendMessageA(param_1,0x102c,param_2,0xf000);
  return (uVar1 >> 0xc) - 1;
}

