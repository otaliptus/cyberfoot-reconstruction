// Address: 0046a6b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046a6b4(int *param_1,int param_2)

{
  HWND pHVar1;
  HDC hdc;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  tagPAINTSTRUCT *ptVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  tagPAINTSTRUCT local_54;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puVar8 = &stack0xfffffffc;
  puVar7 = &stack0xfffffffc;
  hdc = *(HDC *)(param_2 + 4);
  local_c = param_2;
  local_8 = param_1;
  if (hdc == (HDC)0x0) {
    ptVar6 = &local_54;
    pHVar1 = (HWND)FUN_0046cae0(param_1);
    hdc = BeginPaint(pHVar1,ptVar6);
  }
  uVar5 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff94;
  if (local_8[0x66] == 0) {
    (**(code **)(*local_8 + 0xb8))(local_8,hdc);
  }
  else {
    local_14 = SaveDC(hdc);
    local_10 = 2;
    iVar4 = *(int *)(local_8[0x66] + 8);
    if (-1 < iVar4 + -1) {
      iVar3 = 0;
      do {
        iVar2 = FUN_0041e01c(local_8[0x66],iVar3);
        if (((*(char *)(iVar2 + 0x57) != '\0') ||
            (((*(byte *)(iVar2 + 0x1c) & 0x10) != 0 && ((*(byte *)(iVar2 + 0x51) & 4) == 0)))) &&
           ((*(byte *)(iVar2 + 0x50) & 0x40) != 0)) {
          local_10 = ExcludeClipRect(hdc,*(int *)(iVar2 + 0x40),*(int *)(iVar2 + 0x44),
                                     *(int *)(iVar2 + 0x40) + *(int *)(iVar2 + 0x48),
                                     *(int *)(iVar2 + 0x44) + *(int *)(iVar2 + 0x4c));
          if (local_10 == 1) break;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    puVar8 = puVar7;
    if (local_10 != 1) {
      (**(code **)(*local_8 + 0xb8))(local_8,hdc);
      puVar8 = puVar7;
    }
    RestoreDC(hdc,local_14);
  }
  FUN_0046a80c(local_8,hdc,0);
  *in_FS_OFFSET = uVar5;
  if (*(int *)(local_c + 4) == 0) {
    ptVar6 = &local_54;
    pHVar1 = (HWND)FUN_0046cae0(local_8,uVar5,puVar8);
    EndPaint(pHVar1,ptVar6);
  }
  return;
}

