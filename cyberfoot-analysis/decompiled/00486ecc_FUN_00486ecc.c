// Address: 00486ecc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00486ecc(int param_1)

{
  BOOL BVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  int X;
  undefined4 extraout_ECX;
  int Y;
  int cy;
  UINT uFlags;
  undefined4 uVar5;
  undefined4 uVar6;
  
  BVar1 = IsIconic(*(HWND *)(param_1 + 0x30));
  if (BVar1 == 0) {
    return;
  }
  SetActiveWindow(*(HWND *)(param_1 + 0x30));
  if ((*(int *)(param_1 + 0x44) != 0) &&
     ((*(char *)(param_1 + 0x5b) != '\0' || (*(char *)(*(int *)(param_1 + 0x44) + 0x57) != '\0'))))
  {
    pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x44));
    BVar1 = IsWindowEnabled(pHVar2);
    if (BVar1 != 0) {
      DefWindowProcA(*(HWND *)(param_1 + 0x30),0x112,0xf120,0);
      goto LAB_00486f35;
    }
  }
  FUN_00485e34(*(undefined4 *)(param_1 + 0x30),9);
LAB_00486f35:
  uVar6 = 0x40;
  uVar5 = 0;
  uFlags = 0;
  cy = 1;
  uVar3 = (**(code **)PTR_DAT_0066b008)();
  iVar4 = (int)uVar3 >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((uVar3 & 1) != 0);
  }
  Y = 0;
  uVar3 = (**(code **)PTR_DAT_0066b008)();
  X = (int)uVar3 >> 1;
  if (X < 0) {
    X = X + (uint)((uVar3 & 1) != 0);
  }
  SetWindowPos(*(HWND *)(param_1 + 0x30),(HWND)0x0,X,Y,iVar4,cy,uFlags);
  iVar4 = *(int *)(param_1 + 0x44);
  if (((iVar4 != 0) && (*(char *)(iVar4 + 0x22b) == '\x01')) && (*(char *)(iVar4 + 0x57) == '\0')) {
    FUN_00481950(iVar4,0,extraout_ECX,uVar5,uVar6);
    FUN_00483d6c(*(undefined4 *)(param_1 + 0x44));
  }
  FUN_00486514(param_1);
  if (*(int *)(DAT_0066cbf8 + 100) != 0) {
    pHVar2 = (HWND)FUN_0046cae0(*(int *)(DAT_0066cbf8 + 100));
    SetFocus(pHVar2);
  }
  if (*(short *)(param_1 + 0x122) != 0) {
    (**(code **)(param_1 + 0x120))(*(undefined4 *)(param_1 + 0x124),param_1);
  }
  return;
}

