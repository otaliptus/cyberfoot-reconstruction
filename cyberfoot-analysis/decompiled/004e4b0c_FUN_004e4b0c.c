// Address: 004e4b0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004e4b0c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_004e4b4f;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (DAT_0067b1c0 != 0) {
    iVar1 = (*DAT_0067af14)();
    if (iVar1 != 0) {
      iVar1 = (*DAT_0067af10)();
      if (iVar1 != 0) {
        uVar2 = 1;
        goto LAB_004e4b43;
      }
    }
  }
  uVar2 = 0;
LAB_004e4b43:
  *in_FS_OFFSET = uStack_1c;
  return uVar2;
}

