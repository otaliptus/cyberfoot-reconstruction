// Address: 00600f40
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm88_FormClose(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  puStack_1c = &LAB_00600f94;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00403a84(DAT_006d4128);
  FUN_00403a84(DAT_006d412c);
  FUN_00403a84(DAT_006d4130);
  FUN_00403a84(DAT_006d4134);
  FUN_00403a84(DAT_006d4138);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  if ((*PTR_DAT_0066af9c == '\0') && (*(int *)PTR_DAT_0066af54 != 1)) {
    puStack_18 = (undefined1 *)0x600fc0;
    FUN_0043b234(*(undefined4 *)PTR_DAT_0066b278,1,puVar1);
  }
  *param_3 = 2;
  return;
}

