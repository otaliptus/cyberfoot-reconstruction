// Address: 005bc29c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bc29c(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_80;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  int *piStack_74;
  undefined1 *puStack_70;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  int *piStack_4c;
  undefined1 *puStack_48;
  int *piStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_2c;
  int *local_28;
  undefined1 local_22 [2];
  int local_20;
  undefined1 local_1c [12];
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_2c = 0;
  local_10 = 0;
  local_28 = (int *)0x0;
  puStack_38 = &LAB_005bc440;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(char *)(param_1 + 0x18) == '\0') {
    uStack_40 = 0x5bc2df;
    FUN_004068c4(&local_28,*(undefined4 *)(param_1 + 0xc),&DAT_005bc44c);
    puVar1 = puStack_34;
    if (local_28 != (int *)0x0) {
      uStack_40 = 0x5bc2f1;
      uStack_40 = FUN_00404ff0(&local_10);
      piStack_44 = local_28;
      puStack_48 = (undefined1 *)0x5bc2fb;
      (**(code **)(*local_28 + 0xc))();
      puStack_48 = local_1c;
      piStack_4c = local_28;
      piStack_50 = (int *)0x5bc308;
      (**(code **)(*local_28 + 0x14))();
      bVar3 = DAT_005bc45c;
      piStack_50 = &local_20;
      piStack_54 = local_28;
      piStack_58 = (int *)0x5bc31b;
      (**(code **)(*local_28 + 0x1c))();
      if (local_20 != 0) {
        bVar3 = bVar3 | 1;
      }
      piStack_58 = &local_20;
      piStack_5c = local_28;
      piStack_60 = (int *)0x5bc331;
      (**(code **)(*local_28 + 0x24))();
      if (local_20 != 0) {
        bVar3 = bVar3 | 2;
      }
      piStack_60 = &local_20;
      piStack_64 = local_28;
      piStack_68 = (int *)0x5bc347;
      (**(code **)(*local_28 + 0x2c))();
      if (local_20 != 0) {
        bVar3 = bVar3 | 4;
      }
      piStack_68 = &local_20;
      piStack_6c = local_28;
      puStack_70 = (undefined1 *)0x5bc35d;
      (**(code **)(*local_28 + 0x34))();
      if (local_20 != 0) {
        bVar3 = bVar3 | 8;
      }
      puStack_70 = local_22;
      piStack_74 = local_28;
      puStack_78 = (undefined1 *)0x5bc373;
      (**(code **)(*local_28 + 0x44))();
      puStack_78 = (undefined1 *)0x5bc37f;
      local_c = (int *)FUN_0042a1cc(PTR_PTR_0042893c,1);
      *(undefined1 *)(local_8 + 0x18) = 1;
      puStack_7c = &LAB_005bc413;
      uStack_80 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_80;
      puStack_78 = &stack0xfffffffc;
      (**(code **)(*local_c + 8))(local_c,*(undefined4 *)(local_8 + 0x1c));
      FUN_00404b6c(&local_2c,local_10);
      FUN_0042a5c8(local_c,local_2c);
      uVar2 = FUN_00402c38();
      FUN_0042a640(local_c,uVar2);
      FUN_0042a66c(local_c,bVar3);
      FUN_0042a6d0(local_c,local_22[0]);
      (**(code **)(**(int **)(local_8 + 0x1c) + 8))(*(int **)(local_8 + 0x1c),local_c);
      puVar1 = puStack_78;
      *in_FS_OFFSET = uStack_80;
      puStack_78 = (undefined1 *)0x5bc41a;
      *(undefined1 *)(local_8 + 0x18) = 0;
      puStack_7c = (undefined1 *)0x5bc412;
      FUN_00403a84(local_c,uStack_80,puVar1);
      return;
    }
  }
  puStack_34 = puVar1;
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_005bc447;
  puStack_38 = (undefined1 *)0x5bc42f;
  FUN_004048d4(&local_2c,uStack_3c,puVar1);
  puStack_38 = (undefined1 *)0x5bc437;
  FUN_00406880(&local_28);
  puStack_38 = (undefined1 *)0x5bc43f;
  FUN_00404ff0(&local_10);
  return;
}

