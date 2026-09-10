// Address: 00401b3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00401b3c(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0066c5cc);
  if (DAT_0066c04d != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0066c5cc);
  }
  FUN_00401500(&DAT_0066c5ec);
  FUN_00401500(&DAT_0066c5fc);
  FUN_00401500(&DAT_0066c628);
  DAT_0066c624 = LocalAlloc(0,0xff8);
  if (DAT_0066c624 != (HLOCAL)0x0) {
    iVar1 = 3;
    do {
      *(undefined4 *)((int)DAT_0066c624 + iVar1 * 4 + -0xc) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x401);
    DAT_0066c610 = &DAT_0066c60c;
    DAT_0066c60c = &DAT_0066c60c;
    DAT_0066c618 = &DAT_0066c60c;
    DAT_0066c5c4 = 1;
  }
  *in_FS_OFFSET = uStack_10;
  if (DAT_0066c04d != '\0') {
    uStack_10 = 0x401bf1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0066c5cc);
  }
  return;
}

