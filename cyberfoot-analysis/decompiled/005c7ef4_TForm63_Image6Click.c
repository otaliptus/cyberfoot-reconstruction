// Address: 005c7ef4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm63_Image6Click(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_005c807d;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  DAT_006d2c20 = 3;
  DAT_006d2c1c = 4;
  FUN_00466128(*(undefined4 *)(param_1 + 0x328),0);
  FUN_00466128(*(undefined4 *)(param_1 + 0x380),0);
  (**(code **)(**(int **)(param_1 + 0x37c) + 0xd8))();
  iVar4 = 1;
  do {
    iVar3 = 1;
    do {
      FUN_00642c50(0xd1,&local_c);
      uVar2 = FUN_0064d63c(iVar3,iVar4);
      FUN_00409dd8(uVar2,&local_14);
      FUN_004051d4(&local_10,local_14);
      FUN_00405330(&local_8,3);
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x37c),local_8);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  if (*(int *)(PTR_DAT_0066ac78 + 400) == 1) {
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x37c),*(int *)(PTR_DAT_0066ac78 + 0x194) + -1);
  }
  else {
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x37c),*(int *)(PTR_DAT_0066ac78 + 0x194) + 2);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x194) < 4) {
    uStack_30 = *(undefined4 *)(PTR_DAT_0066ac78 + 400);
    FUN_005c5d38(param_1,4,*(int *)(PTR_DAT_0066ac78 + 0x194));
  }
  else {
    uStack_30 = 2;
    FUN_005c5d38(param_1,4,3);
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x37c),5);
  }
  FUN_00465978(*(undefined4 *)(param_1 + 0x360),*(undefined4 *)(*(int *)(param_1 + 0x354) + 0x40));
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_005c8084;
  uStack_2c = 0x5c806f;
  FUN_004048d4(&local_14,uStack_30,puVar1);
  uStack_2c = 0x5c807c;
  FUN_00405008(&local_10,3);
  return;
}

