// Address: 005aa1fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm32_combo62Select(int param_1)

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
  puStack_14 = &LAB_005aa276;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x3bc));
  if (iVar2 == 0) {
    PTR_DAT_0066ac78[0x178] = 1;
  }
  else {
    PTR_DAT_0066ac78[0x178] = 0;
  }
  uVar3 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x3bc));
  FUN_00409dd8(uVar3,&local_8);
  FUN_0064a178("opcoes","ver44",local_8);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005aa27d;
  puStack_14 = (undefined1 *)0x5aa275;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

