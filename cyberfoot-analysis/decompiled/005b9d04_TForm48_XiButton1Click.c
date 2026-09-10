// Address: 005b9d04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm48_XiButton1Click(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_005b9d89;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&local_8);
  uVar2 = local_8;
  uVar3 = FUN_0054c0f0(*(undefined4 *)(param_1 + 800));
  FUN_00647f98(*(undefined4 *)PTR_DAT_0066b3c4,uVar2,uVar3);
  FUN_00652988(*(undefined4 *)(PTR_DAT_0066ac78 + 8));
  FUN_006380e8(*(undefined4 *)PTR_DAT_0066b054);
  FUN_00483bc4(DAT_006d2b20);
  FUN_00483bc4(DAT_006d2b20);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005b9d90;
  puStack_14 = (undefined1 *)0x5b9d88;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

