// Address: 004ddfa0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ddfa0(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  HWND pHVar3;
  LONG LVar4;
  undefined4 *in_FS_OFFSET;
  int iVar5;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_004de04c;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uVar2 = FUN_0046cae0(*(undefined4 *)(param_1 + 0x3c));
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  iVar5 = -4;
  pHVar3 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x3c));
  LVar4 = GetWindowLongW(pHVar3,iVar5);
  *(LONG *)(param_1 + 0x44) = LVar4;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x174);
  LVar4 = *(LONG *)(param_1 + 0x34);
  iVar5 = -4;
  pHVar3 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x3c));
  SetWindowLongW(pHVar3,iVar5,LVar4);
  *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x174) = *(undefined4 *)(param_1 + 0x38);
  FUN_004ddf70(param_1);
  FUN_00405128(&local_c,param_2);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  FUN_004dd690(uVar2,local_c,&local_8);
  FUN_004dd894(uVar2,local_8);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004de053;
  puStack_20 = (undefined1 *)0x4de04b;
  FUN_00405008(&local_c,2,puVar1);
  return;
}

