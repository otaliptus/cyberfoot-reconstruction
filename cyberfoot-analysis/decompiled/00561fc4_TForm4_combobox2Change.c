// Address: 00561fc4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm4_combobox2Change(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_00562021;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x34c));
  FUN_00409dd8(*(undefined4 *)(PTR_DAT_0066b2bc + iVar2 * 8 + 4),&local_8);
  FUN_00404928(&DAT_0067b468,local_8);
  puVar1 = puStack_10;
  DAT_0067b454 = 1;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00562028;
  puStack_14 = (undefined1 *)0x562020;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

