// Address: 0042f124
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042f124(int param_1)

{
  undefined1 *puVar1;
  HDC hdc;
  HGDIOBJ pvVar2;
  HPALETTE pHVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    puStack_14 = (undefined1 *)0x42f142;
    FUN_0042b03c(param_1);
    puStack_18 = &LAB_0042f203;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    FUN_0043052c(*(undefined4 *)(param_1 + 0x58));
    FUN_0042efa0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x58) + 0x28) + 8));
    FUN_0043062c(*(undefined4 *)(param_1 + 0x58));
    hdc = CreateCompatibleDC((HDC)0x0);
    pvVar2 = *(HGDIOBJ *)(*(int *)(*(int *)(param_1 + 0x58) + 0x28) + 8);
    if (pvVar2 == (HGDIOBJ)0x0) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    else {
      pvVar2 = SelectObject(hdc,pvVar2);
      *(HGDIOBJ *)(param_1 + 0x5c) = pvVar2;
    }
    pHVar3 = *(HPALETTE *)(*(int *)(*(int *)(param_1 + 0x58) + 0x28) + 0x10);
    if (pHVar3 == (HPALETTE)0x0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      pHVar3 = SelectPalette(hdc,pHVar3,-1);
      *(HPALETTE *)(param_1 + 0x60) = pHVar3;
      RealizePalette(hdc);
    }
    FUN_0042b628(param_1,hdc);
    FUN_0041e394(DAT_00662958,param_1);
    puVar1 = puStack_14;
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x42f20a;
    puStack_18 = (undefined1 *)0x42f202;
    FUN_0042b47c(param_1,uStack_1c,puVar1);
    return;
  }
  return;
}

