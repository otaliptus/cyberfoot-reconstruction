// Address: 0045c83c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045c83c(int param_1,WPARAM param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  HWND pHVar2;
  WPARAM WVar3;
  LRESULT LVar4;
  undefined4 *in_FS_OFFSET;
  UINT UVar5;
  WPARAM WVar6;
  LPARAM LVar7;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_0045c927;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = &stack0xfffffffc;
  local_8 = param_3;
  if ((int)param_2 < 0) goto LAB_0045c911;
  LVar7 = 0;
  UVar5 = 0xbb;
  WVar3 = param_2;
  pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
  WVar3 = SendMessageA(pHVar2,UVar5,WVar3,LVar7);
  if ((int)WVar3 < 0) {
    LVar7 = 0;
    param_2 = param_2 - 1;
    UVar5 = 0xbb;
    pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
    WVar3 = SendMessageA(pHVar2,UVar5,param_2,LVar7);
    puVar1 = puStack_1c;
    if ((int)WVar3 < 0) goto LAB_0045c911;
    LVar7 = 0;
    UVar5 = 0xc1;
    WVar6 = WVar3;
    pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
    LVar4 = SendMessageA(pHVar2,UVar5,WVar6,LVar7);
    puVar1 = puStack_1c;
    if (LVar4 == 0) goto LAB_0045c911;
    WVar3 = WVar3 + LVar4;
    FUN_00404bf0(&local_c,&LAB_0045c940,local_8);
  }
  else {
    FUN_00404bf0(&local_c,local_8,&LAB_0045c940);
  }
  UVar5 = 0xb1;
  WVar6 = WVar3;
  pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
  SendMessageA(pHVar2,UVar5,WVar3,WVar6);
  LVar7 = FUN_00404da4(local_c);
  WVar3 = 0;
  UVar5 = 0xc2;
  pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
  SendMessageA(pHVar2,UVar5,WVar3,LVar7);
  puVar1 = puStack_1c;
LAB_0045c911:
  puStack_1c = puVar1;
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0045c92e;
  puStack_20 = (undefined1 *)0x45c926;
  FUN_004048d4(&local_c,uStack_24,puVar1);
  return;
}

