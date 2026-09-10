// Address: 0059e35c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0059e35c(int param_1,char param_2)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  wchar_t *local_60;
  undefined1 local_5c [16];
  wchar_t local_4c [2];
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 **local_3c;
  undefined1 **local_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  int iStack_2c;
  undefined1 *local_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  
  puStack_20 = &stack0xfffffffc;
  iVar5 = 0x22;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puStack_24 = &LAB_0059e93a;
  local_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  iStack_2c = 0x59e392;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0xfff5);
  iStack_2c = 0x59e3a2;
  uVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxgolst");
  iStack_2c = 0x59e3a9;
  FUN_0050a804(uVar3,1);
  iStack_2c = 0x59e3b9;
  uVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxjogost");
  iStack_2c = 0x59e3c0;
  FUN_0050a804(uVar3,1);
  iStack_2c = 0x59e3cd;
  FUN_00466128(*(undefined4 *)(param_1 + 0x31c),1);
  iStack_2c = 0x59e3d9;
  FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  iVar7 = 0;
  iStack_2c = 0;
  puStack_30 = (undefined1 *)0x59e3f2;
  FUN_004060a8(&DAT_006d2408,PTR_DAT_0059e2d0,1);
  iVar5 = *(int *)(PTR_DAT_0066ac78 + 0x3c);
  iVar4 = *(int *)(PTR_DAT_0066ac78 + 0x40);
  iStack_2c = 0x59e416;
  local_10 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
  if (0 < local_10) {
    iVar6 = 1;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar6 * 0x130) <= iVar5 + iVar4 + -1) &&
         (0 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x104 + iVar6 * 0x130))) {
        iVar7 = iVar7 + 1;
        puStack_30 = (undefined1 *)0x59e466;
        iStack_2c = iVar7;
        FUN_004060a8(&DAT_006d2408,PTR_DAT_0059e2d0,1);
        *(int *)(DAT_006d2408 + -0x10 + iVar7 * 0x10) = iVar6;
        *(undefined4 *)(DAT_006d2408 + -0xc + iVar7 * 0x10) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x104 + iVar6 * 0x130);
        *(undefined4 *)(DAT_006d2408 + -8 + iVar7 * 0x10) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x10c + iVar6 * 0x130);
      }
      iVar6 = iVar6 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  iStack_2c = 0x59e4c5;
  DAT_006d2404 = FUN_00405eec(DAT_006d2408);
  iStack_2c = DAT_006d2404 + -1;
  puStack_30 = &LAB_0059e320;
  puStack_34 = (undefined1 *)0x59e4e7;
  FUN_004bcdb0(DAT_006d2408,0x10,0);
  puStack_34 = (undefined1 *)0x59e4f5;
  (**(code **)(**(int **)(param_1 + 0x2fc) + 0x1dc))();
  if (param_2 == '\0') {
    if (iVar7 < 0x65) {
      iVar7 = iVar7 + -1;
    }
    else {
      iVar7 = 99;
    }
  }
  else {
    iVar7 = iVar7 + -1;
    puStack_34 = (undefined1 *)0x59e50b;
    FUN_00466128(*(undefined4 *)(param_1 + 0x31c),0);
  }
  if (-1 < iVar7) {
    local_10 = iVar7 + 1;
    iVar5 = 0;
    do {
      puStack_34 = (undefined1 *)0x59e53d;
      (**(code **)(**(int **)(param_1 + 0x2fc) + 0x1d0))(*(int **)(param_1 + 0x2fc),1);
      puStack_34 = (undefined1 *)0x59e548;
      FUN_00511cbc(*(undefined4 *)(param_1 + 0x2fc));
      puStack_34 = (undefined1 *)0x59e55c;
      FUN_00409dd8(*(undefined4 *)(DAT_006d2408 + iVar5 * 0x10),&stack0xffffffe8);
      puStack_34 = (undefined1 *)0x59e567;
      FUN_004051d4(&stack0xffffffec,unaff_ESI);
      local_38 = (undefined1 **)0x59e579;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x11c))();
      local_38 = (undefined1 **)0x59e586;
      FUN_00416244(&local_28,iVar4 + -1,0xfc);
      local_38 = &local_28;
      local_3c = (undefined1 **)0x59e597;
      FUN_00416478(&local_38,&DAT_0059e978);
      ppuVar2 = local_38;
      local_38 = (undefined1 **)0x59e5a6;
      FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2fc),&local_38,ppuVar2);
      local_38 = (undefined1 **)0x59e5c3;
      FUN_00405194(&local_3c,
                   *(int *)PTR_DAT_0066b5b8 + *(int *)(DAT_006d2408 + iVar5 * 0x10) * 0x130);
      local_38 = local_3c;
      local_3c = (undefined1 **)0x59e5d5;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x11c))();
      local_3c = (undefined1 **)0x59e5e2;
      FUN_00416244(local_4c,iVar4 + -1,0xfc);
      local_3c = (undefined1 **)local_4c;
      puStack_40 = (undefined1 *)0x59e5f3;
      FUN_00416478(local_5c,"nxjogador");
      ppuVar2 = local_3c;
      local_3c = (undefined1 **)0x59e602;
      FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2fc),local_5c,ppuVar2);
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + *(int *)(DAT_006d2408 + iVar5 * 0x10) * 0x130)
          < 0) {
        local_3c = (undefined1 **)0x59e9a8;
        puStack_40 = (undefined1 *)0x59e698;
        iVar4 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x11c))();
        puStack_40 = (undefined1 *)0x59e6a8;
        FUN_00416244(local_90,iVar4 + -1,0xfc);
        puStack_40 = local_90;
        puStack_44 = (undefined1 *)0x59e6bf;
        FUN_00416478(local_a0,"nxclube");
        puVar1 = puStack_40;
        puStack_40 = (undefined1 *)0x59e6d1;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2fc),local_a0,puVar1);
      }
      else {
        local_3c = (undefined1 **)0x59e644;
        FUN_00405194(&local_60,
                     *(int *)PTR_DAT_0066af70 +
                     *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 +
                             *(int *)(DAT_006d2408 + iVar5 * 0x10) * 0x130) * 0x2f8);
        local_3c = (undefined1 **)local_60;
        puStack_40 = (undefined1 *)0x59e656;
        iVar4 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x11c))();
        puStack_40 = (undefined1 *)0x59e663;
        FUN_00416244(local_70,iVar4 + -1,0xfc);
        puStack_40 = local_70;
        puStack_44 = (undefined1 *)0x59e674;
        FUN_00416478(local_80,"nxclube");
        puVar1 = puStack_40;
        puStack_40 = (undefined1 *)0x59e683;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2fc),local_80,puVar1);
      }
      puStack_40 = (undefined1 *)0x59e6e5;
      FUN_00409dd8(*(undefined4 *)(DAT_006d2408 + 4 + iVar5 * 0x10),&local_a8);
      puStack_40 = (undefined1 *)0x59e6f6;
      FUN_004051d4(&local_a4,local_a8);
      puStack_40 = (undefined1 *)local_a4;
      puStack_44 = (undefined1 *)0x59e70b;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x11c))();
      puStack_44 = (undefined1 *)0x59e71b;
      FUN_00416244(local_b8,iVar4 + -1,0xfc);
      puStack_44 = local_b8;
      puStack_48 = (undefined1 *)0x59e732;
      FUN_00416478(local_c8,"nxgolst");
      puVar1 = puStack_44;
      puStack_44 = (undefined1 *)0x59e744;
      FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2fc),local_c8,puVar1);
      puStack_44 = (undefined1 *)0x59e758;
      FUN_00409dd8(*(undefined4 *)(DAT_006d2408 + 8 + iVar5 * 0x10),&local_d0);
      puStack_44 = (undefined1 *)0x59e769;
      FUN_004051d4(&local_cc,local_d0);
      puStack_44 = (undefined1 *)local_cc;
      puStack_48 = (undefined1 *)0x59e77e;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x11c))();
      puStack_48 = (undefined1 *)0x59e78e;
      FUN_00416244(local_e0,iVar4 + -1,0xfc);
      puStack_48 = local_e0;
      local_4c = (wchar_t  [2])0x59e7a5;
      FUN_00416478(local_f0,"nxjogost");
      puVar1 = puStack_48;
      puStack_48 = (undefined1 *)0x59e7b7;
      FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2fc),local_f0,puVar1);
      puStack_48 = (undefined1 *)0x59e7ca;
      FUN_00409dd8(*(undefined4 *)(DAT_006d2408 + iVar5 * 0x10),&local_f8);
      puStack_48 = (undefined1 *)0x59e7db;
      FUN_004051d4(&local_f4,local_f8);
      puStack_48 = (undefined1 *)local_f4;
      local_4c = (wchar_t  [2])0x59e7f0;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x11c))();
      puStack_34 = (undefined1 *)0x59e800;
      FUN_00416244(local_108,iVar4 + -1,0xfc);
      puStack_34 = local_108;
      local_38 = (undefined1 **)0x59e817;
      FUN_00416478(local_118,"nxjogid");
      puVar1 = puStack_34;
      puStack_34 = (undefined1 *)0x59e829;
      FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2fc),local_118,puVar1);
      puStack_34 = (undefined1 *)0x59e834;
      FUN_00511cd0(*(undefined4 *)(param_1 + 0x2fc));
      iVar5 = iVar5 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  puStack_34 = (undefined1 *)0x59e84c;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
  *in_FS_OFFSET = puStack_30;
  local_28 = &LAB_0059e944;
  iStack_2c = 0x59e86f;
  FUN_00405744(local_118,PTR_DAT_004010f8,2);
  iStack_2c = 0x59e87a;
  FUN_004048d4(&local_f8);
  iStack_2c = 0x59e885;
  FUN_00404ff0(&local_f4);
  iStack_2c = 0x59e89b;
  FUN_00405744(local_f0,PTR_DAT_004010f8,2);
  iStack_2c = 0x59e8a6;
  FUN_004048d4(&local_d0);
  iStack_2c = 0x59e8b1;
  FUN_00404ff0(&local_cc);
  iStack_2c = 0x59e8c7;
  FUN_00405744(local_c8,PTR_DAT_004010f8,2);
  iStack_2c = 0x59e8d2;
  FUN_004048d4(&local_a8);
  iStack_2c = 0x59e8dd;
  FUN_00404ff0(&local_a4);
  iStack_2c = 0x59e8f3;
  FUN_00405744(local_a0,PTR_DAT_004010f8,4);
  iStack_2c = 0x59e8fb;
  FUN_00404ff0(&local_60);
  iStack_2c = 0x59e90e;
  FUN_00405744(local_5c,PTR_DAT_004010f8,2);
  iStack_2c = 0x59e916;
  FUN_00404ff0(&local_3c);
  iStack_2c = 0x59e929;
  FUN_00405744(&local_38,PTR_DAT_004010f8,2);
  iStack_2c = 0x59e931;
  FUN_004048d4(&stack0xffffffe8);
  iStack_2c = 0x59e939;
  FUN_00404ff0(&stack0xffffffec);
  return;
}

