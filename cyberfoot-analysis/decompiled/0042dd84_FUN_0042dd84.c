// Address: 0042dd84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042dd84(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 HDC param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  LPCSTR lpDesc;
  HDC pHVar7;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  RECT *pRVar8;
  undefined4 uVar9;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 local_24;
  RECT local_20;
  HDC local_10;
  undefined1 local_9;
  int local_8;
  
  local_24 = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStack_44 = (undefined1 *)0x42dd9e;
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStack_48 = &LAB_0042df90;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  local_8 = param_1;
  FUN_0042acbc(param_1,0);
  *(undefined4 *)(local_8 + 0x58) = param_3;
  local_10 = param_6;
  if (param_6 == (HDC)0x0) {
    local_10 = GetDC((HWND)0x0);
  }
  uVar9 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffa8;
  iVar2 = FUN_0042e338(*(undefined4 *)(local_8 + 0x58));
  if (iVar2 == 0) {
    iVar2 = (**(code **)(**(int **)(local_8 + 0x58) + 0x2c))();
    if (iVar2 == 0) {
      iVar2 = GetDeviceCaps(local_10,4);
      FUN_0042e998(*(undefined4 *)(local_8 + 0x58),iVar2 * 100);
    }
    else {
      iVar2 = GetDeviceCaps(local_10,8);
      iVar3 = GetDeviceCaps(local_10,4);
      iVar3 = iVar3 * 100;
      piVar1 = *(int **)(local_8 + 0x58);
      iVar4 = (**(code **)(*piVar1 + 0x2c))();
      iVar2 = MulDiv(iVar4,iVar3,iVar2);
      FUN_0042e998(piVar1,iVar2);
    }
  }
  iVar2 = FUN_0042e320(*(undefined4 *)(local_8 + 0x58));
  if (iVar2 == 0) {
    iVar2 = (**(code **)(**(int **)(local_8 + 0x58) + 0x20))();
    if (iVar2 == 0) {
      iVar2 = GetDeviceCaps(local_10,6);
      FUN_0042e95c(*(undefined4 *)(local_8 + 0x58),iVar2 * 100);
    }
    else {
      iVar2 = GetDeviceCaps(local_10,10);
      iVar3 = GetDeviceCaps(local_10,6);
      iVar3 = iVar3 * 100;
      piVar1 = *(int **)(local_8 + 0x58);
      iVar4 = (**(code **)(*piVar1 + 0x20))();
      iVar2 = MulDiv(iVar4,iVar3,iVar2);
      FUN_0042e95c(piVar1,iVar2);
    }
  }
  uVar5 = FUN_0042e320(*(undefined4 *)(local_8 + 0x58));
  pRVar8 = &local_20;
  uVar6 = FUN_0042e338(*(undefined4 *)(local_8 + 0x58));
  FUN_0041c990(0,0,uVar6,pRVar8,uVar5);
  iVar2 = FUN_00404ba4(param_5);
  if (iVar2 < 1) {
    iVar2 = FUN_00404ba4(param_4);
    if (iVar2 < 1) {
      lpDesc = (LPCSTR)0x0;
      goto LAB_0042df2f;
    }
  }
  FUN_00404c64(&local_24,4);
  lpDesc = (LPCSTR)FUN_00404da4(local_24);
LAB_0042df2f:
  pHVar7 = CreateEnhMetaFileA(local_10,(LPCSTR)0x0,&local_20,lpDesc);
  if (pHVar7 == (HDC)0x0) {
    FUN_0042b8f8();
  }
  FUN_0042b628(local_8,pHVar7);
  *in_FS_OFFSET = uVar9;
  if (param_6 == (HDC)0x0) {
    ReleaseDC((HWND)0x0,local_10);
  }
  return;
}

