// Address: 00487158
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00487158(int param_1,int *param_2)

{
  HWND pHVar1;
  int iVar2;
  LRESULT LVar3;
  LONG LVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  if ((0xff < (uint)param_2[1]) && ((uint)param_2[1] < 0x109)) {
    pHVar1 = GetCapture();
    if (pHVar1 == (HWND)0x0) {
      pHVar1 = (HWND)*param_2;
      if ((*(int *)(param_1 + 0x44) == 0) || (pHVar1 != *(HWND *)(*(int *)(param_1 + 0x44) + 0x254))
         ) {
        while( true ) {
          iVar2 = FUN_00463094(pHVar1);
          if ((iVar2 != 0) || (pHVar1 == (HWND)0x0)) break;
          pHVar1 = GetParent(pHVar1);
        }
        if (pHVar1 == (HWND)0x0) {
          pHVar1 = (HWND)*param_2;
        }
      }
      else {
        pHVar1 = (HWND)FUN_0046cae0();
      }
      LVar3 = SendMessageA(pHVar1,param_2[1] + 0xbc00,param_2[2],param_2[3]);
      if (LVar3 != 0) {
        uVar5 = 1;
      }
    }
    else {
      LVar4 = GetWindowLongA(pHVar1,-6);
      if (LVar4 == DAT_0066c668) {
        LVar3 = SendMessageA(pHVar1,param_2[1] + 0xbc00,param_2[2],param_2[3]);
        if (LVar3 != 0) {
          uVar5 = 1;
        }
      }
    }
  }
  return uVar5;
}

