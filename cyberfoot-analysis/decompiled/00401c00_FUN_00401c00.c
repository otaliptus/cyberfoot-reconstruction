// Address: 00401c00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00401c00(void)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  
  if (DAT_0066c5c4 == '\0') {
    return;
  }
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  if (DAT_0066c04d != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0066c5cc);
  }
  DAT_0066c5c4 = 0;
  LocalFree(DAT_0066c624);
  DAT_0066c624 = (HLOCAL)0x0;
  for (puVar1 = DAT_0066c5ec; (undefined4 **)puVar1 != &DAT_0066c5ec; puVar1 = (undefined4 *)*puVar1
      ) {
    VirtualFree((LPVOID)puVar1[2],0,0x8000);
  }
  FUN_00401500(&DAT_0066c5ec);
  FUN_00401500(&DAT_0066c5fc);
  FUN_00401500(&DAT_0066c628);
  puVar1 = DAT_0066c5e4;
  while (puVar1 != (undefined4 *)0x0) {
    DAT_0066c5e4 = (undefined4 *)*puVar1;
    LocalFree(puVar1);
    puVar1 = DAT_0066c5e4;
  }
  DAT_0066c5e4 = puVar1;
  *in_FS_OFFSET = uStack_14;
  if (DAT_0066c04d != '\0') {
    uStack_14 = 0x401ccb;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0066c5cc);
  }
  uStack_14 = 0x401cd5;
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_0066c5cc);
  return;
}

