// Address: 00486e1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00486e1c(int param_1)

{
  BOOL BVar1;
  HWND pHVar2;
  int iVar3;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  
  BVar1 = IsIconic(*(HWND *)(param_1 + 0x30));
  if (BVar1 != 0) {
    return;
  }
  FUN_00486504(param_1);
  SetActiveWindow(*(HWND *)(param_1 + 0x30));
  if ((*(int *)(param_1 + 0x44) != 0) &&
     ((*(char *)(param_1 + 0x5b) != '\0' || (*(char *)(*(int *)(param_1 + 0x44) + 0x57) != '\0'))))
  {
    pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x44));
    BVar1 = IsWindowEnabled(pHVar2);
    if (BVar1 != 0) {
      uFlags = 0x40;
      cy = 0;
      iVar3 = *(int *)(param_1 + 0x44);
      cx = *(int *)(iVar3 + 0x48);
      Y = *(int *)(iVar3 + 0x44);
      iVar3 = *(int *)(iVar3 + 0x40);
      pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x44));
      SetWindowPos(*(HWND *)(param_1 + 0x30),pHVar2,iVar3,Y,cx,cy,uFlags);
      DefWindowProcA(*(HWND *)(param_1 + 0x30),0x112,0xf020,0);
      goto LAB_00486eb1;
    }
  }
  FUN_00485e34(*(undefined4 *)(param_1 + 0x30),6);
LAB_00486eb1:
  if (*(short *)(param_1 + 0x11a) != 0) {
    (**(code **)(param_1 + 0x118))(*(undefined4 *)(param_1 + 0x11c),param_1);
  }
  return;
}

