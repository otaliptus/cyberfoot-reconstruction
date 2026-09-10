// Address: 00455f10
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00455f10(int param_1,undefined1 param_2)

{
  char cVar1;
  uint uVar2;
  HWND hWnd;
  uint *puVar3;
  uint lParam;
  bool bVar4;
  UINT Msg;
  WPARAM wParam;
  
  lParam = 0;
  *(undefined1 *)(param_1 + 0x28a) = param_2;
  cVar1 = FUN_0046cde4(param_1);
  if (cVar1 != '\0') {
    uVar2 = 0;
    puVar3 = &DAT_00662e1c;
    do {
      bVar4 = (byte)uVar2 < 7;
      if ((byte)uVar2 < 8) {
        bVar4 = (*(byte *)(param_1 + 0x28a + ((int)(uVar2 & 0x7f) >> 3)) >> (uVar2 & 7) & 1) != 0;
      }
      if (bVar4) {
        lParam = lParam | *puVar3;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while ((char)uVar2 != '\x05');
    wParam = 0;
    Msg = 0x40e;
    hWnd = (HWND)FUN_0046cae0(param_1);
    SendMessageA(hWnd,Msg,wParam,lParam);
  }
  return;
}

