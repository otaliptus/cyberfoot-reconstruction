// Address: 005d9404
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm26_FormCreate(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwVar3;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_38 = &LAB_005d96cd;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  FUN_00642c50(0x3e0,&local_c);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x334),local_c);
  pwVar3 = L"<p align=\"center\"><shad>";
  FUN_00642c50(0x186,&local_14);
  FUN_00405330(&local_10,3);
  FUN_00545088(*(undefined4 *)(param_1 + 0x328),local_10);
  FUN_00642c50(0x187,&local_18);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x32c),local_18);
  DAT_006d34b8 = *(int *)(PTR_DAT_0066ac78 + 0xc0);
  DAT_006d34b4 = 0;
  iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (iVar1 < 2) {
    FUN_00466128(*(undefined4 *)(param_1 + 0x330),0);
  }
  else {
    if (*(int *)(PTR_DAT_0066ac78 + 8) < 0) {
      local_8 = FUN_0065208c(0x1d);
    }
    else {
      local_8 = FUN_0065208c(*(undefined4 *)
                              (*(int *)PTR_DAT_0066af70 + 0x3c +
                              *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
    }
    if (-1 < iVar1 + -1) {
      iVar2 = 0;
      do {
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar2 * 0x294),&local_24);
        FUN_00404c64(&local_20,3);
        FUN_004051d4(&local_1c,local_20);
        FUN_0040526c(&local_1c,
                     *(undefined4 *)
                      (PTR_DAT_0066b294 +
                      *(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar2 * 0x294) * 4));
        FUN_0054cd98(*(undefined4 *)(param_1 + 0x330),local_1c);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (-1 < local_8) {
      iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
      if (local_8 < iVar1) {
        FUN_0054c10c(*(undefined4 *)(param_1 + 0x330),local_8);
        DAT_006d34b4 = local_8;
        goto LAB_005d95cb;
      }
    }
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x330),0);
    DAT_006d34b4 = 0;
  }
LAB_005d95cb:
  PTR_DAT_0066ac78[0x640] = 0;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x600) = 0;
  FUN_005d9754(param_1);
  FUN_005dfe10(param_1);
  FUN_005ddd24(param_1,DAT_006d34b4);
  if (((PTR_DAT_0066ac78[0x171] == '\0') || (DAT_006d34b8 != 1)) ||
     (PTR_DAT_0066ac78[0x75d] == '\0')) {
    if ((DAT_006d34b8 < 2) || (PTR_DAT_0066ac78[0x171] == '\0')) {
      FUN_00466128(*(undefined4 *)(param_1 + 0x310),0);
      FUN_00465978(*(undefined4 *)(param_1 + 0x2fc),0xc0);
      FUN_00465978(*(undefined4 *)(param_1 + 0x330),0xc3);
      FUN_00465978(*(undefined4 *)(param_1 + 0x334),0xc0);
    }
    else {
      FUN_005d9ed0(param_1);
    }
  }
  else {
    FUN_005d9ed0(param_1);
  }
  if (PTR_DAT_0066ac78[0x6c8] != '\0') {
    FUN_0043b234(*(undefined4 *)(param_1 + 0x2f8),1);
  }
  *in_FS_OFFSET = L"</shad></p>";
  FUN_004048f8(&local_24,2,pwVar3,&LAB_005d96d4);
  FUN_00405008(&local_1c,5);
  return;
}

