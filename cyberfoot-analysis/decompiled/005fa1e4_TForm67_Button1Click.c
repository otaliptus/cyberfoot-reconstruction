// Address: 005fa1e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm67_Button1Click(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  
  puStack_c = &stack0xfffffffc;
  puStack_10 = &LAB_005fa24a;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  FUN_005fad94(param_1,*(undefined4 *)
                        (*(int *)PTR_DAT_0066af70 + 0x3c +
                        *(int *)(PTR_DAT_0066ac78 + 0x4bc) * 0x2f8),
               *(int *)(PTR_DAT_0066ac78 + 0x4bc));
  *in_FS_OFFSET = uStack_14;
  return;
}

