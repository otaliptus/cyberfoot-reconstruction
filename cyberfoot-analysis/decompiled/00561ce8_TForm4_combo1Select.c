// Address: 00561ce8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm4_combo1Select(int param_1)

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
  puStack_14 = &LAB_00561d67;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x34c));
  if (iVar2 == 0x1d) {
    FUN_00466128(*(undefined4 *)(param_1 + 0x31c),1);
  }
  else {
    FUN_00466128(*(undefined4 *)(param_1 + 0x31c),0);
  }
  uVar3 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x34c));
  FUN_00409dd8(uVar3,&local_8);
  FUN_00404928(&DAT_0067b468,local_8);
  puVar1 = puStack_10;
  DAT_0067b454 = 1;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00561d6e;
  puStack_14 = (undefined1 *)0x561d66;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

