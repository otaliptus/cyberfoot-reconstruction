// Address: 00470914
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00470914(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  HWND hWnd;
  HDC pHVar4;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *(undefined4 *)(param_1 + 0x60) = param_2;
  uVar3 = FUN_0046cae0(*(undefined4 *)(param_1 + 0x14));
  FUN_00471474(DAT_0066cb54,uVar3);
  hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x14));
  *(HWND *)(param_1 + 0x5c) = hWnd;
  pHVar4 = GetDCEx(hWnd,(HRGN)0x0,0x412);
  *(HDC *)(param_1 + 0x58) = pHVar4;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  FUN_00470a28(param_1);
  return;
}

