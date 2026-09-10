// Address: 006367a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006367a8(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

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
  puStack_28 = &LAB_006368b4;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  if (param_4 != '\0') {
    uVar3 = 4;
  }
  puStack_30 = (undefined1 *)0x6367e6;
  FUN_00409dd8(uVar3,&local_c);
  puStack_30 = (undefined1 *)0x6367f1;
  FUN_004051d4(&local_8,local_c);
  puStack_30 = (undefined1 *)local_8;
  puStack_34 = (undefined1 *)0x636801;
  FUN_00416244(&stack0xffffffe4,param_2,0xfc);
  puStack_34 = &stack0xffffffe4;
  ppuStack_38 = (undefined1 **)0x636812;
  FUN_00416478(&local_2c,"condicao");
  puVar1 = puStack_34;
  puStack_34 = (undefined1 *)0x636821;
  FUN_0050e9b8(*(undefined4 *)(param_1 + 0x334),&local_2c,puVar1);
  puStack_34 = &DAT_006368dc;
  ppuStack_38 = (undefined1 **)0x636832;
  FUN_00416244(&local_3c,param_2,0xfc);
  ppuStack_38 = &local_3c;
  local_3c = (undefined1 *)0x636843;
  FUN_00416478(local_4c,"nxstatus");
  ppuVar2 = ppuStack_38;
  ppuStack_38 = (undefined1 **)0x636852;
  FUN_0050e9b8(*(undefined4 *)(param_1 + 0x334),local_4c,ppuVar2);
  ppuStack_38 = (undefined1 **)&DAT_006368f8;
  local_3c = (undefined1 *)0x636863;
  FUN_00416244(local_5c,param_2,0xfc);
  local_3c = local_5c;
  uStack_40 = 0x636874;
  FUN_00416478(local_6c,"status");
  puVar1 = local_3c;
  local_3c = (undefined1 *)0x636883;
  FUN_0050e9b8(*(undefined4 *)(param_1 + 0x334),local_6c,puVar1);
  *in_FS_OFFSET = ppuStack_38;
  puStack_30 = &LAB_006368bb;
  puStack_34 = (undefined1 *)0x6368a3;
  FUN_00405744(local_6c,PTR_DAT_004010f8,6);
  puStack_34 = (undefined1 *)0x6368ab;
  FUN_004048d4(&local_c);
  puStack_34 = (undefined1 *)0x6368b3;
  FUN_00404ff0(&local_8);
  return;
}

