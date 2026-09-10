// Address: 005a9658
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm32_ComboBox1Select(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_005a977f;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x398));
  if (iVar2 == 0) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 3000;
  }
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x398));
  if (iVar2 == 1) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 2000;
  }
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x398));
  if (iVar2 == 2) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 0x5dc;
  }
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x398));
  if (iVar2 == 3) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 600;
  }
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x398));
  if (iVar2 == 4) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 300;
  }
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x398));
  if (iVar2 == 5) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 100;
  }
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x398));
  if (iVar2 == 6) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 0x32;
  }
  uVar3 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x398));
  FUN_00409dd8(uVar3,&local_8);
  FUN_0064a178("opcoes","opvelocidade",local_8);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005a9786;
  puStack_14 = (undefined1 *)0x5a977e;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

