// Address: 0046aa3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046aa3c(int param_1,HDC param_2,undefined4 param_3,undefined4 param_4)

{
  HWND pHVar1;
  uint uVar2;
  UINT grfFlags;
  int iVar3;
  tagRECT local_24;
  int local_14;
  int local_10;
  UINT local_c;
  int local_8;
  
  *(ushort *)(param_1 + 0x54) = *(ushort *)(param_1 + 0x54) | 0x80;
  local_10 = SaveDC(param_2);
  FUN_00464b44(param_2,param_3,param_4);
  IntersectClipRect(param_2,0,0,*(int *)(param_1 + 0x48),*(int *)(param_1 + 0x4c));
  grfFlags = 0;
  local_c = 0;
  iVar3 = -0x14;
  pHVar1 = (HWND)FUN_0046cae0(param_1);
  uVar2 = GetWindowLongA(pHVar1,iVar3);
  if ((uVar2 & 0x200) == 0) {
    iVar3 = -0x10;
    pHVar1 = (HWND)FUN_0046cae0(param_1);
    uVar2 = GetWindowLongA(pHVar1,iVar3);
    if ((uVar2 & 0x800000) != 0) {
      local_c = 3;
      grfFlags = 0xa00f;
    }
  }
  else {
    local_c = 10;
    grfFlags = 0x200f;
  }
  if (grfFlags != 0) {
    SetRect(&local_24,0,0,*(int *)(param_1 + 0x48),*(int *)(param_1 + 0x4c));
    DrawEdge(param_2,&local_24,local_c,grfFlags);
    FUN_00464b44(param_2,local_24.left,local_24.top);
    IntersectClipRect(param_2,0,0,local_24.right - local_24.left,local_24.bottom - local_24.top);
  }
  FUN_004673cc(param_1,0x14,param_2,0);
  FUN_004673cc(param_1,0xf,param_2,0);
  if ((*(int *)(param_1 + 0x19c) != 0) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x19c) + 8), -1 < iVar3 + -1)) {
    local_8 = 0;
    local_14 = iVar3;
    do {
      iVar3 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x19c),local_8);
      if (*(char *)(iVar3 + 0x57) != '\0') {
        FUN_0046aa3c(iVar3,param_2,*(undefined4 *)(iVar3 + 0x40),*(undefined4 *)(iVar3 + 0x44));
      }
      local_8 = local_8 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  RestoreDC(param_2,local_10);
  *(ushort *)(param_1 + 0x54) = *(ushort *)(param_1 + 0x54) & 0xff7f;
  return;
}

