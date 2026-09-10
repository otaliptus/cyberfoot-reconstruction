// Address: 0045eb80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045eb80(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  HWND hWnd;
  uint uVar3;
  uint edge;
  HDC pHVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  tagRECT *ptVar6;
  UINT UVar7;
  int iVar8;
  UINT UVar9;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  int local_8;
  
  puStack_38 = (undefined1 *)0x45eb92;
  FUN_0046ab90(param_1);
  if (*(char *)((int)param_1 + 0x165) != '\0') {
    puStack_38 = (undefined1 *)0x45ebab;
    local_8 = FUN_0042acbc(PTR_PTR_00460cd4,1);
    puStack_3c = &LAB_0045eda9;
    uStack_40 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_40;
    puStack_38 = &stack0xfffffffc;
    FUN_00464de4(local_8,param_1);
    (**(code **)(*param_1 + 0x44))(param_1,&local_18);
    FUN_0042ab6c(*(undefined4 *)(local_8 + 0x14),param_1[0x1c]);
    FUN_0042afc8(local_8,&local_18);
    InflateRect(&local_18,-1,-1);
    FUN_0042afc8(local_8,&local_18);
    if (*(char *)((int)param_1 + 0x165) != '\0') {
      iVar5 = 0;
      if (*(char *)((int)param_1 + 0x163) != '\0') {
        iVar5 = param_1[0x5a];
      }
      if ((char)param_1[0x59] != '\0') {
        iVar5 = iVar5 + param_1[0x5a];
      }
      if (iVar5 == 0) {
        (**(code **)(*param_1 + 0x44))(param_1,&local_18);
        FUN_0042ab6c(*(undefined4 *)(local_8 + 0x14),param_1[0x1c]);
        FUN_0042afc8(local_8,&local_18);
        InflateRect(&local_18,-1,-1);
        FUN_0042afc8(local_8,&local_18);
      }
      (**(code **)(*param_1 + 0x44))(param_1,&local_18);
      FUN_00465ba8(param_1,&local_28);
      iVar8 = -0x10;
      hWnd = (HWND)FUN_0042b5a8(local_8);
      uVar3 = GetWindowLongA(hWnd,iVar8);
      if ((*(byte *)((int)param_1 + 0x162) & 1) != 0) {
        local_28 = local_28 - iVar5;
      }
      if ((*(byte *)((int)param_1 + 0x162) & 2) != 0) {
        local_24 = local_24 - iVar5;
      }
      if ((*(byte *)((int)param_1 + 0x162) & 4) != 0) {
        local_20 = local_20 + iVar5;
      }
      if ((uVar3 & 0x200000) != 0) {
        iVar8 = GetSystemMetrics(0x14);
        local_20 = local_20 + iVar8;
      }
      if ((*(byte *)((int)param_1 + 0x162) & 8) != 0) {
        local_1c = local_1c + iVar5;
      }
      if ((uVar3 & 0x100000) != 0) {
        iVar5 = GetSystemMetrics(0x15);
        local_1c = local_1c + iVar5;
      }
      uVar3 = (uint)*(byte *)((int)param_1 + 0x162) |
              *(uint *)(&DAT_00662f58 + (uint)*(byte *)((int)param_1 + 0x165) * 4) |
              *(uint *)(&DAT_00662f68 + (uint)*(byte *)((int)param_1 + 0x1a5) * 4) | 0x2000;
      edge = *(uint *)(&DAT_00662f38 + (uint)*(byte *)((int)param_1 + 0x163) * 4) |
             *(uint *)(&DAT_00662f48 + (uint)*(byte *)(param_1 + 0x59) * 4);
      ptVar6 = &local_18;
      pHVar4 = (HDC)FUN_0042b5a8(local_8);
      DrawEdge(pHVar4,ptVar6,edge,uVar3);
      iVar5 = GetSystemMetrics(10);
      local_18.left = (local_18.right - iVar5) + -1;
      cVar2 = FUN_0045d32c(param_1);
      if (cVar2 == '\0') {
        UVar9 = 0x4005;
        UVar7 = 3;
        ptVar6 = &local_18;
        pHVar4 = (HDC)FUN_0042b5a8(local_8);
        DrawFrameControl(pHVar4,ptVar6,UVar7,UVar9);
      }
      else {
        UVar9 = 0x4005;
        UVar7 = 3;
        ptVar6 = &local_18;
        pHVar4 = (HDC)FUN_0042b5a8(local_8);
        DrawFrameControl(pHVar4,ptVar6,UVar7,UVar9);
      }
    }
    puVar1 = puStack_38;
    *in_FS_OFFSET = uStack_40;
    puStack_38 = (undefined1 *)0x45edb0;
    puStack_3c = (undefined1 *)0x45eda8;
    FUN_00403a84(local_8,uStack_40,puVar1);
    return;
  }
  return;
}

