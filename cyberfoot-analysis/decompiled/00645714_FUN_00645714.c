// Address: 00645714
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00645714(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_88;
  undefined1 *puStack_84;
  undefined1 *puStack_80;
  undefined4 local_70;
  undefined1 local_6c [52];
  undefined1 local_38 [48];
  undefined4 local_8;
  
  puStack_80 = &stack0xfffffffc;
  local_70 = 0;
  local_8 = 0;
  puStack_84 = &LAB_00645898;
  uStack_88 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_88;
  FUN_004030d4(local_38,&DAT_006458a8);
  FUN_004030a4(local_38,*(int *)PTR_DAT_0066af70 + 0x1a + param_1 * 0x2f8,0x2d);
  FUN_004030d4(local_6c,local_38);
  FUN_004030a4(local_6c,&DAT_006458b8,0x31);
  FUN_00404b48(&local_8,local_6c);
  cVar2 = FUN_0040a43c(local_8);
  if (cVar2 == '\0') {
    FUN_004030d4(local_38,&DAT_006458a8);
    FUN_004030a4(local_38,*(int *)PTR_DAT_0066af70 + 0x1a + param_1 * 0x2f8,0x2d);
    FUN_004030d4(local_6c,local_38);
    FUN_004030a4(local_6c,&DAT_006458c0,0x31);
    FUN_00404b48(&local_70,local_6c);
    cVar2 = FUN_0040a43c(local_70);
    if (cVar2 == '\0') {
      FUN_004048d4(param_2);
    }
    else {
      FUN_004030d4(local_38,&DAT_006458a8);
      FUN_004030a4(local_38,*(int *)PTR_DAT_0066af70 + 0x1a + param_1 * 0x2f8,0x2d);
      FUN_004030d4(local_6c,local_38);
      FUN_004030a4(local_6c,&DAT_006458c0,0x31);
      FUN_00404b48(param_2,local_6c);
    }
  }
  else {
    FUN_004030d4(local_38,&DAT_006458a8);
    FUN_004030a4(local_38,*(int *)PTR_DAT_0066af70 + 0x1a + param_1 * 0x2f8,0x2d);
    FUN_004030d4(local_6c,local_38);
    FUN_004030a4(local_6c,&DAT_006458b8,0x31);
    FUN_00404b48(param_2,local_6c);
  }
  puVar1 = puStack_80;
  *in_FS_OFFSET = uStack_88;
  puStack_80 = &LAB_0064589f;
  puStack_84 = (undefined1 *)0x64588f;
  FUN_004048d4(&local_70,uStack_88,puVar1);
  puStack_84 = (undefined1 *)0x645897;
  FUN_004048d4(&local_8);
  return;
}

