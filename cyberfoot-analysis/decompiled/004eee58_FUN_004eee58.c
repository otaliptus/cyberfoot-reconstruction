// Address: 004eee58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004eee58(int param_1)

{
  char cVar1;
  HWND pHVar2;
  HDC hdc;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  int aiStackY_1808 [1522];
  undefined4 uVar7;
  undefined4 uVar8;
  tagRECT *lpRect;
  wchar_t *pwVar9;
  tagRECT local_2c;
  tagRECT local_1c;
  
  bVar6 = 0;
  lpRect = &local_2c;
  cVar1 = FUN_004e4b0c();
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x20c) == '\x01')) {
    FUN_0041c990(0,0,*(undefined4 *)(param_1 + 0x48),&local_2c,*(undefined4 *)(param_1 + 0x4c));
    pHVar2 = (HWND)FUN_0046cae0(param_1);
    hdc = GetWindowDC(pHVar2);
    pHVar2 = (HWND)FUN_0046cae0(param_1);
    GetWindowRect(pHVar2,lpRect);
    OffsetRect(&local_2c,-local_2c.left,-local_2c.top);
    local_1c.left = local_2c.left;
    puVar5 = (undefined4 *)((int)&local_1c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar4 = (undefined4 *)((int)&local_2c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(undefined4 *)((int)&local_1c + (uint)bVar6 * -8 + 4) =
         *(undefined4 *)((int)&local_2c + (uint)bVar6 * -8 + 4);
    *puVar5 = *puVar4;
    puVar5[(uint)bVar6 * -2 + 1] = puVar4[(uint)bVar6 * -2 + 1];
    InflateRect(&local_1c,-2,-2);
    ExcludeClipRect(hdc,local_1c.left,local_1c.top,local_1c.right,local_1c.bottom);
    pwVar9 = L"edit";
    uVar8 = 1;
    uVar7 = 0;
    uVar3 = FUN_0046cae0(param_1);
    FUN_004e4b8c(uVar3,hdc,&local_2c,uVar7,uVar8,pwVar9);
    pHVar2 = (HWND)FUN_0046cae0(param_1);
    ReleaseDC(pHVar2,hdc);
  }
  return;
}

