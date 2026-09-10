// Address: 005bac10
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bac10(int param_1)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 local_b4 [16];
  undefined1 local_a4 [16];
  undefined1 local_94 [16];
  undefined1 local_84 [16];
  undefined4 local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 **local_50;
  undefined1 local_4c [16];
  undefined1 *local_3c [2];
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 **local_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *local_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = &stack0xfffffffc;
  iVar4 = 0x16;
  do {
    local_8 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puStack_20 = &LAB_005baeb7;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x5bac40;
  (**(code **)(**(int **)(param_1 + 0x304) + 0x1dc))();
  iVar4 = *(int *)PTR_DAT_0066b57c;
  if (0 < iVar4) {
    piVar5 = (int *)(PTR_DAT_0066ac78 + 0x14);
    do {
      if (-1 < *piVar5) {
        puStack_28 = (undefined1 *)0x5bac75;
        (**(code **)(**(int **)(param_1 + 0x304) + 0x1d0))(*(int **)(param_1 + 0x304),1);
        puStack_28 = (undefined1 *)0x5bac7f;
        FUN_00409dd8(*piVar5,&local_c);
        puStack_28 = (undefined1 *)0x5bac8a;
        FUN_004051d4(&local_8,local_c);
        puStack_28 = (undefined1 *)local_8;
        local_2c = (undefined1 **)0x5bac9c;
        iVar3 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
        local_2c = (undefined1 **)0x5baca9;
        FUN_00416244(&local_1c,iVar3 + -1,0xfc);
        local_2c = &local_1c;
        puStack_30 = (undefined1 *)0x5bacba;
        FUN_00416478(&local_2c,&DAT_005baed0);
        ppuVar2 = local_2c;
        local_2c = (undefined1 **)0x5bacc9;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),&local_2c,ppuVar2);
        local_2c = (undefined1 **)0x5bacd7;
        iVar3 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
        local_2c = (undefined1 **)0x5bace4;
        FUN_00416244(local_3c,iVar3 + -1,0xfc);
        local_2c = local_3c;
        puStack_30 = (undefined1 *)0x5bacf5;
        FUN_00416478(local_4c,"nxpais");
        ppuVar2 = local_2c;
        local_2c = (undefined1 **)0x5bad04;
        iVar3 = FUN_004f77e4(*(undefined4 *)(param_1 + 0x304),local_4c,ppuVar2);
        *(undefined4 *)(iVar3 + 8) =
             *(undefined4 *)
              (*(int *)PTR_DAT_0066b3e0 +
              *(int *)(*(int *)PTR_DAT_0066b718 + 0x7c + *piVar5 * 0x80) * 4);
        local_2c = (undefined1 **)0x5bad3b;
        FUN_00405194(&local_50,*(int *)PTR_DAT_0066b718 + *piVar5 * 0x80);
        local_2c = local_50;
        puStack_30 = (undefined1 *)0x5bad4d;
        iVar3 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
        puStack_30 = (undefined1 *)0x5bad5a;
        FUN_00416244(local_60,iVar3 + -1,0xfc);
        puStack_30 = local_60;
        uStack_34 = 0x5bad6b;
        FUN_00416478(local_70,&DAT_005baeec);
        puVar1 = puStack_30;
        puStack_30 = (undefined1 *)0x5bad7a;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_70,puVar1);
        if (*(int *)(*(int *)PTR_DAT_0066b718 + 0x1c + *piVar5 * 0x80) < 0) {
          puStack_30 = (undefined1 *)0x0;
          uStack_34 = 0x5bae0a;
          iVar3 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
          puStack_28 = (undefined1 *)0x5bae1a;
          FUN_00416244(local_a4,iVar3 + -1,0xfc);
          puStack_28 = local_a4;
          local_2c = (undefined1 **)0x5bae31;
          FUN_00416478(local_b4,"nxtime");
          puVar1 = puStack_28;
          puStack_28 = (undefined1 *)0x5bae43;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_b4,puVar1);
        }
        else {
          puStack_30 = (undefined1 *)0x5badb3;
          FUN_00405194(&local_74,
                       *(int *)PTR_DAT_0066af70 +
                       *(int *)(*(int *)PTR_DAT_0066b718 + 0x1c + *piVar5 * 0x80) * 0x2f8);
          puStack_30 = (undefined1 *)local_74;
          uStack_34 = 0x5badc5;
          iVar3 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
          puStack_28 = (undefined1 *)0x5badd2;
          FUN_00416244(local_84,iVar3 + -1,0xfc);
          puStack_28 = local_84;
          local_2c = (undefined1 **)0x5bade6;
          FUN_00416478(local_94,"nxtime");
          puVar1 = puStack_28;
          puStack_28 = (undefined1 *)0x5badf8;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_94,puVar1);
        }
      }
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *in_FS_OFFSET = uStack_24;
  local_1c = &LAB_005baebe;
  puStack_20 = (undefined1 *)0x5bae70;
  FUN_00405744(local_b4,PTR_DAT_004010f8,4);
  puStack_20 = (undefined1 *)0x5bae78;
  FUN_00404ff0(&local_74);
  puStack_20 = (undefined1 *)0x5bae8b;
  FUN_00405744(local_70,PTR_DAT_004010f8,2);
  puStack_20 = (undefined1 *)0x5bae93;
  FUN_00404ff0(&local_50);
  puStack_20 = (undefined1 *)0x5baea6;
  FUN_00405744(local_4c,PTR_DAT_004010f8,4);
  puStack_20 = (undefined1 *)0x5baeae;
  FUN_004048d4(&local_c);
  puStack_20 = (undefined1 *)0x5baeb6;
  FUN_00404ff0(&local_8);
  return;
}

