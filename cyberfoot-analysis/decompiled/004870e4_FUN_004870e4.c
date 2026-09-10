// Address: 004870e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_004870e4(int param_1,LPMSG param_2)

{
  BOOL BVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(HWND *)(param_1 + 0xb0) != (HWND)0x0) {
    BVar1 = IsDialogMessageA(*(HWND *)(param_1 + 0xb0),param_2);
    bVar2 = BVar1 != 0;
  }
  return bVar2;
}

