// Address: 005f16e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm77_gfindSelectCell(int param_1)

{
  int *piVar1;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *in_FS_OFFSET;
  undefined1 uVar7;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined4 local_68 [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  undefined4 local_40 [2];
  undefined4 uStack_38;
  undefined4 **ppuStack_34;
  undefined4 *local_30;
  undefined4 **local_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 *local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  iVar5 = 0x13;
  do {
    local_c = (undefined4 *)0x0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  LOCK();
  UNLOCK();
  puStack_24 = &LAB_005f1938;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_28;
  local_8 = 0x1000000;
  iVar5 = **(int **)(param_1 + 0x350);
  local_2c = (undefined4 **)0x5f171c;
  iVar5 = (**(code **)(iVar5 + 0x11c))(*(int **)(param_1 + 0x350),iVar5,0);
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    uVar7 = true;
    do {
      local_2c = &local_c;
      local_30 = (undefined4 *)0x5f173a;
      FUN_00416244(&stack0xffffffe4,iVar6,0xfc);
      local_30 = (undefined4 *)&stack0xffffffe4;
      ppuStack_34 = (undefined4 **)0x5f174b;
      FUN_00416478(&local_2c,"nxid2");
      puVar3 = local_30;
      local_30 = (undefined4 *)0x5f175a;
      FUN_0050e448(*(undefined4 *)(param_1 + 0x350),&local_2c,puVar3);
      local_30 = local_c;
      ppuStack_34 = &local_30;
      uStack_38 = 0x5f1770;
      uVar4 = (**(code **)(**(int **)(param_1 + 0x330) + 0x138))();
      local_30 = (undefined4 *)0x5f177c;
      FUN_00416244(local_40,uVar4,0xfc);
      local_30 = local_40;
      ppuStack_34 = (undefined4 **)0x5f178d;
      FUN_00416478(local_50,&DAT_005f1964);
      puVar3 = local_30;
      local_30 = (undefined4 *)0x5f179c;
      FUN_0050e448(*(undefined4 *)(param_1 + 0x330),local_50,puVar3);
      ppuVar2 = local_2c;
      local_2c = (undefined4 **)0x5f17a5;
      FUN_00405378(ppuVar2,local_30);
      if ((bool)uVar7) {
        local_8 = local_8 & 0xffffff;
        break;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
      uVar7 = iVar5 == 0;
    } while (!(bool)uVar7);
  }
  local_2c = (undefined4 **)&local_58;
  piVar1 = *(int **)(param_1 + 0x330);
  local_30 = (undefined4 *)0x5f17c9;
  uVar4 = (**(code **)(*piVar1 + 0x138))();
  local_30 = (undefined4 *)0x5f17d5;
  FUN_00416244(local_68,uVar4,0xfc);
  local_30 = local_68;
  ppuStack_34 = (undefined4 **)0x5f17e6;
  FUN_00416478(local_78,&DAT_005f1964);
  puVar3 = local_30;
  local_30 = (undefined4 *)0x5f17f1;
  FUN_0050e448(piVar1,local_78,puVar3);
  local_30 = (undefined4 *)0x5f17fc;
  FUN_00404b6c(&local_54,local_58);
  local_30 = (undefined4 *)0x5f1804;
  iVar5 = FUN_00409ff8(local_54);
  if ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar5 * 0x130) == 0) && (DAT_006d3f2c == 3)) {
    local_8 = local_8 & 0xffffff;
  }
  local_30 = &local_80;
  piVar1 = *(int **)(param_1 + 0x330);
  ppuStack_34 = (undefined4 **)0x5f1837;
  uVar4 = (**(code **)(*piVar1 + 0x138))();
  ppuStack_34 = (undefined4 **)0x5f1846;
  FUN_00416244(local_90,uVar4,0xfc);
  ppuStack_34 = (undefined4 **)local_90;
  uStack_38 = 0x5f185d;
  FUN_00416478(local_a0,&DAT_005f1964);
  ppuVar2 = ppuStack_34;
  ppuStack_34 = (undefined4 **)0x5f186b;
  FUN_0050e448(piVar1,local_a0,ppuVar2);
  ppuStack_34 = (undefined4 **)0x5f1876;
  FUN_00404b6c(&local_7c,local_80);
  ppuStack_34 = (undefined4 **)0x5f187e;
  iVar5 = FUN_00409ff8(local_7c);
  if ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar5 * 0x130) != 0) && (DAT_006d3f30 == 0x14)) {
    local_8 = local_8 & 0xffffff;
  }
  ppuStack_34 = (undefined4 **)0x5f18ab;
  (**(code **)(**(int **)(param_1 + 0x370) + 100))
            (*(int **)(param_1 + 0x370),
             CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b5b8 >> 8),local_8._3_1_));
  *in_FS_OFFSET = (int)local_30;
  puStack_28 = &LAB_005f1942;
  local_2c = (undefined4 **)0x5f18ce;
  FUN_00405744(local_a0,PTR_DAT_004010f8,2);
  local_2c = (undefined4 **)0x5f18d6;
  FUN_00404ff0(&local_80);
  local_2c = (undefined4 **)0x5f18de;
  FUN_004048d4(&local_7c);
  local_2c = (undefined4 **)0x5f18f1;
  FUN_00405744(local_78,PTR_DAT_004010f8,2);
  local_2c = (undefined4 **)0x5f18f9;
  FUN_00404ff0(&local_58);
  local_2c = (undefined4 **)0x5f1901;
  FUN_004048d4(&local_54);
  local_2c = (undefined4 **)0x5f1914;
  FUN_00405744(local_50,PTR_DAT_004010f8,2);
  local_2c = (undefined4 **)0x5f191c;
  FUN_00404ff0(&local_30);
  local_2c = (undefined4 **)0x5f192f;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  local_2c = (undefined4 **)0x5f1937;
  FUN_00404ff0(&local_c);
  return;
}

