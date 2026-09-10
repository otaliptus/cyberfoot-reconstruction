// Address: 005fb9ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm38_Timer5Timer(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x5fb9bf;
  FUN_0043b234(*(undefined4 *)(param_1 + 0x340),0);
  puStack_14 = (undefined1 *)0x5fb9c9;
  FUN_00483bc4(DAT_006d406c);
  if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)PTR_DAT_0066adb0 * 0x2f8) != '\0') ||
     (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)PTR_DAT_0066ae1c * 0x2f8) != '\0')) {
    puStack_18 = &LAB_005fba1b;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    FUN_00483bc4(*(undefined4 *)PTR_DAT_0066b3f4);
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}

