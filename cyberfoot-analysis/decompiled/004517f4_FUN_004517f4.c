// Address: 004517f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004517f4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x451809;
  local_8 = param_2;
  FUN_00404d94(param_2);
  puStack_18 = &LAB_0045184d;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  uVar2 = FUN_0044e868(*(undefined4 *)(param_1 + 0x22c));
  FUN_0044e308(uVar2,local_8);
  FUN_0044e3b8(uVar2,param_3);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00451854;
  puStack_18 = (undefined1 *)0x45184c;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

