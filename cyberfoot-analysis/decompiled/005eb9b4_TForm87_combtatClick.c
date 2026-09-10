// Address: 005eb9b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm87_combtatClick(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_005eba1e;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x3c0));
  FUN_005e5264(param_1,iVar2 + 1);
  FUN_00466208(*(undefined4 *)(param_1 + 0x3c0),&local_8);
  if (local_8 != 0) {
    iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x3c0));
    FUN_005e82a0(param_1,iVar2 + 1);
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005eba25;
  puStack_14 = (undefined1 *)0x5eba1d;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

