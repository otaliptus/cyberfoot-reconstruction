// Address: 005c3858
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm62_grid1SelectCell(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 local_54 [16];
  undefined1 local_44 [8];
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *local_34;
  undefined4 *local_30;
  undefined1 *local_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = 9;
  do {
    local_c = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  puStack_28 = &LAB_005c3a25;
  local_2c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  local_30 = &local_c;
  local_34 = (undefined1 *)0x5c3892;
  FUN_00416244(&stack0xffffffe4,param_4,0xfc);
  local_34 = &stack0xffffffe4;
  puStack_38 = (undefined1 *)0x5c38a3;
  FUN_00416478(&local_2c,&DAT_005c3a40);
  puVar1 = local_34;
  local_34 = (undefined1 *)0x5c38b2;
  FUN_0050e448(*(undefined4 *)(param_1 + 0x2f8),&local_2c,puVar1);
  local_34 = (undefined1 *)0x5c38bd;
  FUN_00404b6c(&local_8,local_c);
  local_34 = (undefined1 *)0x5c38c5;
  DAT_006d2b8c = FUN_00409ff8(local_8);
  if (*(int *)(*(int *)PTR_DAT_0066b770 + 0x10 + DAT_006d2b8c * 0x30) == 0x45) {
    local_34 = (undefined1 *)0x5c3903;
    FUN_006468f4(*(undefined4 *)(*(int *)PTR_DAT_0066b770 + 0x24 + DAT_006d2b8c * 0x30),&local_34);
    puVar1 = local_34;
    local_34 = (undefined1 *)0x5c391c;
    FUN_004052cc(&local_30,*(undefined4 *)(PTR_DAT_0066b034 + 0x110),puVar1);
    local_34 = (undefined1 *)0x5c392a;
    FUN_005c1c74(*(undefined4 *)(param_1 + 0x334),local_30);
  }
  else {
    local_34 = (undefined1 *)0x5c3957;
    FUN_005c1c74(*(undefined4 *)(param_1 + 0x334),
                 *(undefined4 *)
                  (PTR_DAT_0066b034 +
                  *(int *)(*(int *)PTR_DAT_0066b770 + 0x10 + DAT_006d2b8c * 0x30) * 4 + -4));
  }
  if (*(char *)(*(int *)PTR_DAT_0066b770 + 0x29 + DAT_006d2b8c * 0x30) == '\x01') {
    local_34 = (undefined1 *)0x5c397d;
    FUN_00466128(*(undefined4 *)(param_1 + 0x31c),
                 CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b770 >> 8),1));
  }
  else {
    local_34 = (undefined1 *)0x5c398c;
    FUN_00466128(*(undefined4 *)(param_1 + 0x31c),0);
  }
  *(undefined1 *)(*(int *)PTR_DAT_0066b770 + 0x28 + DAT_006d2b8c * 0x30) = 1;
  local_34 = &DAT_005c3a48;
  puStack_38 = (undefined1 *)0x5c39b4;
  FUN_00416244(local_44,param_4,0xfc);
  puStack_38 = local_44;
  uStack_3c = 0x5c39c5;
  FUN_00416478(local_54,&DAT_005c3a54);
  puVar1 = puStack_38;
  puStack_38 = (undefined1 *)0x5c39d4;
  FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_54,puVar1);
  *in_FS_OFFSET = local_34;
  local_2c = &LAB_005c3a2c;
  local_30 = (undefined4 *)0x5c39f4;
  FUN_00405744(local_54,PTR_DAT_004010f8,2);
  local_30 = (undefined4 *)0x5c3a01;
  FUN_00405008(&local_34,2);
  local_30 = (undefined4 *)0x5c3a14;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  local_30 = (undefined4 *)0x5c3a1c;
  FUN_00404ff0(&local_c);
  local_30 = (undefined4 *)0x5c3a24;
  FUN_004048d4(&local_8);
  return;
}

