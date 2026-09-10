// Address: 00454a20
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00454a20(int param_1)

{
  HWND pHVar1;
  uint dwNewLong;
  uint dwNewLong_00;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puVar6 = &stack0xfffffffc;
  puStack_1c = (undefined1 *)0x454a34;
  FUN_00454f14(param_1);
  puStack_20 = &LAB_00454b0b;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_0046cabc(param_1);
  iVar5 = -0x10;
  pHVar1 = (HWND)FUN_0046cae0(param_1);
  dwNewLong = GetWindowLongA(pHVar1,iVar5);
  dwNewLong_00 = dwNewLong & 0xefffffff;
  iVar5 = -0x10;
  pHVar1 = (HWND)FUN_0046cae0(param_1);
  SetWindowLongA(pHVar1,iVar5,dwNewLong_00);
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd0;
  iVar2 = FUN_00454f60(param_1);
  iVar5 = *(int *)(*(int *)(param_1 + 0x218) + 8);
  if (-1 < iVar5 + -1) {
    iVar3 = 0;
    do {
      if (iVar3 < iVar2) {
        FUN_00454634(param_1,0x442,iVar3,iVar3);
      }
      else {
        FUN_00454448(param_1,0x415,iVar3,iVar3);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *in_FS_OFFSET = uVar4;
  iVar5 = -0x10;
  pHVar1 = (HWND)FUN_0046cae0(param_1,uVar4,puVar6);
  SetWindowLongA(pHVar1,iVar5,dwNewLong);
  return;
}

