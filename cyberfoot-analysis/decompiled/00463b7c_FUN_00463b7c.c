// Address: 00463b7c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_00463b7c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  HWND pHVar2;
  int iVar3;
  DWORD dwThreadId;
  BOOL BVar4;
  int iVar5;
  WNDENUMPROC lpfn;
  undefined4 *lParam;
  RECT local_40;
  tagRECT local_30;
  undefined4 local_20;
  HWND local_1c;
  HWND local_18;
  undefined4 local_14;
  undefined4 local_10;
  char local_c;
  undefined1 local_5;
  
  local_5 = 1;
  local_18 = (HWND)FUN_00463fcc(param_4 + -9);
  pHVar2 = GetWindow(local_18,4);
  if (pHVar2 != *(HWND *)(*(int *)PTR_DAT_0066b3ac + 0x30)) {
    iVar3 = FUN_00463094(local_18);
    if (iVar3 == 0) {
      return local_5;
    }
    do {
      iVar5 = iVar3;
      iVar3 = *(int *)(iVar5 + 0x30);
    } while (iVar3 != 0);
    local_18 = (HWND)FUN_0046cae0(iVar5);
  }
  iVar3 = param_1;
  if (local_18 != (HWND)0x0) {
    do {
      iVar5 = iVar3;
      iVar3 = *(int *)(iVar5 + 0x30);
    } while (iVar3 != 0);
    local_1c = (HWND)FUN_0046cae0(iVar5);
    if (local_1c != local_18) {
      iVar3 = *(int *)(*(int *)(param_4 + -0x10) + 0x30);
      if (iVar3 == 0) {
        cVar1 = FUN_00403c10(*(undefined4 *)(param_4 + -0x10),PTR_PTR_00461f94);
        if (cVar1 == '\0') {
          local_20 = 0;
        }
        else {
          local_20 = FUN_0046cae0(*(undefined4 *)(param_4 + -0x10));
        }
      }
      else {
        do {
          iVar5 = iVar3;
          iVar3 = *(int *)(iVar5 + 0x30);
        } while (iVar3 != 0);
        local_20 = FUN_0046cae0(iVar5,param_4);
      }
      local_c = '\0';
      local_14 = *(undefined4 *)(param_4 + -9);
      local_10 = *(undefined4 *)(param_4 + -5);
      lParam = &local_20;
      lpfn = (WNDENUMPROC)&LAB_00463b10;
      dwThreadId = GetCurrentThreadId();
      EnumThreadWindows(dwThreadId,lpfn,(LPARAM)lParam);
      if (local_c != '\0') {
        GetWindowRect(local_18,&local_30);
        FUN_00403c80(param_1,*(undefined4 *)(param_4 + -0x10),&local_40,param_4 + -1,param_4 + -9);
        cVar1 = FUN_00403c10(DAT_0066cb74,PTR_PTR_00460b74);
        if ((((cVar1 == '\0') || (*(int *)(*(int *)(DAT_0066cb74 + 0x38) + 0xa0) == 0)) ||
            (pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(*(int *)(DAT_0066cb74 + 0x38) + 0xa0)),
            pHVar2 != local_18)) &&
           (BVar4 = IntersectRect(&local_30,&local_30,&local_40), BVar4 != 0)) {
          local_5 = 0;
        }
      }
    }
  }
  return local_5;
}

