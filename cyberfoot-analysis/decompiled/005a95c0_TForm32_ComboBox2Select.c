// Address: 005a95c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm32_ComboBox2Select(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_005a9628;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x394));
  FUN_00409dd8(uVar2,&local_8);
  FUN_0064a178("opcoes","opsalvar",local_8);
  uVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x394));
  puVar1 = puStack_10;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0xd0) = uVar2;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005a962f;
  puStack_14 = (undefined1 *)0x5a9627;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

