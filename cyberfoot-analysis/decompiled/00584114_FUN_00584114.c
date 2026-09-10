// Address: 00584114
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00584114(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = (undefined1 *)0x584126;
  local_8 = param_2;
  FUN_00404d94(param_2);
  bVar2 = true;
  puStack_14 = &LAB_0058416f;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00404cf0(*(undefined4 *)(param_1 + 0x270),local_8);
  if (!bVar2) {
    FUN_00404928(param_1 + 0x270,local_8);
    FUN_00466754(param_1);
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00584176;
  puStack_14 = (undefined1 *)0x58416e;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

