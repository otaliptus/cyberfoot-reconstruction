// Address: 00454924
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00454924(int param_1,int param_2)

{
  HWND pHVar1;
  uint dwNewLong;
  uint dwNewLong_00;
  int *in_FS_OFFSET;
  undefined1 *puVar2;
  int iVar3;
  int iStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  if (((*(byte *)(param_1 + 0x1c) & 1) == 0) && (*(int *)(param_1 + 0x25c) < 1)) {
    puStack_14 = (undefined1 *)0x454955;
    FUN_00454f14(param_1);
    puStack_18 = &LAB_00454a12;
    iStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_1c;
    puStack_14 = &stack0xfffffffc;
    FUN_0046cabc(param_1);
    iVar3 = -0x10;
    pHVar1 = (HWND)FUN_0046cae0(param_1);
    dwNewLong = GetWindowLongA(pHVar1,iVar3);
    dwNewLong_00 = dwNewLong & 0xefffffff;
    iVar3 = -0x10;
    pHVar1 = (HWND)FUN_0046cae0(param_1);
    SetWindowLongA(pHVar1,iVar3,dwNewLong_00);
    puVar2 = &LAB_004549f5;
    *in_FS_OFFSET = (int)&stack0xffffffd8;
    iVar3 = FUN_00454f60(param_1);
    if (param_2 < iVar3) {
      FUN_00454634(param_1,0x442,param_2);
    }
    else {
      FUN_00454448(param_1,0x415,param_2);
    }
    *in_FS_OFFSET = param_2;
    iVar3 = -0x10;
    pHVar1 = (HWND)FUN_0046cae0(param_1,param_2,puVar2);
    SetWindowLongA(pHVar1,iVar3,dwNewLong);
    return;
  }
  return;
}

