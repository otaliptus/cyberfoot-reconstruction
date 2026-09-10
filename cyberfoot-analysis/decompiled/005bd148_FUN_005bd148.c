// Address: 005bd148
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005bd148(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_005bd19d;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_006d2b4c = _DAT_006d2b4c + 1;
  if (_DAT_006d2b4c == 0) {
    puVar1 = &stack0xfffffffc;
    if (DAT_006d2b50 != (HWND)0x0) {
      SendMessageA(DAT_006d2b50,0x10,0,0);
      puVar1 = puStack_8;
    }
    puStack_8 = puVar1;
    if (DAT_006d2b54 != (HMODULE)0x0) {
      FreeLibrary(DAT_006d2b54);
    }
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

