// Address: 005ac11c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm35_FormCreate(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_30 = &LAB_005ac302;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  FUN_00642c50(0xd5,&local_c);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x9fc),local_c);
  FUN_00466238(*(undefined4 *)(param_1 + 0x9f8),0);
  FUN_00642c50(0x197,&local_10);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x5d8),local_10);
  DAT_006d25bc = 0;
  iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (iVar3 < 2) {
    FUN_00466128(*(undefined4 *)(param_1 + 0xa08),0);
  }
  else {
    local_8 = FUN_0065208c(0x1d);
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      do {
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar4 * 0x294),&local_1c);
        FUN_00404c64(&local_18,3);
        FUN_004051d4(&local_14,local_18);
        FUN_0040526c(&local_14,
                     *(undefined4 *)
                      (PTR_DAT_0066b294 +
                      *(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar4 * 0x294) * 4));
        FUN_0054cd98(*(undefined4 *)(param_1 + 0xa08),local_14);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (local_8 < 0) {
      FUN_0054c10c(*(undefined4 *)(param_1 + 0xa08),0);
      DAT_006d25bc = 0;
    }
    else {
      FUN_0054c10c(*(undefined4 *)(param_1 + 0xa08),local_8);
      DAT_006d25bc = local_8;
    }
  }
  DAT_006d25c5 = 0;
  if (*(int *)PTR_DAT_0066acf8 == 2) {
    if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d25bc * 0x294) == 0x1d) {
      cVar2 = FUN_006500c8();
      if ((cVar2 != '\0') && (0 < *(int *)(PTR_DAT_0066ac78 + 0x110))) {
        FUN_00466128(*(undefined4 *)(param_1 + 0x9fc),1);
        goto LAB_005ac2cd;
      }
    }
  }
  FUN_00466128(*(undefined4 *)(param_1 + 0x9fc),0);
LAB_005ac2cd:
  FUN_005ad1f4(param_1,DAT_006d25bc);
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_005ac309;
  puStack_30 = (undefined1 *)0x5ac2f4;
  FUN_004048f8(&local_1c,2,puVar1);
  puStack_30 = (undefined1 *)0x5ac301;
  FUN_00405008(&local_14,3);
  return;
}

