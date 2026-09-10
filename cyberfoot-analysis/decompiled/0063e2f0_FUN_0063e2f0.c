// Address: 0063e2f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0063e2f0(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_FS_OFFSET;
  undefined1 local_d4 [16];
  undefined1 local_c4 [16];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac [16];
  undefined4 local_9c [4];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c [16];
  undefined4 local_6c [4];
  undefined4 *local_5c;
  undefined4 local_58;
  undefined1 local_54 [16];
  undefined4 *local_44 [2];
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 **local_2c;
  undefined4 *puStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  undefined4 *local_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = (undefined4 *)&stack0xfffffffc;
  iVar6 = 0x1a;
  do {
    local_8 = 0;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puStack_20 = &LAB_0063e776;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  puStack_28 = (undefined4 *)0x63e31f;
  FUN_00466128(*(undefined4 *)(param_1 + 0x538),1);
  puStack_28 = (undefined4 *)0x63e32c;
  FUN_00466128(*(undefined4 *)(param_1 + 0x53c),1);
  puStack_28 = (undefined4 *)0x63e339;
  FUN_00466128(*(undefined4 *)(param_1 + 0x540),1);
  puStack_28 = &local_c;
  piVar1 = *(int **)(param_1 + 0x334);
  local_2c = (undefined4 **)0x63e34d;
  uVar5 = (**(code **)(*piVar1 + 0x138))();
  local_2c = (undefined4 **)0x63e359;
  FUN_00416244(&local_1c,uVar5,0xfc);
  local_2c = &local_1c;
  local_30 = (undefined4 *)0x63e36a;
  FUN_00416478(&local_2c,&DAT_0063e790);
  ppuVar4 = local_2c;
  local_2c = (undefined4 **)0x63e375;
  FUN_0050e448(piVar1,&local_2c,ppuVar4);
  local_2c = (undefined4 **)0x63e380;
  FUN_00404b6c(&local_8,local_c);
  local_2c = (undefined4 **)0x63e388;
  iVar6 = FUN_00409ff8(local_8);
  if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x7d + iVar6 * 0x130) == '\0') {
    local_2c = (undefined4 **)0x63e3b6;
    FUN_00466128(*(undefined4 *)(param_1 + 0x544),0);
  }
  else {
    local_2c = (undefined4 **)0x63e3a7;
    FUN_00466128(*(undefined4 *)(param_1 + 0x544),
                 CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b5b8 >> 8),1));
  }
  if ((0xb < *(int *)(*(int *)PTR_DAT_0066af70 + 100 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)) &&
     (10 < *(int *)(*(int *)PTR_DAT_0066af70 + 0xa0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8))) {
    local_2c = &local_34;
    piVar1 = *(int **)(param_1 + 0x334);
    local_30 = (undefined4 *)0x63e3f7;
    uVar5 = (**(code **)(*piVar1 + 0x138))();
    local_2c = (undefined4 **)0x63e403;
    FUN_00416244(local_44,uVar5,0xfc);
    local_2c = local_44;
    local_30 = (undefined4 *)0x63e414;
    FUN_00416478(local_54,&DAT_0063e790);
    ppuVar4 = local_2c;
    local_2c = (undefined4 **)0x63e41f;
    FUN_0050e448(piVar1,local_54,ppuVar4);
    local_2c = (undefined4 **)0x63e42a;
    FUN_00404b6c(&local_30,local_34);
    local_2c = (undefined4 **)0x63e432;
    iVar6 = FUN_00409ff8(local_30);
    if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar6 * 0x130) != 2) {
      local_2c = (undefined4 **)0x63e463;
      (**(code **)(**(int **)(param_1 + 0x538) + 100))
                (*(int **)(param_1 + 0x538),CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b5b8 >> 8),1))
      ;
      goto LAB_0063e463;
    }
  }
  local_2c = (undefined4 **)0x63e454;
  (**(code **)(**(int **)(param_1 + 0x538) + 100))(*(int **)(param_1 + 0x538),0);
