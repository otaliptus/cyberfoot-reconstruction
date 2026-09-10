// Address: 0055e5d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm7_combo1Change(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_0055e648;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x354));
  FUN_00409dd8(uVar2,&local_8);
  FUN_00404928(&DAT_0067b3fc,local_8);
  iVar3 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x354));
  if (iVar3 == 0x1d) {
    FUN_00466128(*(undefined4 *)(param_1 + 0x30c),1);
  }
  else {
    FUN_00466128(*(undefined4 *)(param_1 + 0x30c),0);
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0055e64f;
  puStack_14 = (undefined1 *)0x55e647;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

