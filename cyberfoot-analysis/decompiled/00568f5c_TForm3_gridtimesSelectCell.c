// Address: 00568f5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm3_gridtimesSelectCell(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_FS_OFFSET;
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined4 *puStack_2c;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 9;
  do {
    uStack_c = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  puStack_24 = &LAB_005690f3;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  puStack_2c = (undefined4 *)&UNK_00568f96;
  FUN_00465978(*(undefined4 *)(param_1 + 0x424),*(undefined4 *)(*(int *)(param_1 + 0x420) + 0x40),0)
  ;
  DAT_006d1f04 = 0;
  puStack_2c = (undefined4 *)0x568fab;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x134))();
  if (0 < iVar4) {
    puStack_2c = (undefined4 *)0x568fbd;
    _DAT_0067b4c4 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x138))();
    puStack_2c = &uStack_c;
    piVar1 = *(int **)(param_1 + 0x2f8);
    puStack_30 = (undefined1 *)0x568fd6;
    uVar5 = (**(code **)(*piVar1 + 0x138))();
    puStack_2c = (undefined4 *)0x568fe2;
    FUN_00416244(&stack0xffffffe4,uVar5,0xfc);
    puStack_2c = (undefined4 *)&stack0xffffffe4;
    puStack_30 = (undefined1 *)0x568ff3;
    FUN_00416478(&puStack_2c,&DAT_0056910c);
    puVar3 = puStack_2c;
    puStack_2c = (undefined4 *)0x568ffe;
    FUN_0050e448(piVar1,&puStack_2c,puVar3);
    puStack_2c = (undefined4 *)0x569009;
    FUN_00404b6c(&local_8,uStack_c);
    puStack_2c = (undefined4 *)0x569011;
    DAT_0067b4c0 = FUN_00409ff8(local_8);
  }
  puStack_2c = (undefined4 *)0x569026;
  uVar5 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x33c),"status");
  puStack_2c = (undefined4 *)0x56902d;
  FUN_0050a804(uVar5,1);
  puStack_2c = (undefined4 *)0x56903a;
  FUN_00466128(*(undefined4 *)(param_1 + 0x368),1);
  puStack_2c = (undefined4 *)0x569047;
  FUN_00466128(*(undefined4 *)(param_1 + 0x36c),1);
  puStack_2c = &uStack_34;
  piVar1 = *(int **)(param_1 + 0x2f8);
  puStack_30 = (undefined1 *)0x56905b;
  uVar5 = (**(code **)(*piVar1 + 0x138))();
  puStack_30 = (undefined1 *)0x569067;
  FUN_00416244(auStack_44,uVar5,0xfc);
  puStack_30 = auStack_44;
  uStack_34 = 0x569078;
  FUN_00416478(auStack_54,&DAT_0056910c);
  puVar2 = puStack_30;
  puStack_30 = (undefined1 *)0x569083;
  FUN_0050e448(piVar1,auStack_54,puVar2);
  puStack_30 = (undefined1 *)0x56908e;
  FUN_00404b6c(&puStack_30,uStack_34);
  puVar2 = puStack_30;
  puStack_30 = (undefined1 *)0x569096;
  uVar5 = FUN_00409ff8(puVar2);
  puStack_30 = (undefined1 *)0x56909f;
  TForm3_listtime(param_1,uVar5);
  *in_FS_OFFSET = (int)puStack_2c;
  puStack_24 = &LAB_005690fa;
  iStack_28 = 0x5690bf;
  FUN_00405744(auStack_54,PTR_DAT_004010f8,2);
  iStack_28 = 0x5690c7;
  FUN_00404ff0(&uStack_34);
  iStack_28 = 0x5690cf;
  FUN_004048d4(&puStack_30);
  iStack_28 = 0x5690e2;
  FUN_00405744(&puStack_2c,PTR_DAT_004010f8,2);
  iStack_28 = 0x5690ea;
  FUN_00404ff0(&uStack_c);
  iStack_28 = 0x5690f2;
  FUN_004048d4(&local_8);
  return;
}

