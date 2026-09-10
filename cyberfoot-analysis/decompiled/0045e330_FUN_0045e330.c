// Address: 0045e330
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045e330(void)

{
  undefined1 *puVar1;
  HWND pHVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  UINT UVar3;
  int *wParam;
  WPARAM WVar4;
  int *lParam;
  LPARAM LVar5;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = 0;
  puStack_1c = &LAB_0045e3ec;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00466208(*(undefined4 *)(in_stack_00000004 + -4),&local_10);
  lParam = &local_c;
  wParam = &local_8;
  UVar3 = 0x140;
  pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(in_stack_00000004 + -4));
  SendMessageA(pHVar2,UVar3,(WPARAM)wParam,(LPARAM)lParam);
  FUN_00404e44(&local_10,local_8 + 1,local_c - local_8);
  LVar5 = 0;
  WVar4 = 0xffffffff;
  UVar3 = 0x14e;
  pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(in_stack_00000004 + -4));
  SendMessageA(pHVar2,UVar3,WVar4,LVar5);
  FUN_00466238(*(undefined4 *)(in_stack_00000004 + -4),local_10);
  LVar5 = FUN_00408100((undefined2)local_8,(undefined2)local_8);
  WVar4 = 0;
  UVar3 = 0x142;
  pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(in_stack_00000004 + -4));
  SendMessageA(pHVar2,UVar3,WVar4,LVar5);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0045e3f3;
  puStack_1c = (undefined1 *)0x45e3eb;
  FUN_004048d4(&local_10,uStack_20,puVar1);
  return;
}

