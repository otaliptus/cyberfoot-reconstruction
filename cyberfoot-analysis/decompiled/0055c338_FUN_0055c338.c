// Address: 0055c338
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0055c338(undefined4 param_1)

{
  HWND pHVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = -0x14;
  pHVar1 = (HWND)FUN_0046cae0(param_1);
  uVar2 = GetWindowLongA(pHVar1,iVar3);
  if ((uVar2 & 0x80000) == 0) {
    iVar3 = -0x14;
    pHVar1 = (HWND)FUN_0046cae0(param_1);
    uVar2 = GetWindowLongA(pHVar1,iVar3);
    uVar2 = uVar2 | 0x80000;
    iVar3 = -0x14;
    pHVar1 = (HWND)FUN_0046cae0(param_1);
    SetWindowLongA(pHVar1,iVar3,uVar2);
  }
  FUN_0055c690(param_1);
  return;
}

