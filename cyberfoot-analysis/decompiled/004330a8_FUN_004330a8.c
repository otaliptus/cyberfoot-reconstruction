// Address: 004330a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004330a8(byte param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  LPCSTR lpProcName;
  FARPROC pFVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = (undefined1 *)0x4330be;
  local_8 = param_3;
  FUN_00404d94(param_3);
  puStack_1c = &LAB_00433167;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  if ((&DAT_0066c930)[param_1] == '\0') {
    if (DAT_0066c92c == (HMODULE)0x0) {
      pFVar2 = (FARPROC)0x0;
      puStack_18 = &stack0xfffffffc;
    }
    else {
      puStack_18 = &stack0xfffffffc;
      if (((param_1 == 0) && (puStack_18 = &stack0xfffffffc, DAT_0066c938 == '\0')) &&
         (puStack_18 = &stack0xfffffffc,
         DAT_0066c918 = FUN_004330a8(4,DAT_0066c918,"GetMonitorInfoA"), DAT_0066c938 == '\0')) {
        FUN_004048d4(&local_8);
      }
      lpProcName = (LPCSTR)FUN_00404da4(local_8);
      pFVar2 = GetProcAddress(DAT_0066c92c,lpProcName);
    }
    if ((pFVar2 != (FARPROC)0x0) && (param_1 != 0)) {
      DAT_0066c938 = '\x01';
    }
    (&DAT_0066c930)[param_1] = 1;
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0043316e;
  puStack_1c = (undefined1 *)0x433166;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

