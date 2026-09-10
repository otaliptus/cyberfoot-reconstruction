// Address: 0040449c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040449c(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  iVar3 = DAT_0066c644;
  puStack_14 = &stack0xfffffffc;
  if (DAT_0066c640 != 0) {
    iVar1 = *(int *)(DAT_0066c640 + 4);
    puStack_18 = &LAB_004044e2;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    while (0 < iVar3) {
      iVar3 = iVar3 + -1;
      pcVar2 = *(code **)(iVar1 + 4 + iVar3 * 8);
      DAT_0066c644 = iVar3;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)();
      }
    }
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}

