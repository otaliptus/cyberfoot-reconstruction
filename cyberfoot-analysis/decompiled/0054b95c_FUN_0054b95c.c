// Address: 0054b95c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054b95c(int param_1,int param_2)

{
  int iVar1;
  HWND pHVar2;
  LRESULT LVar3;
  int X;
  int Y;
  int nWidth;
  UINT Msg;
  WPARAM wParam;
  BOOL bRepaint;
  LPARAM lParam;
  
  if (*(short *)(param_2 + 6) == 1) {
    *(undefined1 *)(param_1 + 0x2cd) = 0;
    lParam = 0;
    wParam = 0;
    Msg = 0x147;
    pHVar2 = (HWND)FUN_0046cae0(param_1);
    LVar3 = SendMessageA(pHVar2,Msg,wParam,lParam);
    *(LRESULT *)(param_1 + 0x2c8) = LVar3;
    if (*(short *)(param_1 + 0x21a) != 0) {
      (**(code **)(param_1 + 0x218))(*(undefined4 *)(param_1 + 0x21c),param_1);
    }
  }
  else if (*(short *)(param_2 + 6) == 7) {
    bRepaint = -1;
    iVar1 = FUN_0054b8fc(param_1);
    iVar1 = iVar1 + *(int *)(param_1 + 700);
    nWidth = *(int *)(param_1 + 0x48);
    Y = *(int *)(param_1 + 0x44);
    X = *(int *)(param_1 + 0x40);
    pHVar2 = (HWND)FUN_0046cae0(param_1);
    MoveWindow(pHVar2,X,Y,nWidth,iVar1,bRepaint);
    FUN_00403c80(param_1);
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined1 *)(param_1 + 0x2cd) = 1;
    if (*(short *)(param_1 + 0x122) != 0) {
      (**(code **)(param_1 + 0x120))(*(undefined4 *)(param_1 + 0x124),param_1);
    }
  }
  else {
    FUN_0054cd48(param_1,param_2);
  }
  return;
}

