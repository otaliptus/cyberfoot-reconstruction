// Address: 006462ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006462ac(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_f0;
  undefined1 *puStack_ec;
  undefined1 *puStack_e8;
  undefined1 local_d8 [52];
  undefined1 local_a4 [48];
  undefined4 local_74;
  undefined1 local_70 [52];
  undefined1 local_3c [48];
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_e8 = &stack0xfffffffc;
  local_74 = 0;
  local_c = 0;
  local_8 = 0;
  puStack_ec = &LAB_0064648a;
  uStack_f0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_f0;
  FUN_004048d4(&local_8);
  if (param_1 < *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40)) {
    FUN_004030d4(local_3c,&DAT_00646498);
    FUN_004030a4(local_3c,*(int *)PTR_DAT_0066af70 + 0x1a + param_1 * 0x2f8,0x2c);
    FUN_004030d4(local_70,local_3c);
    FUN_004030a4(local_70,&DAT_006464a8,0x30);
    FUN_00404b48(&local_c,local_70);
    cVar2 = FUN_0040a43c(local_c);
    if (cVar2 != '\0') {
      FUN_004030d4(local_3c,&DAT_00646498);
      FUN_004030a4(local_3c,*(int *)PTR_DAT_0066af70 + 0x1a + param_1 * 0x2f8,0x2c);
      FUN_004030d4(local_70,local_3c);
      FUN_004030a4(local_70,&DAT_006464a8,0x30);
      FUN_00404b48(&local_8,local_70);
    }
  }
  else {
    FUN_004030d4(local_a4,&DAT_006464b0);
    FUN_004030a4(local_a4,*(int *)PTR_DAT_0066af70 + 0x1a + param_1 * 0x2f8,0x2f);
    FUN_004030d4(local_d8,local_a4);
    FUN_004030a4(local_d8,&DAT_006464a8,0x33);
    FUN_00404b48(&local_74,local_d8);
    cVar2 = FUN_0040a43c(local_74);
    if (cVar2 != '\0') {
      FUN_004030d4(local_a4,&DAT_006464b0);
      FUN_004030a4(local_a4,*(int *)PTR_DAT_0066af70 + 0x1a + param_1 * 0x2f8,0x2f);
      FUN_004030d4(local_d8,local_a4);
      FUN_004030a4(local_d8,&DAT_006464a8,0x33);
      FUN_00404b48(&local_8,local_d8);
    }
  }
  FUN_00404928(param_2,local_8);
  puVar1 = puStack_e8;
  *in_FS_OFFSET = uStack_f0;
  puStack_e8 = &LAB_00646491;
  puStack_ec = (undefined1 *)0x64647c;
  FUN_004048d4(&local_74,uStack_f0,puVar1);
  puStack_ec = (undefined1 *)0x646489;
  FUN_004048f8(&local_c,2);
  return;
}

