// Address: 0045696c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045696c(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004569db;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0066cb18 = _DAT_0066cb18 + 1;
  if (_DAT_0066cb18 == 0) {
    puVar1 = &stack0xfffffffc;
    if (DAT_0066cb1c != (HMODULE)0x0) {
      FreeLibrary(DAT_0066cb1c);
      puVar1 = puStack_8;
    }
    puStack_8 = puVar1;
    if (DAT_0066cb20 != (HMODULE)0x0) {
      FreeLibrary(DAT_0066cb20);
    }
    FUN_004056f8(&PTR_PTR_00662cdc,PTR_DAT_00445030);
    FUN_004056f8(&PTR_PTR_00662cd0,PTR_DAT_00445030);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

