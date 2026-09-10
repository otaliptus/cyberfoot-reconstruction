// Address: 005c2674
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm62_bt1Click(void)

{
  undefined1 *puVar1;
  int iVar2;
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
  undefined4 local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_30 = &LAB_005c27cf;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b770);
  iVar4 = 0;
  if ((0 < iVar2) && (-1 < iVar2 + -1)) {
    iVar3 = 0;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066b770 + iVar3 * 0x30) == *(int *)(PTR_DAT_0066ac78 + 8)) &&
         (*(char *)(*(int *)PTR_DAT_0066b770 + 0x28 + iVar3 * 0x30) == '\0')) {
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (iVar4 == 1) {
    FUN_00642c50(0x46,&local_8);
    FUN_00545088(*(undefined4 *)(*(int *)PTR_DAT_0066b054 + 0x424),local_8);
  }
  else if (iVar4 < 2) {
    FUN_00642c50(0x48,&local_1c);
    FUN_00545088(*(undefined4 *)(*(int *)PTR_DAT_0066b054 + 0x424),local_1c);
  }
  else {
    FUN_00409dd8(iVar4,&local_14);
    FUN_00404c64(&local_10,3);
    FUN_004051d4(&local_c,local_10);
    FUN_00642c50(0x47,&local_18);
    FUN_0040526c(&local_c,local_18);
    FUN_00545088(*(undefined4 *)(*(int *)PTR_DAT_0066b054 + 0x424),local_c);
  }
  FUN_00483bc4(DAT_006d2b84);
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_005c27d6;
  puStack_30 = (undefined1 *)0x5c27b4;
  FUN_00405008(&local_1c,2,puVar1);
  puStack_30 = (undefined1 *)0x5c27c1;
  FUN_004048f8(&local_14,2);
  puStack_30 = (undefined1 *)0x5c27ce;
  FUN_00405008(&local_c,2);
  return;
}

