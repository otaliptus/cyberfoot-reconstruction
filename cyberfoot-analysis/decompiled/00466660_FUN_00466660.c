// Address: 00466660
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00466660(int param_1,char param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  HWND hWnd;
  RECT *lpRect;
  int bErase;
  RECT local_18;
  int local_8;
  
  if (param_2 == '\0') {
    if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
      return;
    }
    if ((*(byte *)(param_1 + 0x51) & 4) != 0) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    return;
  }
  local_8 = param_1;
  cVar2 = FUN_0046cde4(*(undefined4 *)(param_1 + 0x30));
  if (cVar2 != '\0') {
    FUN_00465ba8(local_8,&local_18);
    if (((param_3 == '\0') && ((*(byte *)(*(int *)(local_8 + 0x30) + 0x50) & 0x40) == 0)) &&
       (cVar2 = FUN_004665d4(), cVar2 == '\0')) {
      bVar1 = 1;
    }
    else {
      bVar1 = 0;
    }
    bErase = -(uint)bVar1;
    lpRect = &local_18;
    hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(local_8 + 0x30));
    InvalidateRect(hWnd,lpRect,bErase);
    return;
  }
  return;
}

