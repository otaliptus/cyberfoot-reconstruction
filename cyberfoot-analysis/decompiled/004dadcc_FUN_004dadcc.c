// Address: 004dadcc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_004dadcc(undefined4 param_1,LPMSG param_2)

{
  int iVar1;
  HWND pHVar2;
  BOOL BVar3;
  bool bVar4;
  
  bVar4 = false;
  iVar1 = FUN_00488800(*(undefined4 *)PTR_DAT_0066b3ac);
  if (iVar1 != 0) {
    pHVar2 = (HWND)FUN_00488800(*(undefined4 *)PTR_DAT_0066b3ac);
    BVar3 = IsWindowUnicode(pHVar2);
    if (BVar3 == 0) {
      pHVar2 = (HWND)FUN_00488800(*(undefined4 *)PTR_DAT_0066b3ac);
      BVar3 = IsDialogMessageA(pHVar2,param_2);
      bVar4 = BVar3 != 0;
    }
    else {
      pHVar2 = (HWND)FUN_00488800(*(undefined4 *)PTR_DAT_0066b3ac);
      BVar3 = IsDialogMessageW(pHVar2,param_2);
      bVar4 = BVar3 != 0;
    }
  }
  return bVar4;
}

