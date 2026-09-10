// Address: 0042f084
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042f084(int param_1)

{
  HDC hdc;
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (*(int *)(param_1 + 4) != 0) {
    puStack_10 = (undefined1 *)0x42f0a1;
    FUN_0042b03c(param_1);
    puStack_14 = &LAB_0042f118;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    if (*(HGDIOBJ *)(param_1 + 0x5c) != (HGDIOBJ)0x0) {
      puStack_10 = &stack0xfffffffc;
      SelectObject(*(HDC *)(param_1 + 4),*(HGDIOBJ *)(param_1 + 0x5c));
    }
    if (*(HPALETTE *)(param_1 + 0x60) != (HPALETTE)0x0) {
      SelectPalette(*(HDC *)(param_1 + 4),*(HPALETTE *)(param_1 + 0x60),-1);
    }
    hdc = *(HDC *)(param_1 + 4);
    FUN_0042b628(param_1,0);
    DeleteDC(hdc);
    FUN_0041e430(DAT_00662958,param_1);
    puVar1 = puStack_10;
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x42f11f;
    puStack_14 = (undefined1 *)0x42f117;
    FUN_0042b47c(param_1,uStack_18,puVar1);
    return;
  }
  return;
}

