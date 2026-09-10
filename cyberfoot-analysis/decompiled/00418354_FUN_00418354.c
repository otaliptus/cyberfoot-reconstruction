// Address: 00418354
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00418354(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0066c828);
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  iVar1 = FUN_00405eec(DAT_0066c824);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      if (*(int *)(DAT_0066c824 + iVar1 * 4) != DAT_00662478) {
        FUN_00403a84();
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  *in_FS_OFFSET = uStackY_18;
  uStackY_18 = 0x4183b4;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0066c828);
  return;
}

