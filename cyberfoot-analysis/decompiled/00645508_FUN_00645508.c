// Address: 00645508
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00645508(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_ec;
  undefined1 *puStack_e8;
  undefined1 *puStack_e4;
  undefined1 local_d4 [52];
  undefined1 local_a0 [48];
  undefined4 local_70;
  undefined1 local_6c [52];
  undefined1 local_38 [48];
  undefined4 local_8;
  
  puStack_e4 = &stack0xfffffffc;
  local_70 = 0;
  local_8 = 0;
  puStack_e8 = &LAB_006456db;
  uStack_ec = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_ec;
  if (param_1 < *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40)) {
    puStack_e4 = &stack0xfffffffc;
    FUN_004030d4(local_38,&DAT_006456ec);
    FUN_004030a4(local_38,*(int *)PTR_DAT_0066af70 + 0x1a + param_1 * 0x2f8,0x2c);
    FUN_004030d4(local_6c,local_38);
    FUN_004030a4(local_6c,&DAT_006456fc,0x30);
    FUN_00404b48(&local_8,local_6c);
    cVar2 = FUN_0040a43c(local_8);
    if (cVar2 == '\0') {
      FUN_004048d4(param_2);
    }
    else {
      FUN_004030d4(local_38,&DAT_006456ec);
      FUN_004030a4(local_38,*(int *)PTR_DAT_0066af70 + 0x1a + param_1 * 0x2f8,0x2c);
      FUN_004030d4(local_6c,local_38);
      FUN_004030a4(local_6c,&DAT_006456fc,0x30);
      FUN_00404b48(param_2,local_6c);
    }
  }
  else {
    FUN_004030d4(local_a0,&DAT_00645704);
    FUN_004030a4(local_a0,*(int *)PTR_DAT_0066af70 + 0x1a + param_1 * 0x2f8,0x2d);
    FUN_004030d4(local_d4,local_a0);
    FUN_004030a4(local_d4,&DAT_006456fc,0x31);
    FUN_00404b48(&local_70,local_d4);
    cVar2 = FUN_0040a43c(local_70);
    if (cVar2 == '\0') {
      FUN_004048d4(param_2);
    }
    else {
      FUN_004030d4(local_a0,&DAT_00645704);
      FUN_004030a4(local_a0,*(int *)PTR_DAT_0066af70 + 0x1a + param_1 * 0x2f8,0x2d);
      FUN_004030d4(local_d4,local_a0);
      FUN_004030a4(local_d4,&DAT_006456fc,0x31);
      FUN_00404b48(param_2,local_d4);
    }
  }
  puVar1 = puStack_e4;
  *in_FS_OFFSET = uStack_ec;
  puStack_e4 = &LAB_006456e2;
  puStack_e8 = (undefined1 *)0x6456d2;
  FUN_004048d4(&local_70,uStack_ec,puVar1);
  puStack_e8 = (undefined1 *)0x6456da;
  FUN_004048d4(&local_8);
  return;
}

