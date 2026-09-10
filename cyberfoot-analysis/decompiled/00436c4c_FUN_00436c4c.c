// Address: 00436c4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00436c4c(HWND param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int cx;
  int cy;
  UINT uFlags;
  tagRECT local_1c;
  
  GetWindowRect(param_1,&local_1c);
  if (*(int *)(*(int *)PTR_DAT_0066b3ac + 0x44) == 0) {
    uVar1 = FUN_00484ea0(*(undefined4 *)PTR_DAT_0066b760,0);
  }
  else if (*(int *)(*(int *)PTR_DAT_0066b760 + 0x6c) == 0) {
    uVar1 = FUN_004813a8(*(int *)(*(int *)PTR_DAT_0066b3ac + 0x44));
  }
  else {
    uVar1 = FUN_004813a8(*(int *)(*(int *)PTR_DAT_0066b760 + 0x6c),PTR_DAT_0066b760);
  }
  uFlags = 0x15;
  cy = 0;
  cx = 0;
  iVar2 = FUN_00484b0c(uVar1);
  iVar3 = FUN_00484af0(uVar1);
  iVar3 = (iVar3 - local_1c.bottom) + local_1c.top;
  iVar2 = iVar2 + iVar3 / 3;
  iVar3 = FUN_00484ad8(uVar1,iVar3 % 3);
  iVar4 = FUN_00484b24(uVar1);
  uVar5 = (iVar4 - local_1c.right) + local_1c.left;
  iVar4 = (int)uVar5 >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((uVar5 & 1) != 0);
  }
  SetWindowPos(param_1,(HWND)0x0,iVar3 + iVar4,iVar2,cx,cy,uFlags);
  return;
}

