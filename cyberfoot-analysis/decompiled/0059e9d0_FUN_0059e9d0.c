// Address: 0059e9d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0059e9d0(int param_1,int param_2,undefined4 param_3,undefined1 **param_4)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined4 *local_60;
  undefined1 local_5c [16];
  undefined4 local_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 **local_3c;
  undefined1 **local_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *local_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  iVar6 = 0x1e;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  LOCK();
  UNLOCK();
  puStack_24 = &LAB_0059f026;
  local_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_8 = 0;
  puStack_30 = &LAB_0059ea85;
  puStack_34 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_34;
  if (((param_2 == 3) || (param_2 == 4)) || (param_2 == 6)) {
    if (param_2 == 3) {
      local_38 = (undefined1 **)0x0;
      local_3c = param_4;
      puStack_40 = (undefined1 *)0x59ea59;
      puStack_2c = &stack0xfffffffc;
      puStack_20 = &stack0xfffffffc;
      local_8 = FUN_0064dee4(3,0xffffffff,0xffffffff);
      puVar2 = puStack_2c;
      puVar3 = puStack_20;
    }
    else if ((param_2 == 4) || (puVar2 = &stack0xfffffffc, puVar3 = &stack0xfffffffc, param_2 == 6))
    {
      local_38 = (undefined1 **)0xffffffff;
      local_3c = (undefined1 **)0xffffffff;
      puStack_40 = (undefined1 *)0x59ea78;
      local_8 = FUN_0064dee4(param_2,0,0xffffffff);
      puVar2 = puStack_2c;
      puVar3 = puStack_20;
    }
  }
  else {
    local_38 = (undefined1 **)0xffffffff;
    local_3c = (undefined1 **)0xffffffff;
    puStack_40 = (undefined1 *)0x59ea3d;
    puStack_2c = &stack0xfffffffc;
    puStack_20 = &stack0xfffffffc;
    local_8 = FUN_0064dee4(param_2,*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140),param_4);
    puVar2 = puStack_2c;
    puVar3 = puStack_20;
  }
  puStack_20 = puVar3;
  puStack_2c = puVar2;
  puVar2 = puStack_2c;
  *in_FS_OFFSET = puStack_34;
  puStack_2c = (undefined1 *)0x59eaa9;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0xfff5,puVar2);
  puStack_2c = (undefined1 *)0x0;
  puStack_30 = (undefined1 *)0x59eac0;
  FUN_004060a8(&DAT_006d2408,PTR_DAT_0059e2d0,1);
  if ((param_2 == 1) || (param_2 == 2)) {
    puStack_2c = (undefined1 *)0x59ead9;
    iVar6 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
    if (1 < iVar6) {
      puStack_2c = (undefined1 *)0x59eae9;
      FUN_00466128(*(undefined4 *)(param_1 + 0x330),1);
    }
  }
  else {
    puStack_2c = (undefined1 *)0x59eaf8;
    FUN_00466128(*(undefined4 *)(param_1 + 0x330),0);
  }
  puStack_2c = (undefined1 *)0x59eb04;
  local_c = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b6b4);
  if (-1 < local_c) {
    local_c = local_c + 1;
    iVar6 = 0;
    do {
      if (*(int *)(*(int *)PTR_DAT_0066b6b4 + 8 + iVar6 * 0x10) == local_8) {
        puStack_2c = (undefined1 *)0x59eb34;
        iVar4 = FUN_00405eec(DAT_006d2408);
        puStack_2c = (undefined1 *)(iVar4 + 1);
        puStack_30 = (undefined1 *)0x59eb4b;
        FUN_004060a8(&DAT_006d2408,PTR_DAT_0059e2d0,1);
        puStack_2c = (undefined1 *)0x59eb58;
        iVar4 = FUN_00405ef4(DAT_006d2408);
        *(undefined4 *)(DAT_006d2408 + iVar4 * 0x10) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b6b4 + iVar6 * 0x10);
        puStack_2c = (undefined1 *)0x59eb7b;
        iVar4 = FUN_00405ef4(DAT_006d2408);
        *(undefined4 *)(DAT_006d2408 + 4 + iVar4 * 0x10) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b6b4 + 4 + iVar6 * 0x10);
        puStack_2c = (undefined1 *)0x59eba0;
        iVar4 = FUN_00405ef4(DAT_006d2408);
        *(undefined4 *)(DAT_006d2408 + 0xc + iVar4 * 0x10) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b6b4 + 0xc + iVar6 * 0x10);
        puStack_2c = (undefined1 *)0x59ebc7;
        local_10 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066ae58);
        if (-1 < local_10) {
          local_10 = local_10 + 1;
          iVar4 = 0;
          do {
            if ((*(int *)(*(int *)PTR_DAT_0066ae58 + iVar4 * 0x10) ==
                 *(int *)(*(int *)PTR_DAT_0066b6b4 + iVar6 * 0x10)) &&
               (*(int *)(*(int *)PTR_DAT_0066ae58 + 8 + iVar4 * 0x10) == local_8)) {
              puStack_2c = (undefined1 *)0x59ec10;
              iVar5 = FUN_00405ef4(DAT_006d2408);
              *(undefined4 *)(DAT_006d2408 + 8 + iVar5 * 0x10) =
                   *(undefined4 *)(*(int *)PTR_DAT_0066ae58 + 4 + iVar4 * 0x10);
              break;
            }
            iVar4 = iVar4 + 1;
            local_10 = local_10 + -1;
          } while (local_10 != 0);
        }
      }
      iVar6 = iVar6 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  puStack_2c = (undefined1 *)0x59ec4c;
  DAT_006d2404 = FUN_00405eec(DAT_006d2408);
  puStack_2c = (undefined1 *)(DAT_006d2404 + -1);
  puStack_30 = &LAB_0059e320;
  puStack_34 = (undefined1 *)0x59ec6e;
  FUN_004bcdb0(DAT_006d2408,0x10,0);
  puStack_34 = (undefined1 *)0x59ec7c;
  (**(code **)(**(int **)(param_1 + 0x2fc) + 0x1dc))();
  puStack_34 = (undefined1 *)0x59ec86;
  local_c = FUN_00405ef4(DAT_006d2408);
  if (-1 < local_c) {
    local_c = local_c + 1;
    iVar6 = 0;
    do {
      puStack_34 = (undefined1 *)0x59eca7;
      (**(code **)(**(int **)(param_1 + 0x2fc) + 0x1d0))(*(int **)(param_1 + 0x2fc),1);
      puStack_34 = (undefined1 *)0x59ecb2;
      FUN_00511cbc(*(undefined4 *)(param_1 + 0x2fc));
      puStack_34 = (undefined1 *)0x59ecc6;
      FUN_00409dd8(*(undefined4 *)(DAT_006d2408 + iVar6 * 0x10),&stack0xffffffe8);
      puStack_34 = (undefined1 *)0x59ecd1;
      FUN_004051d4(&stack0xffffffec,unaff_ESI);
      local_38 = (undefined1 **)0x59ece3;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x11c))();
      local_38 = (undefined1 **)0x59ecf0;
      FUN_00416244(&local_28,iVar4 + -1,0xfc);
      local_38 = &local_28;
      local_3c = (undefined1 **)0x59ed01;
      FUN_00416478(&local_38,&DAT_0059f044);
      ppuVar1 = local_38;
      local_38 = (undefined1 **)0x59ed10;
      FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2fc),&local_38,ppuVar1);
      local_38 = (undefined1 **)0x59ed2d;
      FUN_00405194(&local_3c,
                   *(int *)PTR_DAT_0066b5b8 + *(int *)(DAT_006d2408 + iVar6 * 0x10) * 0x130);
      local_38 = local_3c;
      local_3c = (undefined1 **)0x59ed3f;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x11c))();
      local_3c = (undefined1 **)0x59ed4c;
      FUN_00416244(&local_4c,iVar4 + -1,0xfc);
      local_3c = (undefined1 **)&local_4c;
      puStack_40 = (undefined1 *)0x59ed5d;
      FUN_00416478(local_5c,"nxjogador");
      ppuVar1 = local_3c;
      local_3c = (undefined1 **)0x59ed6c;
      FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2fc),local_5c,ppuVar1);
      local_3c = (undefined1 **)0x59ed8a;
      FUN_00405194(&local_60,
                   *(int *)PTR_DAT_0066af70 + *(int *)(DAT_006d2408 + 0xc + iVar6 * 0x10) * 0x2f8);
      local_3c = (undefined1 **)local_60;
      puStack_40 = (undefined1 *)0x59ed9c;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x11c))();
      puStack_40 = (undefined1 *)0x59eda9;
      FUN_00416244(local_70,iVar4 + -1,0xfc);
      puStack_40 = local_70;
      puStack_44 = (undefined1 *)0x59edba;
      FUN_00416478(local_80,"nxclube");
      puVar2 = puStack_40;
      puStack_40 = (undefined1 *)0x59edc9;
      FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2fc),local_80,puVar2);
      puStack_40 = (undefined1 *)0x59eddd;
      FUN_00409dd8(*(undefined4 *)(DAT_006d2408 + 4 + iVar6 * 0x10),&local_88);
      puStack_40 = (undefined1 *)0x59edeb;
      FUN_004051d4(&local_84,local_88);
      puStack_40 = (undefined1 *)local_84;
      puStack_44 = (undefined1 *)0x59edfd;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x11c))();
      puStack_44 = (undefined1 *)0x59ee0d;
      FUN_00416244(local_98,iVar4 + -1,0xfc);
      puStack_44 = local_98;
      puStack_48 = (undefined1 *)0x59ee24;
      FUN_00416478(local_a8,"nxgols");
      puVar2 = puStack_44;
      puStack_44 = (undefined1 *)0x59ee36;
      FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2fc),local_a8,puVar2);
      puStack_44 = (undefined1 *)0x59ee4a;
      FUN_00409dd8(*(undefined4 *)(DAT_006d2408 + 8 + iVar6 * 0x10),&local_b0);
      puStack_44 = (undefined1 *)0x59ee5b;
      FUN_004051d4(&local_ac,local_b0);
      puStack_44 = (undefined1 *)local_ac;
      puStack_48 = (undefined1 *)0x59ee70;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x11c))();
      puStack_48 = (undefined1 *)0x59ee80;
      FUN_00416244(local_c0,iVar4 + -1,0xfc);
      puStack_48 = local_c0;
      local_4c = (undefined1 *)0x59ee97;
      FUN_00416478(local_d0,"nxjogos");
      puVar2 = puStack_48;
      puStack_48 = (undefined1 *)0x59eea9;
      FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2fc),local_d0,puVar2);
      puStack_48 = (undefined1 *)0x59eebc;
      FUN_00409dd8(*(undefined4 *)(DAT_006d2408 + iVar6 * 0x10),&local_d8);
      puStack_48 = (undefined1 *)0x59eecd;
      FUN_004051d4(&local_d4,local_d8);
      puStack_48 = (undefined1 *)local_d4;
      local_4c = (undefined1 *)0x59eee2;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x11c))();
      puStack_34 = (undefined1 *)0x59eef2;
      FUN_00416244(local_e8,iVar4 + -1,0xfc);
      puStack_34 = local_e8;
      local_38 = (undefined1 **)0x59ef09;
      FUN_00416478(local_f8,"nxjogid");
      puVar2 = puStack_34;
      puStack_34 = (undefined1 *)0x59ef1b;
      FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2fc),local_f8,puVar2);
      puStack_34 = (undefined1 *)0x59ef26;
      FUN_00511cd0(*(undefined4 *)(param_1 + 0x2fc));
      iVar6 = iVar6 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  puStack_34 = (undefined1 *)0x59ef3e;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
  *in_FS_OFFSET = puStack_30;
  local_28 = &LAB_0059f030;
  puStack_2c = (undefined1 *)0x59ef61;
  FUN_00405744(local_f8,PTR_DAT_004010f8,2);
  puStack_2c = (undefined1 *)0x59ef6c;
  FUN_004048d4(&local_d8);
  puStack_2c = (undefined1 *)0x59ef77;
  FUN_00404ff0(&local_d4);
  puStack_2c = (undefined1 *)0x59ef8d;
  FUN_00405744(local_d0,PTR_DAT_004010f8,2);
  puStack_2c = (undefined1 *)0x59ef98;
  FUN_004048d4(&local_b0);
  puStack_2c = (undefined1 *)0x59efa3;
  FUN_00404ff0(&local_ac);
  puStack_2c = (undefined1 *)0x59efb9;
  FUN_00405744(local_a8,PTR_DAT_004010f8,2);
  puStack_2c = (undefined1 *)0x59efc4;
  FUN_004048d4(&local_88);
  puStack_2c = (undefined1 *)0x59efcc;
  FUN_00404ff0(&local_84);
  puStack_2c = (undefined1 *)0x59efdf;
  FUN_00405744(local_80,PTR_DAT_004010f8,2);
  puStack_2c = (undefined1 *)0x59efe7;
  FUN_00404ff0(&local_60);
  puStack_2c = (undefined1 *)0x59effa;
  FUN_00405744(local_5c,PTR_DAT_004010f8,2);
  puStack_2c = (undefined1 *)0x59f002;
  FUN_00404ff0(&local_3c);
  puStack_2c = (undefined1 *)0x59f015;
  FUN_00405744(&local_38,PTR_DAT_004010f8,2);
  puStack_2c = (undefined1 *)0x59f01d;
  FUN_004048d4(&stack0xffffffe8);
  puStack_2c = (undefined1 *)0x59f025;
  FUN_00404ff0(&stack0xffffffec);
  return;
}