LAB_0063e463:
  local_2c = (undefined4 **)0x63e470;
  (**(code **)(**(int **)(param_1 + 0x53c) + 100))(*(int **)(param_1 + 0x53c),1);
  local_2c = &local_5c;
  piVar1 = *(int **)(param_1 + 0x334);
  local_30 = (undefined4 *)0x63e484;
  uVar5 = (**(code **)(*piVar1 + 0x138))();
  local_30 = (undefined4 *)0x63e490;
  FUN_00416244(local_6c,uVar5,0xfc);
  local_30 = local_6c;
  local_34 = (undefined4 *)0x63e4a1;
  FUN_00416478(local_7c,&DAT_0063e790);
  puVar3 = local_30;
  local_30 = (undefined4 *)0x63e4ac;
  FUN_0050e448(piVar1,local_7c,puVar3);
  local_30 = (undefined4 *)0x63e4b7;
  FUN_00404b6c(&local_58,local_5c);
  local_30 = (undefined4 *)0x63e4bf;
  iVar6 = FUN_00409ff8(local_58);
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar6 * 0x130) == 0) {
    local_30 = &local_84;
    local_34 = (undefined4 *)0x63e4e7;
    uVar5 = (**(code **)(**(int **)(param_1 + 0x334) + 0x138))();
    local_34 = (undefined4 *)0x63e4f9;
    (**(code **)(**(int **)(param_1 + 0x334) + 0x100))(*(int **)(param_1 + 0x334),0,uVar5);
    local_30 = (undefined4 *)0x63e504;
    FUN_00404b6c(&local_80,local_84);
    local_30 = (undefined4 *)0x63e50c;
    iVar6 = FUN_00409ff8(local_80);
    if (*(double *)(*(int *)PTR_DAT_0066b5b8 + 0x70 + iVar6 * 0x130) <=
        *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10)) {
      if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x68 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) < 2) {
        local_30 = (undefined4 *)0x63e56c;
        (**(code **)(**(int **)(param_1 + 0x538) + 100))(*(int **)(param_1 + 0x538),0);
      }
      else {
        local_30 = (undefined4 *)0x63e55d;
        (**(code **)(**(int **)(param_1 + 0x538) + 100))
                  (*(int **)(param_1 + 0x538),
                   CONCAT31((int3)((uint)*(int *)PTR_DAT_0066af70 >> 8),1));
      }
    }
  }
  local_30 = &local_8c;
  piVar1 = *(int **)(param_1 + 0x334);
  local_34 = (undefined4 *)0x63e583;
  uVar5 = (**(code **)(*piVar1 + 0x138))();
  local_34 = (undefined4 *)0x63e592;
  FUN_00416244(local_9c,uVar5,0xfc);
  local_34 = local_9c;
  puStack_38 = (undefined1 *)0x63e5a9;
  FUN_00416478(local_ac,&DAT_0063e790);
  puVar3 = local_34;
  local_34 = (undefined4 *)0x63e5b7;
  FUN_0050e448(piVar1,local_ac,puVar3);
  local_34 = (undefined4 *)0x63e5c8;
  FUN_00404b6c(&local_88,local_8c);
  local_34 = (undefined4 *)0x63e5d3;
  iVar6 = FUN_00409ff8(local_88);
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + iVar6 * 0x130) < 0x20) {
    local_34 = (undefined4 *)0x63e601;
    (**(code **)(**(int **)(param_1 + 0x540) + 100))(*(int **)(param_1 + 0x540),0);
  }
  else {
    local_34 = (undefined4 *)0x63e5f2;
    (**(code **)(**(int **)(param_1 + 0x540) + 100))
              (*(int **)(param_1 + 0x540),CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b5b8 >> 8),1));
  }
  local_34 = &local_b4;
  piVar1 = *(int **)(param_1 + 0x334);
  puStack_38 = (undefined1 *)0x63e618;
  uVar5 = (**(code **)(*piVar1 + 0x138))();
  puStack_38 = (undefined1 *)0x63e627;
  FUN_00416244(local_c4,uVar5,0xfc);
  puStack_38 = local_c4;
  uStack_3c = 0x63e63e;
  FUN_00416478(local_d4,&DAT_0063e790);
  puVar2 = puStack_38;
  puStack_38 = (undefined1 *)0x63e64c;
  FUN_0050e448(piVar1,local_d4,puVar2);
  puStack_38 = (undefined1 *)0x63e65d;
  FUN_00404b6c(&local_b0,local_b4);
  puStack_38 = (undefined1 *)0x63e668;
  iVar6 = FUN_00409ff8(local_b0);
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar6 * 0x130) == 2) {
    puStack_38 = (undefined1 *)0x63e68a;
    (**(code **)(**(int **)(param_1 + 0x53c) + 100))(*(int **)(param_1 + 0x53c),0);
    puStack_38 = (undefined1 *)0x63e697;
    (**(code **)(**(int **)(param_1 + 0x540) + 100))(*(int **)(param_1 + 0x540),0);
  }
  *in_FS_OFFSET = (int)local_34;
  local_2c = (undefined4 **)&LAB_0063e780;
  local_30 = (undefined4 *)0x63e6ba;
  FUN_00405744(local_d4,PTR_DAT_004010f8,2);
  local_30 = (undefined4 *)0x63e6c5;
  FUN_00404ff0(&local_b4);
  local_30 = (undefined4 *)0x63e6d0;
  FUN_004048d4(&local_b0);
  local_30 = (undefined4 *)0x63e6e6;
  FUN_00405744(local_ac,PTR_DAT_004010f8,2);
  local_30 = (undefined4 *)0x63e6f1;
  FUN_00404ff0(&local_8c);
  local_30 = (undefined4 *)0x63e6fc;
  FUN_004048d4(&local_88);
  local_30 = (undefined4 *)0x63e704;
  FUN_00404ff0(&local_84);
  local_30 = (undefined4 *)0x63e70c;
  FUN_004048d4(&local_80);
  local_30 = (undefined4 *)0x63e71f;
  FUN_00405744(local_7c,PTR_DAT_004010f8,2);
  local_30 = (undefined4 *)0x63e727;
  FUN_00404ff0(&local_5c);
  local_30 = (undefined4 *)0x63e72f;
  FUN_004048d4(&local_58);
  local_30 = (undefined4 *)0x63e742;
  FUN_00405744(local_54,PTR_DAT_004010f8,2);
  local_30 = (undefined4 *)0x63e74a;
  FUN_00404ff0(&local_34);
  local_30 = (undefined4 *)0x63e752;
  FUN_004048d4(&local_30);
  local_30 = (undefined4 *)0x63e765;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  local_30 = (undefined4 *)0x63e76d;
  FUN_00404ff0(&local_c);
  local_30 = (undefined4 *)0x63e775;
  FUN_004048d4(&local_8);
  return;
}

