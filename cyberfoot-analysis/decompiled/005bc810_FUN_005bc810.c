// Address: 005bc810
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bc810(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_c;
  int local_8;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  puStack_10 = (undefined1 *)0x5bc82c;
  local_8 = param_1;
  local_c = FUN_0042cb20(PTR_LAB_005bbdc4,1);
  puStack_14 = &LAB_005bc87e;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_004068c4(local_c + 0x28,*(undefined4 *)(local_8 + 0xc),&DAT_005bc88c);
  FUN_0042d610(*(undefined4 *)(local_8 + 0x1c),local_c);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005bc885;
  *(undefined1 *)(local_8 + 0x18) = 0;
  puStack_14 = (undefined1 *)0x5bc87d;
  FUN_00403a84(local_c,uStack_18,puVar1);
  return;
}

