// Address: 00404474
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00404474(void)

{
  int *piVar1;
  int *in_FS_OFFSET;
  
  if (DAT_0066c63c != (int *)0x0) {
    piVar1 = (int *)*in_FS_OFFSET;
    if (DAT_0066c63c == piVar1) {
      *in_FS_OFFSET = *DAT_0066c63c;
      return;
    }
    for (; piVar1 != (int *)0xffffffff; piVar1 = (int *)*piVar1) {
      if ((int *)*piVar1 == DAT_0066c63c) {
        *piVar1 = *DAT_0066c63c;
        return;
      }
    }
  }
  return;
}

