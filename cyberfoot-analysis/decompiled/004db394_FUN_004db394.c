// Address: 004db394
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004db394(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_28 = &LAB_004db448;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_004d4548(0,&local_c);
  FUN_004d36b0(local_c,&local_8);
  iVar2 = FUN_004d39a0(L"W3WP.",local_8);
  if (iVar2 != 1) {
    FUN_004d4548(0,&local_14);
    FUN_004d36b0(local_14,&local_10);
    iVar2 = FUN_004d39a0(L"DLLHOST.",local_10);
    if (iVar2 != 1) {
      FUN_004d4548(0,&local_1c);
      FUN_004d36b0(local_1c,&local_18);
      FUN_004d39a0(L"miranda32.exe",local_18);
    }
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004db44f;
  puStack_28 = (undefined1 *)0x4db447;
  FUN_00405008(&local_1c,6,puVar1);
  return;
}

