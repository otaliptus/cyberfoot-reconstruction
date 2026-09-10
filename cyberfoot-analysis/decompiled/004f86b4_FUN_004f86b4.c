// Address: 004f86b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f86b4(int *param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  int iVar2;
  HWND pHVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  RECT *pRVar5;
  tagRECT *ptVar6;
  HRGN pHVar7;
  undefined4 uVar8;
  tagRECT *ptVar9;
  UINT UVar10;
  undefined1 *puVar11;
  tagRECT local_18;
  int *local_8;
  
  puVar11 = &stack0xfffffffc;
  local_8 = param_1;
  FUN_0050f004(param_1,&local_18);
  local_18.left = 0;
  iVar2 = (**(code **)(*local_8 + 0x144))();
  if (iVar2 == 0) {
    local_18.top = FUN_0050f5f8(local_8,param_2);
    iVar2 = FUN_0050f404(local_8,4);
    iVar2 = -iVar2 - param_3;
    local_8[0x136] = 0;
    UVar10 = 2;
    ptVar9 = &local_18;
    pHVar7 = (HRGN)0x0;
    ptVar6 = &local_18;
    pRVar5 = (RECT *)0x0;
    iVar4 = 0;
    pHVar3 = (HWND)FUN_0046cae0(local_8);
    ScrollWindowEx(pHVar3,iVar4,iVar2,pRVar5,ptVar6,pHVar7,ptVar9,UVar10);
  }
  iVar2 = local_8[0x136];
  if (param_2 == iVar2) {
    if (param_4 == '\0') {
      cVar1 = FUN_004e7d68(local_8[0x9a]);
      if ((cVar1 == '\0') && (iVar2 = (**(code **)(*local_8 + 0x144))(), 0 < iVar2)) {
        while ((iVar2 = (**(code **)(*local_8 + 0x11c))(), local_8[0x136] < iVar2 &&
               (cVar1 = (**(code **)(*local_8 + 300))(local_8,local_8[0x136]), cVar1 == '\0'))) {
          local_8[0x136] = local_8[0x136] + 1;
        }
      }
      iVar2 = FUN_0050f404(local_8,4);
      iVar2 = -(iVar2 + param_3);
      cVar1 = FUN_004e7d68(local_8[0x9a]);
      if (cVar1 != '\0') {
        FUN_004e7c80(local_8[0x9a]);
      }
    }
    else {
      iVar2 = FUN_0050f404(local_8,3);
      iVar2 = iVar2 + param_3;
    }
    UVar10 = 2;
    ptVar9 = &local_18;
    pHVar7 = (HRGN)0x0;
    ptVar6 = &local_18;
    pRVar5 = (RECT *)0x0;
    iVar4 = 0;
    pHVar3 = (HWND)FUN_0046cae0(local_8);
    ScrollWindowEx(pHVar3,iVar4,iVar2,pRVar5,ptVar6,pHVar7,ptVar9,UVar10);
  }
  else if (iVar2 < param_2) {
    if ((char)local_8[0xaf] == '\0') {
      local_18.top = FUN_0050f5f8(local_8,param_2);
    }
    else if ((char)local_8[0xaf] == '\x01') {
      local_18.top = FUN_0050f73c(local_8,param_2);
    }
    iVar2 = FUN_0050f404(local_8,4);
    iVar2 = iVar2 + param_3;
    if (param_4 == '\0') {
      iVar2 = -iVar2;
    }
    UVar10 = 2;
    ptVar9 = &local_18;
    pHVar7 = (HRGN)0x0;
    ptVar6 = &local_18;
    pRVar5 = (RECT *)0x0;
    iVar4 = 0;
    pHVar3 = (HWND)FUN_0046cae0(local_8);
    ScrollWindowEx(pHVar3,iVar4,iVar2,pRVar5,ptVar6,pHVar7,ptVar9,UVar10);
    cVar1 = FUN_004e7d68(local_8[0x9a]);
    if (cVar1 != '\0') {
      FUN_004e7c80(local_8[0x9a]);
    }
  }
  else if (param_2 < iVar2) {
    cVar1 = FUN_004e7d78(local_8[0x9a]);
    if (cVar1 == '\0') {
      uVar8 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffd0;
      FUN_004e7bcc(local_8[0x9a]);
      if (param_4 == '\0') {
        cVar1 = FUN_004e7d68(local_8[0x9a]);
        if (cVar1 == '\0') {
          FUN_004e7c80(local_8[0x9a]);
        }
        else {
          FUN_004e7c38(local_8[0x9a]);
        }
      }
      else {
        FUN_004e7c38(local_8[0x9a]);
      }
      *in_FS_OFFSET = uVar8;
      FUN_004e7bd0(local_8[0x9a],uVar8,puVar11);
      return;
    }
    if (param_4 == '\0') {
      iVar2 = FUN_0050f404(local_8,4);
      iVar2 = iVar2 - param_3;
    }
    else {
      local_8[0x136] = param_2;
      iVar2 = FUN_0050f404(local_8,4);
      iVar2 = iVar2 + param_3;
    }
    UVar10 = 2;
    ptVar9 = &local_18;
    pHVar7 = (HRGN)0x0;
    ptVar6 = &local_18;
    pRVar5 = (RECT *)0x0;
    iVar4 = 0;
    pHVar3 = (HWND)FUN_0046cae0(local_8);
    ScrollWindowEx(pHVar3,iVar4,iVar2,pRVar5,ptVar6,pHVar7,ptVar9,UVar10);
  }
  (**(code **)(*local_8 + 0x1bc))();
  return;
}

