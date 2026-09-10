// Address: 0046a578
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046a578(UINT param_1,UINT *param_2)

{
  UINT UVar1;
  COLORREF CVar2;
  
  if (*(int *)(param_1 + 0x180) == 0) {
    FUN_0046762c(param_1,param_2);
  }
  else {
    if ((*param_2 == 0x7b) && (*(int *)(param_1 + 0x30) != 0)) {
      UVar1 = FUN_004673cc(*(undefined4 *)(param_1 + 0x30),0x7b,param_2[1],param_2[2]);
      param_2[3] = UVar1;
      if (UVar1 != 0) {
        return;
      }
    }
    UVar1 = *param_2;
    if (UVar1 - 0x132 < 7) {
      UVar1 = SendMessageA((HWND)param_2[2],UVar1 + 0xbc00,param_2[1],(LPARAM)param_2[2]);
      param_2[3] = UVar1;
    }
    else if (UVar1 - 0xbd32 < 7) {
      CVar2 = FUN_00429e64(*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x18));
      SetTextColor((HDC)param_2[1],CVar2);
      FUN_0042ab64(*(undefined4 *)(param_1 + 0x170));
      CVar2 = FUN_00429e64();
      SetBkColor((HDC)param_2[1],CVar2);
      UVar1 = FUN_0042aba0(*(undefined4 *)(param_1 + 0x170));
      param_2[3] = UVar1;
    }
    else if (UVar1 == DAT_0066cb6c) {
      param_2[3] = param_1;
    }
    else {
      UVar1 = CallWindowProcA(*(WNDPROC *)(param_1 + 0x174),*(HWND *)(param_1 + 0x180),UVar1,
                              param_2[1],param_2[2]);
      param_2[3] = UVar1;
    }
    if (*param_2 == 0xc) {
      FUN_00465da8(param_1,0xc,param_2[1],param_2[2]);
    }
  }
  return;
}

