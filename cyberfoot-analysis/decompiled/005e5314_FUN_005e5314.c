// Address: 005e5314
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005e5314(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [12];
  undefined4 uStack_40;
  undefined1 *local_3c;
  undefined1 **ppuStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = 0xc;
  do {
    local_c = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  uVar3 = 0;
  UNLOCK();
  puStack_28 = &LAB_005e5420;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  if (param_4 != '\0') {
    uVar3 = 4;
  }
  puStack_30 = (undefined1 *)0x5e5352;
  FUN_00409dd8(uVar3,&local_c);
  puStack_30 = (undefined1 *)0x5e535d;
  FUN_004051d4(&local_8,local_c);
  puStack_30 = (undefined1 *)local_8;
  puStack_34 = (undefined1 *)0x5e536d;
  FUN_00416244(&stack0xffffffe4,param_2,0xfc);
  puStack_34 = &stack0xffffffe4;
  ppuStack_38 = (undefined1 **)0x5e537e;
  FUN_00416478(&local_2c,"condicao");
  puVar1 = puStack_34;
  puStack_34 = (undefined1 *)0x5e538d;
  FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),&local_2c,puVar1);
  puStack_34 = &DAT_005e5448;
  ppuStack_38 = (undefined1 **)0x5e539e;
  FUN_00416244(&local_3c,param_2,0xfc);
  ppuStack_38 = &local_3c;
  local_3c = (undefined1 *)0x5e53af;
  FUN_00416478(local_4c,"nxstatus");
  ppuVar2 = ppuStack_38;
  ppuStack_38 = (undefined1 **)0x5e53be;
  FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_4c,ppuVar2);
  ppuStack_38 = (undefined1 **)&DAT_005e5464;
  local_3c = (undefined1 *)0x5e53cf;
  FUN_00416244(local_5c,param_2,0xfc);
  local_3c = local_5c;
  uStack_40 = 0x5e53e0;
  FUN_00416478(local_6c,"status");
  puVar1 = local_3c;
  local_3c = (undefined1 *)0x5e53ef;
  FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_6c,puVar1);
  *in_FS_OFFSET = ppuStack_38;
  puStack_30 = &LAB_005e5427;
  puStack_34 = (undefined1 *)0x5e540f;
  FUN_00405744(local_6c,PTR_DAT_004010f8,6);
  puStack_34 = (undefined1 *)0x5e5417;
  FUN_004048d4(&local_c);
  puStack_34 = (undefined1 *)0x5e541f;
  FUN_00404ff0(&local_8);
  return;
}

