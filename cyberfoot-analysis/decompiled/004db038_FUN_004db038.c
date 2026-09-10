// Address: 004db038
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004db038(int param_1,MSG *param_2,uint param_3)

{
  undefined4 uVar1;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  HWND hWnd;
  undefined4 uVar5;
  uint local_14;
  
  uVar5 = 0;
  local_14 = param_3;
  if ((*(char *)(param_1 + 0x30) == '\0') && (*(int *)(*(int *)PTR_DAT_0066b3ac + 0x44) != 0)) {
    uVar1 = *(undefined4 *)(*(int *)PTR_DAT_0066b3ac + 0x44);
    cVar2 = FUN_00403c10(uVar1,DAT_006620c8);
    if (cVar2 == '\0') {
      FUN_004daf58(PTR_PTR_004dae34,1,uVar1);
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  if (((param_2->message == 0x102) && (0xff < (int)param_2->wParam)) &&
     (BVar3 = IsWindowUnicode(param_2->hwnd), BVar3 != 0)) {
    iVar4 = FUN_00488800(*(undefined4 *)PTR_DAT_0066b3ac);
    if (iVar4 != 0) {
      hWnd = (HWND)FUN_00488800(*(undefined4 *)PTR_DAT_0066b3ac);
      BVar3 = IsWindowUnicode(hWnd);
      if (BVar3 == 0) {
        return 0;
      }
    }
    uVar5 = 1;
    local_14 = local_14 & 0xffffff00;
    if (*(short *)(*(int *)PTR_DAT_0066b3ac + 0xda) != 0) {
      (**(code **)(*(int *)PTR_DAT_0066b3ac + 0xd8))
                (*(undefined4 *)(*(int *)PTR_DAT_0066b3ac + 0xdc),param_2,&local_14);
    }
    FUN_00488198(*(undefined4 *)PTR_DAT_0066b3ac);
    if (((char)local_14 == '\0') && (cVar2 = FUN_004dadcc(param_1,param_2), cVar2 == '\0')) {
      DispatchMessageW(param_2);
    }
  }
  return uVar5;
}

