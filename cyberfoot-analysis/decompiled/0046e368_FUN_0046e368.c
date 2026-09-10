// Address: 0046e368
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046e368(int param_1,undefined4 param_2,undefined4 param_3,LPRECT param_4)

{
  uint uVar1;
  LPCSTR lpchText;
  HDC hdc;
  int cchText;
  LPRECT lprc;
  
  FUN_0041c990(0,0,param_2,param_4,0);
  uVar1 = FUN_00468538(param_1);
  uVar1 = uVar1 | 0xc10;
  cchText = -1;
  lprc = param_4;
  lpchText = (LPCSTR)FUN_00404da4(param_3);
  hdc = (HDC)FUN_0042b5a8(*(undefined4 *)(param_1 + 0x208));
  DrawTextA(hdc,lpchText,cchText,lprc,uVar1);
  param_4->right = param_4->right + 6;
  param_4->bottom = param_4->bottom + 2;
  return;
}

