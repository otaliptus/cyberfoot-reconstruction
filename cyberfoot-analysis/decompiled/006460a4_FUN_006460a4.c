// Address: 006460a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006460a4(int param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined *puStackY_44;
  undefined *puVar1;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = (undefined *)0x0;
  puStack_2c = &LAB_006461fa;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  FUN_004048d4(&local_8);
  if (param_1 < *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40)) {
    if (param_2 < 2) {
      FUN_0040496c(&local_8,"camisas");
    }
    else if (param_2 == 2) {
      FUN_0040496c(&local_8,"camisas2");
    }
    else if (param_2 == 3) {
      FUN_0040496c(&local_8,"camisas3");
    }
    puVar1 = &DAT_0064625c;
    FUN_00404b48(&local_10,*(int *)PTR_DAT_0066af70 + 0x1a + param_1 * 0x2f8,
                 *(int *)PTR_DAT_0066af70,&DAT_0064625c,local_8,"teams\\");
    puStackY_44 = &DAT_00646268;
    FUN_00404c64(&local_c,5);
    FUN_0040a43c(local_c);
  }
  else {
    if (param_2 < 2) {
      FUN_0040496c(&local_8,&DAT_00646278);
    }
    else if (param_2 == 2) {
      FUN_0040496c(&local_8,&DAT_00646284);
    }
    else if (param_2 == 3) {
      FUN_0040496c(&local_8,&DAT_00646290);
    }
    FUN_00404b48(&local_18,*(int *)PTR_DAT_0066af70 + 0x1a + param_1 * 0x2f8,
                 *(int *)PTR_DAT_0066af70,local_8,"teams\\selecoes\\");
    puStackY_44 = (undefined *)0x6461d1;
    puVar1 = local_18;
    FUN_00404c64(&local_14,4);
    FUN_0040a43c(local_14);
  }
  *in_FS_OFFSET = puStackY_44;
  FUN_004048f8(&local_18,5,puVar1,&LAB_00646201);
  return;
}

