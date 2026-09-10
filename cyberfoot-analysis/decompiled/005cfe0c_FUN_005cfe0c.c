// Address: 005cfe0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005cfe0c(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 local_4c [16];
  undefined4 local_3c;
  undefined4 *puStack_38;
  undefined1 *puStack_34;
  int iStack_30;
  undefined1 *local_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = 8;
  do {
    local_c = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  uVar3 = 0;
  UNLOCK();
  puStack_28 = &LAB_005cfee7;
  local_2c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  if (param_4 != '\0') {
    uVar3 = 4;
  }
  iStack_30 = 0x5cfe4a;
  FUN_00409dd8(uVar3,&local_c);
  iStack_30 = 0x5cfe55;
  FUN_004051d4(&local_8,local_c);
  iStack_30 = local_8;
  puStack_34 = (undefined1 *)0x5cfe65;
  FUN_00416244(&stack0xffffffe4,param_2,0xfc);
  puStack_34 = &stack0xffffffe4;
  puStack_38 = (undefined4 *)0x5cfe76;
  FUN_00416478(&local_2c,"condicao");
  puVar2 = puStack_34;
  puStack_34 = (undefined1 *)0x5cfe85;
  FUN_0050e9b8(*(undefined4 *)(param_1 + 0x32c),&local_2c,puVar2);
  puStack_34 = &DAT_005cff10;
  puStack_38 = (undefined4 *)0x5cfe96;
  FUN_00416244(&local_3c,param_2,0xfc);
  puStack_38 = &local_3c;
  local_3c = 0x5cfea7;
  FUN_00416478(local_4c,"status");
  puVar1 = puStack_38;
  puStack_38 = (undefined4 *)0x5cfeb6;
  FUN_0050e9b8(*(undefined4 *)(param_1 + 0x32c),local_4c,puVar1);
  *in_FS_OFFSET = puStack_34;
  local_2c = &LAB_005cfeee;
  iStack_30 = 0x5cfed6;
  FUN_00405744(local_4c,PTR_DAT_004010f8,4);
  iStack_30 = 0x5cfede;
  FUN_004048d4(&local_c);
  iStack_30 = 0x5cfee6;
  FUN_00404ff0(&local_8);
  return;
}

