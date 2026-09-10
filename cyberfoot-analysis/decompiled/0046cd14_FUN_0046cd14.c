// Address: 0046cd14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046cd14(int param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  
  if (param_2 != *(char *)(param_1 + 0x1a4)) {
    *(char *)(param_1 + 0x1a4) = param_2;
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      uVar2 = GetWindowLongA(*(HWND *)(param_1 + 0x180),-0x10);
      uVar2 = uVar2 & 0xfffeffff;
      if (param_2 != '\0') {
        uVar2 = uVar2 | 0x10000;
      }
      SetWindowLongA(*(HWND *)(param_1 + 0x180),-0x10,uVar2);
    }
    FUN_004673cc(param_1,0xb028,0,0);
  }
  return;
}

