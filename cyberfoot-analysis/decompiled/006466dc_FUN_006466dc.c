// Address: 006466dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006466dc(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_f8;
  undefined1 *puStack_f4;
  undefined1 *puStack_f0;
  undefined1 local_e0 [56];
  undefined1 local_a8 [52];
  undefined4 local_74;
  undefined1 local_70 [52];
  undefined1 local_3c [48];
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_f0 = &stack0xfffffffc;
  local_74 = 0;
  local_c = 0;
  local_8 = 0;
  puStack_f4 = &LAB_006468ba;
  uStack_f8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_f8;
  FUN_004048d4(&local_8);
  if (param_1 < *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40)) {
    FUN_004030d4(local_3c,&DAT_006468c8);
    FUN_004030a4(local_3c,*(int *)PTR_DAT_0066af70 + 0x1a + param_1 * 0x2f8,0x2d);
    FUN_004030d4(local_70,local_3c);
    FUN_004030a4(local_70,&DAT_006468d8,0x31);
    FUN_00404b48(&local_c,local_70);
    cVar2 = FUN_0040a43c(local_c);
    if (cVar2 != '\0') {
      FUN_004030d4(local_3c,&DAT_006468c8);
      FUN_004030a4(local_3c,*(int *)PTR_DAT_0066af70 + 0x1a + param_1 * 0x2f8,0x2d);
      FUN_004030d4(local_70,local_3c);
      FUN_004030a4(local_70,&DAT_006468d8,0x31);
      FUN_00404b48(&local_8,local_70);
    }
  }
  else {
    FUN_004030d4(local_a8,&DAT_006468e0);
    FUN_004030a4(local_a8,*(int *)PTR_DAT_0066af70 + 0x1a + param_1 * 0x2f8,0x30);
    FUN_004030d4(local_e0,local_a8);
    FUN_004030a4(local_e0,&DAT_006468d8,0x34);
    FUN_00404b48(&local_74,local_e0);
    cVar2 = FUN_0040a43c(local_74);
    if (cVar2 != '\0') {
      FUN_004030d4(local_a8,&DAT_006468e0);
      FUN_004030a4(local_a8,*(int *)PTR_DAT_0066af70 + 0x1a + param_1 * 0x2f8,0x30);
      FUN_004030d4(local_e0,local_a8);
      FUN_004030a4(local_e0,&DAT_006468d8,0x34);
      FUN_00404b48(&local_8,local_e0);
    }
  }
  FUN_00404928(param_2,local_8);
  puVar1 = puStack_f0;
  *in_FS_OFFSET = uStack_f8;
  puStack_f0 = &LAB_006468c1;
  puStack_f4 = (undefined1 *)0x6468ac;
  FUN_004048d4(&local_74,uStack_f8,puVar1);
  puStack_f4 = (undefined1 *)0x6468b9;
  FUN_004048f8(&local_c,2);
  return;
}

