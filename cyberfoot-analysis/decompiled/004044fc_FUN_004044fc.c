// Address: 004044fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004044fc(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  if (DAT_0066c640 != (int *)0x0) {
    iVar1 = *DAT_0066c640;
    iVar4 = 0;
    iVar2 = DAT_0066c640[1];
    puStack_18 = &LAB_00404542;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    if (0 < iVar1) {
      do {
        pcVar3 = *(code **)(iVar2 + iVar4 * 8);
        iVar4 = iVar4 + 1;
        DAT_0066c644 = iVar4;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)();
        }
      } while (iVar4 < iVar1);
    }
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}

