// Address: 005d16f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm76_btfecharClick(void)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_005d1820;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = -1;
  iVar6 = 10;
  puVar4 = &DAT_006d31e8;
  puVar5 = &DAT_006d3210;
  do {
    cVar2 = (**(code **)(*(int *)*puVar4 + 200))();
    if (cVar2 != '\0') {
      FUN_004e14c0(*puVar5,&local_10);
      FUN_00404b6c(&local_c,local_10);
      iVar3 = FUN_00409ff8(local_c);
      if (0 < iVar3) {
        FUN_004e14c0(*puVar5,&local_18);
        FUN_00404b6c(&local_14,local_18);
        local_8 = FUN_00409ff8(local_14);
        break;
      }
    }
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (-1 < local_8) {
    *(int *)(PTR_DAT_0066ac78 + 0x5fc) = *(int *)(PTR_DAT_0066ac78 + 0x5fc) + 1;
    *(int *)(PTR_DAT_0066ac78 + *(int *)(PTR_DAT_0066ac78 + 0x5fc) * 4 + 0x600) = local_8;
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + local_8 * 0x2f8) =
         *(undefined4 *)(PTR_DAT_0066ac78 + 0x10);
    *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x39 + local_8 * 0x2f8) = 1;
    *(undefined1 *)(*(int *)PTR_DAT_0066b718 + 0x38 + *(int *)(PTR_DAT_0066ac78 + 0x10) * 0x80) = 1;
    FUN_00483bc4(DAT_006d31e0);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_005d1827;
  puStack_2c = (undefined1 *)0x5d1807;
  FUN_00404ff0(&local_18,uStack_30,puVar1);
  puStack_2c = (undefined1 *)0x5d180f;
  FUN_004048d4(&local_14);
  puStack_2c = (undefined1 *)0x5d1817;
  FUN_00404ff0(&local_10);
  puStack_2c = (undefined1 *)0x5d181f;
  FUN_004048d4(&local_c);
  return;
}

