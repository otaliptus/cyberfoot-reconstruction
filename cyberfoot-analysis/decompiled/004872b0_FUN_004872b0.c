// Address: 004872b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004872b0(int param_1,LPMSG param_2,uint param_3)

{
  char cVar1;
  BOOL BVar2;
  undefined4 uVar3;
  uint local_10;
  
  uVar3 = 0;
  local_10 = param_3;
  BVar2 = PeekMessageA(param_2,(HWND)0x0,0,0,1);
  if (BVar2 != 0) {
    uVar3 = 1;
    if (param_2->message == 0x12) {
      *(undefined1 *)(param_1 + 0x9c) = 1;
    }
    else {
      local_10 = local_10 & 0xffffff00;
      if (*(short *)(param_1 + 0xda) != 0) {
        (**(code **)(param_1 + 0xd8))(*(undefined4 *)(param_1 + 0xdc),param_2,&local_10);
      }
      cVar1 = FUN_00487210(param_1,param_2);
      if ((cVar1 == '\0') && ((char)local_10 == '\0')) {
        cVar1 = FUN_00487108(param_1,param_2);
        if (cVar1 == '\0') {
          cVar1 = FUN_00487158(param_1,param_2);
          if (cVar1 == '\0') {
            cVar1 = FUN_004870e4(param_1,param_2);
            if (cVar1 == '\0') {
              TranslateMessage(param_2);
              DispatchMessageA(param_2);
            }
          }
        }
      }
    }
  }
  return uVar3;
}

