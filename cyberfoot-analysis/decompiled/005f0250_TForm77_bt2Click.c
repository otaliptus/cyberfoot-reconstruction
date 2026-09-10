// Address: 005f0250
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm77_bt2Click(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 **ppuVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *in_FS_OFFSET;
  undefined1 local_80 [16];
  undefined4 local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [12];
  undefined4 uStack_3c;
  undefined4 *local_38;
  undefined1 *local_34;
  undefined4 **local_30;
  int *piStack_2c;
  undefined4 *puStack_28;
  undefined1 *puStack_24;
  undefined4 *local_20;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  puVar1 = PTR_DAT_0066b544;
  local_20 = (undefined4 *)&stack0xfffffffc;
  local_10 = 0xf;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  puStack_24 = &LAB_005f050f;
  puStack_28 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_28;
  piStack_2c = (int *)0x5f0286;
  local_8 = param_1;
  iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
  if (0 < iVar5) {
    iVar7 = 1;
    do {
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar7 * 0x130) ==
          *(int *)(PTR_DAT_0066ac78 + *(int *)PTR_DAT_0066b710 * 4 + 0x600)) {
        piStack_2c = (int *)0x5f02c2;
        iVar6 = FUN_00405eec(*(undefined4 *)puVar1);
        piStack_2c = (int *)(iVar6 + 1);
        local_30 = (undefined4 **)0x5f02d6;
        FUN_004060a8(puVar1,PTR_DAT_00488cc0,1);
        piStack_2c = (int *)0x5f02e0;
        iVar6 = FUN_00405ef4(*(undefined4 *)puVar1);
        *(int *)(*(int *)puVar1 + iVar6 * 8) = iVar7;
        piStack_2c = (int *)0x5f02ec;
        iVar6 = FUN_00405ef4(*(undefined4 *)puVar1);
        *(undefined4 *)(*(int *)puVar1 + 4 + iVar6 * 8) =
             *(undefined4 *)(PTR_DAT_0066ac78 + *(int *)PTR_DAT_0066b710 * 4 + 0x600);
        *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar7 * 0x130) = 0xffffffff;
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  piStack_2c = (int *)0x5f0336;
  iVar5 = (**(code **)(**(int **)(local_8 + 0x350) + 0x11c))();
  if (-1 < iVar5 + -1) {
    iVar7 = 0;
    do {
      piStack_2c = (int *)0x5f034b;
      iVar6 = FUN_00405eec(*(undefined4 *)puVar1);
      piStack_2c = (int *)(iVar6 + 1);
      local_30 = (undefined4 **)0x5f035f;
      FUN_004060a8(puVar1,PTR_DAT_00488cc0,1);
      piStack_2c = &local_10;
      local_30 = (undefined4 **)0x5f0372;
      FUN_00416244(&local_20,iVar7,0xfc);
      local_30 = &local_20;
      local_34 = (undefined1 *)0x5f0383;
      FUN_00416478(&local_30,"nxid2");
      ppuVar4 = local_30;
      local_30 = (undefined4 **)0x5f0395;
      FUN_0050e448(*(undefined4 *)(local_8 + 0x350),&local_30,ppuVar4);
      local_30 = (undefined4 **)0x5f03a0;
      FUN_00404b6c(&local_c,local_10);
      local_30 = (undefined4 **)0x5f03a8;
      local_30 = (undefined4 **)FUN_00409ff8(local_c);
      local_34 = (undefined1 *)0x5f03b0;
      iVar6 = FUN_00405ef4(*(undefined4 *)puVar1);
      *(undefined4 ***)(*(int *)puVar1 + iVar6 * 8) = local_30;
      local_30 = &local_38;
      local_34 = (undefined1 *)0x5f03c6;
      FUN_00416244(local_48,iVar7,0xfc);
      local_34 = local_48;
      local_38 = (undefined4 *)0x5f03d7;
      FUN_00416478(local_58,"nxid2");
      puVar3 = local_34;
      local_34 = (undefined1 *)0x5f03e9;
      FUN_0050e448(*(undefined4 *)(local_8 + 0x350),local_58,puVar3);
      local_34 = (undefined1 *)0x5f03f4;
      FUN_00404b6c(&local_34,local_38);
      puVar3 = local_34;
      local_34 = (undefined1 *)0x5f03fc;
      iVar6 = FUN_00409ff8(puVar3);
      local_34 = *(undefined1 **)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar6 * 0x130);
      local_38 = (undefined4 *)0x5f0412;
      iVar6 = FUN_00405ef4(*(undefined4 *)puVar1);
      *(undefined1 **)(*(int *)puVar1 + 4 + iVar6 * 8) = local_34;
      puStack_28 = &local_60;
      local_38 = (undefined4 *)0x5f0429;
      FUN_00416244(local_70,iVar7,0xfc);
      local_38 = local_70;
      uStack_3c = 0x5f043a;
      FUN_00416478(local_80,"nxid2");
      puVar2 = local_38;
      local_38 = (undefined4 *)0x5f044c;
      FUN_0050e448(*(undefined4 *)(local_8 + 0x350),local_80,puVar2);
      local_38 = (undefined4 *)0x5f0457;
      FUN_00404b6c(&local_5c,local_60);
      local_38 = (undefined4 *)0x5f045f;
      iVar6 = FUN_00409ff8(local_5c);
      local_38 = (undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar6 * 0x130);
      *local_38 = *(undefined4 *)(PTR_DAT_0066ac78 + *(int *)PTR_DAT_0066b710 * 4 + 0x600);
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  piStack_2c = (int *)0x5f0498;
  FUN_00483bc4(DAT_006d3f28);
  *in_FS_OFFSET = (int)puStack_28;
  local_20 = (undefined4 *)&LAB_005f0516;
  puStack_24 = (undefined1 *)0x5f04b8;
  FUN_00405744(local_80,PTR_DAT_004010f8,2);
  puStack_24 = (undefined1 *)0x5f04c0;
  FUN_00404ff0(&local_60);
  puStack_24 = (undefined1 *)0x5f04c8;
  FUN_004048d4(&local_5c);
  puStack_24 = (undefined1 *)0x5f04db;
  FUN_00405744(local_58,PTR_DAT_004010f8,2);
  puStack_24 = (undefined1 *)0x5f04e3;
  FUN_00404ff0(&local_38);
  puStack_24 = (undefined1 *)0x5f04eb;
  FUN_004048d4(&local_34);
  puStack_24 = (undefined1 *)0x5f04fe;
  FUN_00405744(&local_30,PTR_DAT_004010f8,2);
  puStack_24 = (undefined1 *)0x5f0506;
  FUN_00404ff0(&local_10);
  puStack_24 = (undefined1 *)0x5f050e;
  FUN_004048d4(&local_c);
  return;
}

