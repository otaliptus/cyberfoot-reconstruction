// Address: 0056a818
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_selecaosalvar(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 unaff_EDI;
  undefined *puVar6;
  int *in_FS_OFFSET;
  bool bVar7;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [8];
  undefined4 uStack_48;
  int iStack_44;
  undefined1 *local_40;
  undefined *puStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined1 *local_30;
  undefined1 **ppuStack_2c;
  undefined1 **ppuStack_28;
  undefined1 *puStack_24;
  undefined1 *local_20;
  int iVar8;
  int local_10;
  int local_c;
  int *local_8;
  
  local_20 = &stack0xfffffffc;
  iVar4 = 0x10;
  do {
    local_8 = (int *)0x0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puStack_24 = &LAB_0056aad4;
  ppuStack_28 = (undefined1 **)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&ppuStack_28;
  if (DAT_0067b4c9 == '\0') {
    ppuStack_2c = (undefined1 **)0x56a874;
    iVar8 = (**(code **)(**(int **)(DAT_0067b4b4 + 0x370) + 0x11c))();
    iVar4 = 0;
    if (-1 < iVar8 + -1) {
      local_c = 0;
      do {
        ppuStack_28 = &local_20;
        ppuStack_2c = (undefined1 **)0x56a894;
        FUN_00416244(&local_30,local_c,0xfc);
        ppuStack_2c = &local_30;
        local_30 = (undefined1 *)0x56a8a5;
        FUN_00416478(&local_40,"idsel");
        ppuVar2 = ppuStack_2c;
        ppuStack_2c = (undefined1 **)0x56a8b9;
        FUN_0050e448(*(undefined4 *)(DAT_0067b4b4 + 0x370),&local_40,ppuVar2);
        ppuStack_2c = (undefined1 **)0x56a8c4;
        FUN_00404b6c(&stack0xffffffe4,local_20);
        ppuStack_2c = (undefined1 **)0x56a8cc;
        iVar3 = FUN_00409ff8(unaff_EDI);
        iVar4 = local_c;
        if (param_2 == iVar3) break;
        local_c = local_c + 1;
        iVar8 = iVar8 + -1;
        iVar4 = 0;
      } while (iVar8 != 0);
    }
  }
  else {
    ppuStack_2c = (undefined1 **)0x56a85c;
    local_20 = &stack0xfffffffc;
    iVar4 = (**(code **)(**(int **)(DAT_0067b4b4 + 0x370) + 0x138))();
  }
  local_10 = 0;
  iVar8 = 0;
  local_c = 1;
  puVar5 = &DAT_0067b4f0;
  puVar6 = &DAT_0067b4d0;
  do {
    if (puVar5[param_2 * 0x6d4 + 0x38] != '\0') {
      bVar7 = (byte)puVar5[param_2 * 0x6d4 + 0x38] == 0xffffffff;
      ppuStack_2c = (undefined1 **)0x56a91f;
      FUN_00403180(puVar5 + param_2 * 0x6d4 + 0x38,&DAT_0056aaf4);
      if (!bVar7) {
        if (*(int *)(puVar6 + param_2 * 0x6d4 + 0x4b8) == 0) {
          iVar8 = iVar8 + 1;
        }
        else {
          local_10 = local_10 + 1;
        }
      }
    }
    local_c = local_c + 1;
    puVar6 = puVar6 + 4;
    puVar5 = puVar5 + 0x24;
  } while (local_c != 0x1d);
  (&DAT_0067bb64)[param_2 * 0x6d4] = 0xb;
  if ((iVar8 < 1) || (local_10 < 0xf)) {
    (&DAT_0067b518)[param_2 * 0x6d4] = 0;
    ppuStack_2c = *(undefined1 ***)(PTR_DAT_0066b294 + param_2 * 4);
    local_30 = (undefined1 *)0x56a9d1;
    FUN_00416244(local_70,iVar4,0xfc);
    local_30 = local_70;
    pcStack_34 = (char *)0x56a9e2;
    FUN_00416478(local_80,"selnome");
    puVar1 = local_30;
    local_30 = (undefined1 *)0x56a9f6;
    FUN_0050e9b8(*(undefined4 *)(DAT_0067b4b4 + 0x370),local_80,puVar1);
  }
  else {
    (&DAT_0067b518)[param_2 * 0x6d4] = 1;
    ppuStack_2c = *(undefined1 ***)(PTR_DAT_0066b294 + param_2 * 4);
    local_30 = (undefined1 *)0x56a986;
    FUN_00416244(local_50,iVar4,0xfc);
    local_30 = local_50;
    pcStack_34 = (char *)0x56a997;
    FUN_00416478(local_60,"selnome");
    puVar1 = local_30;
    local_30 = (undefined1 *)0x56a9ab;
    FUN_0050e9b8(*(undefined4 *)(DAT_0067b4b4 + 0x370),local_60,puVar1);
  }
  local_30 = (undefined1 *)0xffff;
  pcStack_34 = "teams/selecoes/";
  uStack_38 = 0x56aa0d;
  FUN_00409dd8(param_2,&local_88);
  uStack_38 = local_88;
  puStack_3c = &DAT_0056ab2c;
  local_40 = (undefined1 *)0x56aa25;
  FUN_00404c64(&local_84,3);
  local_40 = (undefined1 *)0x56aa34;
  local_8 = (int *)FUN_00420dec(PTR_PTR_0041bfa0,1,local_84);
  local_40 = &LAB_0056aa8c;
  iStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_44;
  local_c = 1;
  uStack_48 = 0x56aa5c;
  puStack_3c = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x10))(local_8,&local_c,4);
  uStack_48 = 0x56aa76;
  (**(code **)(*local_8 + 0x10))(local_8,&DAT_0067b4cc + param_2 * 0x6d4,0x6d4);
  puVar5 = puStack_3c;
  *in_FS_OFFSET = iStack_44;
  puStack_3c = &LAB_0056aa93;
  local_40 = (undefined1 *)0x56aa8b;
  FUN_00403a84(local_8,iStack_44,puVar5);
  return;
}

