// Address: 005bc11c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bc11c(int param_1,int param_2)

{
  undefined1 *puVar1;
  int *in_FS_OFFSET;
  int iStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_8;
  
  puStack_10 = (undefined1 *)0x5bc12e;
  local_8 = param_2;
  FUN_004068f4(param_2);
  puStack_14 = &LAB_005bc184;
  iStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_18;
  puStack_10 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0xc) != 0) {
    iStack_1c = 0x5bc149;
    puStack_10 = &stack0xfffffffc;
    FUN_005bc1a0(param_1);
  }
  if (local_8 != 0) {
    iStack_1c = param_1 + 0x10;
    FUN_004aca54(local_8,&DAT_005bc190,*(undefined4 *)(param_1 + 0x14));
  }
  FUN_00406898(param_1 + 0xc,local_8);
  puVar1 = puStack_14;
  *in_FS_OFFSET = iStack_1c;
  puStack_14 = &LAB_005bc18b;
  iStack_18 = 0x5bc183;
  FUN_00406880(&local_8,iStack_1c,puVar1);
  return;
}

