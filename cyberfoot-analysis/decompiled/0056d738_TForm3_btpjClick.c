// Address: 0056d738
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_btpjClick(int param_1)

{
  byte *pbVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int unaff_EDI;
  int *in_FS_OFFSET;
  bool bVar10;
  undefined1 uVar11;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [8];
  undefined4 uStack_3c;
  int iStack_38;
  undefined1 *local_34;
  undefined1 **ppuStack_30;
  undefined1 **ppuStack_2c;
  undefined1 **ppuStack_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  int local_c;
  
  local_20 = &stack0xfffffffc;
  iVar8 = 0x10;
  do {
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_24 = &LAB_0056daef;
  ppuStack_28 = (undefined1 **)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&ppuStack_28;
  local_10 = DAT_006d1efc;
  local_c = DAT_006d1ef8;
  iVar8 = 0;
  bVar2 = false;
  ppuStack_2c = (undefined1 **)0x56d780;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
  if (iVar5 < local_c) {
    local_c = 0;
    DAT_006d1ef8 = 0;
    DAT_006d1efc = 1;
    local_10 = 1;
  }
  if (0x18 < local_10) {
    DAT_006d1efc = 1;
  }
  if (local_10 == 0) {
    DAT_006d1efc = 1;
  }
  ppuStack_2c = (undefined1 **)0x56d7ca;
  FUN_00466208(*(undefined4 *)(param_1 + 0x3f0),&stack0xffffffe4);
  if (unaff_EDI != 0) {
    ppuStack_2c = (undefined1 **)0x56d7e5;
    iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
    if (local_c <= iVar5 + -1) {
      iVar5 = ((iVar5 + -1) - local_c) + 1;
LAB_0056d7f5:
      ppuStack_28 = &local_24;
      ppuStack_30 = (undefined1 **)0x56d806;
      FUN_00416244(&local_34,local_c,0xfc);
      ppuStack_30 = &local_34;
      local_34 = (undefined1 *)0x56d817;
      FUN_00416478(local_44,&DAT_0056db08);
      ppuVar4 = ppuStack_30;
      ppuStack_30 = (undefined1 **)0x56d829;
      FUN_0050e448(*(undefined4 *)(param_1 + 0x2f8),local_44,ppuVar4);
      ppuStack_30 = (undefined1 **)0x56d834;
      FUN_00404b6c(&local_20,local_24);
      ppuStack_30 = (undefined1 **)0x56d83c;
      iVar6 = FUN_00409ff8(local_20);
      if (local_10 < 0x1a) {
        do {
          pbVar1 = (byte *)(DAT_0067b4bc + iVar6 * 0x708 + -0x24 + local_10 * 0x24);
          bVar10 = *pbVar1 == 0xffffffff;
          ppuStack_30 = (undefined1 **)0x56d872;
          FUN_00403180(pbVar1,&DAT_0056db0c);
          if (!bVar10) {
            ppuStack_30 = (undefined1 **)&local_48;
            local_34 = (undefined1 *)0x56d88d;
            FUN_00466208(*(undefined4 *)(param_1 + 0x3f0),&local_4c);
            local_34 = (undefined1 *)0x56d895;
            local_34 = (undefined1 *)FUN_00404ba4(local_4c);
            iStack_38 = 0x56d8b7;
            FUN_00404b48(&local_54,DAT_0067b4bc + iVar6 * 0x708 + -0x24 + local_10 * 0x24);
            iStack_38 = 0x56d8c2;
            FUN_0056d118(local_54,&local_50);
            puVar3 = local_34;
            local_34 = (undefined1 *)0x56d8cd;
            FUN_00404e04(local_50,0,puVar3);
            ppuStack_30 = (undefined1 **)local_48;
            local_34 = (undefined1 *)0x56d8e2;
            FUN_00466208(*(undefined4 *)(param_1 + 0x3f0),&local_5c);
            local_34 = (undefined1 *)0x56d8ed;
            FUN_0056d118(local_5c,&local_58);
            ppuVar4 = ppuStack_30;
            ppuStack_30 = (undefined1 **)0x56d8f6;
            iVar7 = FUN_00409790(ppuVar4,local_58);
            if (iVar7 == 0) {
              ppuStack_30 = (undefined1 **)0x56d912;
              (**(code **)(**(int **)(param_1 + 0x2f8) + 0x1b0))(*(int **)(param_1 + 0x2f8),local_c)
              ;
              ppuStack_30 = (undefined1 **)0x56d923;
              (**(code **)(**(int **)(param_1 + 0x2f8) + 0xc4))();
              ppuStack_30 = (undefined1 **)0x56d933;
              FUN_00466238(*(undefined4 *)(param_1 + 0x3f4),0);
              ppuStack_30 = (undefined1 **)0x56d944;
              iVar7 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
              iVar6 = iVar8;
              if (iVar7 + -1 < 0) goto LAB_0056d9b5;
              iVar9 = 0;
              uVar11 = 1;
              goto LAB_0056d94e;
            }
          }
          local_10 = local_10 + 1;
        } while (local_10 != 0x1a);
      }
      goto LAB_0056da1e;
    }
  }
LAB_0056da4e:
  puVar3 = local_20;
  if (!bVar2) {
    DAT_006d1ef8 = 0;
    DAT_006d1efc = 1;
  }
  *in_FS_OFFSET = (int)ppuStack_28;
  local_20 = &LAB_0056daf9;
  local_24 = (undefined1 *)0x56da7b;
  FUN_004048d4(&local_88,ppuStack_28,puVar3);
  local_24 = (undefined1 *)0x56da83;
  FUN_00404ff0(&local_84);
  local_24 = (undefined1 *)0x56da96;
  FUN_00405744(local_80,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x56da9e;
  FUN_00404ff0(&local_60);
  local_24 = (undefined1 *)0x56daa6;
  FUN_004048d4(&local_5c);
  local_24 = (undefined1 *)0x56dab3;
  FUN_004048f8(&local_58,3);
  local_24 = (undefined1 *)0x56dabb;
  FUN_004048d4(&local_4c);
  local_24 = (undefined1 *)0x56dac3;
  FUN_004048d4(&local_48);
  local_24 = (undefined1 *)0x56dad6;
  FUN_00405744(local_44,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x56dade;
  FUN_00404ff0(&local_24);
  local_24 = (undefined1 *)0x56dae6;
  FUN_004048d4(&local_20);
  local_24 = (undefined1 *)0x56daee;
  FUN_004048d4(&stack0xffffffe4);
  return;
  while( true ) {
    iVar9 = iVar9 + 1;
    iVar7 = iVar7 + -1;
    uVar11 = 0;
    iVar6 = iVar8;
    if (iVar7 == 0) break;
LAB_0056d94e:
    ppuStack_2c = &local_60;
    local_34 = (undefined1 *)0x56d95e;
    FUN_00416244(local_70,iVar9,0xfc);
    local_34 = local_70;
    iStack_38 = 0x56d96f;
    FUN_00416478(local_80,"idjog");
    puVar3 = local_34;
    local_34 = (undefined1 *)0x56d981;
    FUN_0050e448(*(undefined4 *)(param_1 + 0x33c),local_80,puVar3);
    local_34 = local_60;
    iStack_38 = 0x56d993;
    FUN_00409dd8(local_10,&local_88);
    iStack_38 = 0x56d9a1;
    FUN_004051d4(&local_84,local_88);
    puVar3 = local_34;
    local_34 = (undefined1 *)0x56d9aa;
    FUN_00405378(puVar3,local_84);
    iVar6 = iVar9;
    if ((bool)uVar11) break;
  }
LAB_0056d9b5:
  local_34 = &LAB_0056d9e1;
  iStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_38;
  uStack_3c = 0x56d9d7;
  ppuStack_30 = (undefined1 **)&stack0xfffffffc;
  (**(code **)(**(int **)(param_1 + 0x33c) + 0x1b0))(*(int **)(param_1 + 0x33c),iVar6);
  ppuVar4 = ppuStack_30;
  *in_FS_OFFSET = iStack_38;
  iVar8 = **(int **)(param_1 + 0x33c);
  ppuStack_30 = (undefined1 **)0x56d9fc;
  (**(code **)(iVar8 + 0xc4))(*(int **)(param_1 + 0x33c),iVar8,ppuVar4);
  DAT_006d1ef8 = local_c;
  DAT_006d1efc = local_10 + 1;
  bVar2 = true;
  iVar8 = iVar6;
LAB_0056da1e:
  if (bVar2) {
    if (0x18 < DAT_006d1efc) {
      DAT_006d1efc = 1;
      DAT_006d1ef8 = DAT_006d1ef8 + 1;
    }
    goto LAB_0056da4e;
  }
  local_10 = 1;
  local_c = local_c + 1;
  iVar5 = iVar5 + -1;
  if (iVar5 == 0) goto LAB_0056da4e;
  goto LAB_0056d7f5;
}

