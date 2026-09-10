// Address: 0044b5ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044b5ec(int param_1,WPARAM param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  HWND pHVar2;
  LRESULT LVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 *in_FS_OFFSET;
  UINT UVar7;
  WPARAM WVar8;
  undefined4 *puVar9;
  LPARAM LVar10;
  WPARAM *lParam;
  undefined4 *puVar11;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  WPARAM local_10;
  WPARAM local_c;
  undefined4 local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_24 = 0;
  local_20 = 0;
  local_14 = 0;
  puStack_38 = &LAB_0044b754;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_3;
  if ((int)param_2 < 0) goto LAB_0044b731;
  LVar10 = 0;
  UVar7 = 0xbb;
  WVar8 = param_2;
  pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
  local_10 = SendMessageA(pHVar2,UVar7,WVar8,LVar10);
  if ((int)local_10 < 0) {
    LVar10 = 0;
    param_2 = param_2 - 1;
    UVar7 = 0xbb;
    pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
    WVar8 = SendMessageA(pHVar2,UVar7,param_2,LVar10);
    puVar1 = puStack_34;
    local_10 = WVar8;
    if ((int)WVar8 < 0) goto LAB_0044b731;
    LVar10 = 0;
    UVar7 = 0xc1;
    pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
    LVar3 = SendMessageA(pHVar2,UVar7,WVar8,LVar10);
    puVar1 = puStack_34;
    if (LVar3 == 0) goto LAB_0044b731;
    local_10 = local_10 + LVar3;
    puVar6 = &LAB_0044b76c;
  }
  else {
    puVar6 = &DAT_0044b764;
  }
  local_c = local_10;
  lParam = &local_10;
  WVar8 = 0;
  UVar7 = 0x437;
  pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
  SendMessageA(pHVar2,UVar7,WVar8,(LPARAM)lParam);
  puVar11 = &local_14;
  local_1c = local_8;
  local_18 = 0xb;
  puVar9 = &local_1c;
  FUN_00404adc(&local_20,puVar6);
  FUN_0040ae64(local_20,puVar9,0,puVar11);
  LVar10 = FUN_00404da4(local_14);
  WVar8 = 0;
  UVar7 = 0xc2;
  pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
  SendMessageA(pHVar2,UVar7,WVar8,LVar10);
  iVar4 = (**(code **)(**(int **)(param_1 + 0x10) + 0xd0))();
  iVar5 = FUN_00404ba4(local_14);
  puVar1 = puStack_34;
  if (iVar4 != iVar5 + local_c) {
    FUN_00406d44(PTR_PTR_0066ae00,&local_24);
    FUN_0040e370(PTR_DAT_0041b680,1,local_24);
    FUN_00404250();
    puVar1 = puStack_34;
  }
LAB_0044b731:
  puStack_34 = puVar1;
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0044b75b;
  puStack_38 = (undefined1 *)0x44b74b;
  FUN_004048f8(&local_24,2,puVar1);
  puStack_38 = (undefined1 *)0x44b753;
  FUN_004048d4(&local_14);
  return;
}

