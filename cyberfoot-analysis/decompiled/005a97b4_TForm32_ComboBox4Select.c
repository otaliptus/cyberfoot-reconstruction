// Address: 005a97b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm32_ComboBox4Select(int param_1)

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
  puStack_14 = &LAB_005a98db;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x39c));
  if (iVar2 == 0) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 0xcc) = 3000;
  }
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x39c));
  if (iVar2 == 1) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 0xcc) = 2000;
  }
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x39c));
  if (iVar2 == 2) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 0xcc) = 0x5dc;
  }
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x39c));
  if (iVar2 == 3) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 0xcc) = 600;
  }
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x39c));
  if (iVar2 == 4) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 0xcc) = 300;
  }
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x39c));
  if (iVar2 == 5) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 0xcc) = 0x32;
  }
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x39c));
  if (iVar2 == 6) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 0xcc) = 5;
  }
  uVar3 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x39c));
  FUN_00409dd8(uVar3,&local_8);
  FUN_0064a178("opcoes","opnhvelocidade",local_8);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005a98e2;
  puStack_14 = (undefined1 *)0x5a98da;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

