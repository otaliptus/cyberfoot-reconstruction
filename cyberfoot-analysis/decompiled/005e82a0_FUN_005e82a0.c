// Address: 005e82a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005e82a0(int param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *in_FS_OFFSET;
  undefined1 uVar9;
  undefined1 local_1ac [16];
  undefined1 local_19c [16];
  undefined1 local_18c [16];
  undefined1 local_17c [16];
  undefined4 local_16c;
  undefined4 local_168;
  undefined *local_164;
  undefined *local_160;
  undefined *local_15c;
  undefined4 local_158;
  undefined1 local_154 [16];
  undefined1 local_144 [16];
  undefined *local_134;
  undefined4 local_130;
  undefined1 local_12c [16];
  undefined1 local_11c [16];
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_104 [16];
  undefined4 local_f4 [4];
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 local_dc [16];
  undefined4 local_cc [4];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b4 [16];
  undefined4 local_a4 [4];
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64 [16];
  undefined1 local_54 [12];
  undefined4 uStack_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  int *local_30;
  undefined4 *local_2c;
  undefined4 **local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  int iVar10;
  int local_c;
  
  local_1c = &stack0xfffffffc;
  iVar7 = 0x35;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_20 = (undefined4 *)&LAB_005e8bda;
  local_24 = (undefined **)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  local_28 = (undefined4 **)0x0;
  local_2c = (undefined4 *)0x5e82dc;
  FUN_004060a8(&DAT_006d34f0,PTR_DAT_005e5190,1);
  local_c = 0;
  local_28 = (undefined4 **)0x5e82f2;
  puVar2 = (undefined1 *)(**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
  if (-1 < (int)(puVar2 + -1)) {
    uVar9 = 0;
    iVar7 = 0;
    local_1c = puVar2;
    do {
      local_28 = &local_34;
      local_2c = (undefined4 *)0x5e8316;
      (**(code **)(**(int **)(param_1 + 0x304) + 0x100))(*(int **)(param_1 + 0x304),0x10,iVar7);
      local_28 = (undefined4 **)0x5e8323;
      FUN_00405378(local_34,&DAT_005e8bf0);
      if ((bool)uVar9) {
        local_28 = (undefined4 **)&DAT_005e8bf8;
        local_2c = (undefined4 *)0x5e833f;
        (**(code **)(**(int **)(param_1 + 0x304) + 0x194))(*(int **)(param_1 + 0x304),0x10,iVar7);
      }
      iVar7 = iVar7 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != (undefined1 *)0x0);
  }
  local_28 = (undefined4 **)0x5e8353;
  puVar2 = (undefined1 *)(**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
  if (-1 < (int)(puVar2 + -1)) {
    iVar7 = 0;
    uVar9 = true;
    local_1c = puVar2;
    do {
      local_28 = &local_38;
      local_2c = (undefined4 *)0x5e837b;
      (**(code **)(**(int **)(param_1 + 0x304) + 0x100))(*(int **)(param_1 + 0x304),0x10,iVar7);
      local_28 = (undefined4 **)0x5e8388;
      FUN_00405378(local_38,&DAT_005e8bf0);
      if (!(bool)uVar9) {
        local_28 = &local_3c;
        local_2c = (undefined4 *)0x5e83a7;
        (**(code **)(**(int **)(param_1 + 0x304) + 0x100))(*(int **)(param_1 + 0x304),0x10,iVar7);
        local_28 = (undefined4 **)0x5e83b4;
        FUN_00405378(local_3c,&DAT_005e8c00);
        if (!(bool)uVar9) {
          local_c = local_c + 1;
          local_2c = (undefined4 *)0x5e83d6;
          local_28 = (undefined4 **)local_c;
          FUN_004060a8(&DAT_006d34f0,PTR_DAT_005e5190,1);
          local_28 = (undefined4 **)&local_44;
          local_2c = (undefined4 *)0x5e83e9;
          FUN_00416244(local_54,iVar7,0xfc);
          local_2c = (undefined4 *)local_54;
          local_30 = (int *)0x5e83fa;
          FUN_00416478(local_64,&DAT_005e8c0c);
          puVar8 = local_2c;
          local_2c = (undefined4 *)0x5e8409;
          FUN_0050e448(*(undefined4 *)(param_1 + 0x304),local_64,puVar8);
          local_2c = (undefined4 *)0x5e8414;
          FUN_00404b6c(&local_40,local_44);
          local_2c = (undefined4 *)0x5e841c;
          uVar3 = FUN_00409ff8(local_40);
          *(undefined4 *)(DAT_006d34f0 + -0x24 + local_c * 0x24) = uVar3;
          *(int *)(DAT_006d34f0 + -0x20 + local_c * 0x24) = iVar7;
          local_2c = &local_6c;
          local_30 = (int *)0x5e8445;
          FUN_00416244(local_7c,iVar7,0xfc);
          local_30 = (int *)local_7c;
          local_34 = (undefined4 *)0x5e8459;
          FUN_00416478(local_8c,&DAT_005e8c0c);
          piVar1 = local_30;
          local_30 = (int *)0x5e846b;
          FUN_0050e448(*(undefined4 *)(param_1 + 0x304),local_8c,piVar1);
          local_30 = (int *)0x5e8476;
          FUN_00404b6c(&local_68,local_6c);
          local_30 = (int *)0x5e847e;
          iVar4 = FUN_00409ff8(local_68);
          *(undefined4 *)(DAT_006d34f0 + -0x1c + local_c * 0x24) =
               *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar4 * 0x130);
          *(undefined4 *)(DAT_006d34f0 + -0x14 + local_c * 0x24) = 0;
          local_30 = &local_94;
          local_34 = (undefined4 *)0x5e84b8;
          FUN_00416244(local_a4,iVar7,0xfc);
          local_34 = local_a4;
          local_38 = (undefined4 *)0x5e84cf;
          FUN_00416478(local_b4,&DAT_005e8c0c);
          puVar8 = local_34;
          local_34 = (undefined4 *)0x5e84e1;
          FUN_0050e448(*(undefined4 *)(param_1 + 0x304),local_b4,puVar8);
          local_34 = (undefined4 *)0x5e84f2;
          FUN_00404b6c(&local_90,local_94);
          local_34 = (undefined4 *)0x5e84fd;
          iVar4 = FUN_00409ff8(local_90);
          *(undefined4 *)(DAT_006d34f0 + -0x18 + local_c * 0x24) =
               *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + iVar4 * 0x130);
          local_34 = &local_bc;
          local_38 = (undefined4 *)0x5e852c;
          FUN_00416244(local_cc,iVar7,0xfc);
          local_38 = local_cc;
          local_3c = (undefined4 *)0x5e8543;
          FUN_00416478(local_dc,&DAT_005e8c0c);
          puVar8 = local_38;
          local_38 = (undefined4 *)0x5e8555;
          FUN_0050e448(*(undefined4 *)(param_1 + 0x304),local_dc,puVar8);
          local_38 = (undefined4 *)0x5e8566;
          FUN_00404b6c(&local_b8,local_bc);
          local_38 = (undefined4 *)0x5e8571;
          iVar4 = FUN_00409ff8(local_b8);
          *(undefined4 *)(DAT_006d34f0 + -0x10 + local_c * 0x24) =
               *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x2c + iVar4 * 0x130);
          local_38 = &local_e4;
          local_3c = (undefined4 *)0x5e85a0;
          FUN_00416244(local_f4,iVar7,0xfc);
          local_3c = local_f4;
          local_40 = (undefined1 *)0x5e85b7;
          FUN_00416478(local_104,&DAT_005e8c0c);
          puVar8 = local_3c;
          local_3c = (undefined4 *)0x5e85c9;
          FUN_0050e448(*(undefined4 *)(param_1 + 0x304),local_104,puVar8);
          local_3c = (undefined4 *)0x5e85da;
          FUN_00404b6c(&local_e0,local_e4);
          local_3c = (undefined4 *)0x5e85e5;
          iVar4 = FUN_00409ff8(local_e0);
          *(undefined4 *)(DAT_006d34f0 + -0xc + local_c * 0x24) =
               *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar4 * 0x130);
          local_3c = &local_10c;
          local_40 = (undefined1 *)0x5e8614;
          FUN_00416244(local_11c,iVar7,0xfc);
          local_40 = local_11c;
          local_44 = (undefined1 *)0x5e862b;
          FUN_00416478(local_12c,&DAT_005e8c0c);
          puVar2 = local_40;
          local_40 = (undefined1 *)0x5e863d;
          FUN_0050e448(*(undefined4 *)(param_1 + 0x304),local_12c,puVar2);
          local_40 = (undefined1 *)0x5e864e;
          FUN_00404b6c(&local_108,local_10c);
          local_40 = (undefined1 *)0x5e8659;
          iVar4 = FUN_00409ff8(local_108);
          *(undefined4 *)(DAT_006d34f0 + -8 + local_c * 0x24) =
               *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x58 + iVar4 * 0x130);
          *(undefined4 *)(DAT_006d34f0 + -4 + local_c * 0x24) = 0;
          local_24 = &local_134;
          local_44 = (undefined1 *)0x5e8693;
          FUN_00416244(local_144,iVar7,0xfc);
          local_44 = local_144;
          uStack_48 = 0x5e86aa;
          FUN_00416478(local_154,&DAT_005e8c0c);
          puVar2 = local_44;
          local_44 = (undefined1 *)0x5e86bc;
          FUN_0050e448(*(undefined4 *)(param_1 + 0x304),local_154,puVar2);
          local_44 = (undefined1 *)0x5e86cd;
          FUN_00404b6c(&local_130,local_134);
          local_44 = (undefined1 *)0x5e86d8;
          iVar4 = FUN_00409ff8(local_130);
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x50 + iVar4 * 0x130) = 0;
        }
      }
      iVar7 = iVar7 + 1;
      local_1c = local_1c + -1;
      uVar9 = local_1c == (undefined1 *)0x0;
    } while (!(bool)uVar9);
  }
  local_28 = (undefined4 **)0x5e86fd;
  DAT_006d34f4 = FUN_00405eec(DAT_006d34f0);
  local_28 = (undefined4 **)(DAT_006d34f4 + -1);
  local_2c = (undefined4 *)&LAB_005e8248;
  local_30 = (int *)0x5e871f;
  FUN_004bcdb0(DAT_006d34f0,0x24,0);
  iVar7 = 0xb;
  iVar4 = 1;
  local_20 = &DAT_006d34f8;
  local_24 = (undefined **)&DAT_006d3630;
  local_28 = (undefined4 **)(PTR_DAT_0066ac38 + 4);
  local_2c = (undefined4 *)(PTR_DAT_0066b6f0 + -0x84);
  puVar8 = &DAT_006d3684;
  do {
    local_30 = (int *)0x5e8769;
    FUN_00545088(*local_20,0);
    local_30 = (int *)0x5e8775;
    FUN_004e1414(*local_24,0);
    if (iVar4 < 0xc) {
      local_30 = (int *)0x5e879b;
      iVar5 = FUN_005e9a30(param_1,PTR_DAT_0066b734 +
                                   (int)local_28[param_2 * 0xb + -0xc] * 0xc + -0xc,
                           local_28[param_2 * 0xb + -0xc]);
    }
    else {
      local_30 = (int *)0x5e87af;
      iVar5 = FUN_005e9a30(param_1,local_2c,0xffffffff);
    }
    *puVar8 = 0xffffffff;
    puVar8[-1] = 0xffffffff;
    iVar10 = *local_30;
    local_30 = (int *)0x5e87d5;
    (**(code **)(**(int **)(iVar10 + 0x168) + 8))(*(int **)(iVar10 + 0x168),DAT_006d35d0);
    if (0 < iVar5) {
      iVar10 = iVar4;
      if (0xb < iVar4) {
        iVar7 = iVar7 + 1;
        iVar10 = iVar7;
      }
      *(int *)(&DAT_006d3674 + iVar10 * 0x10) = iVar5;
      if (iVar4 < 0xc) {
        *(undefined4 **)(&DAT_006d3668 + iVar10 * 0x10) = local_28[param_2 * 0xb + -0xc];
        *(undefined4 *)(iVar10 * 0x10 + 0x6d3670) = 1;
      }
      else {
        *(undefined4 *)(&DAT_006d3668 + iVar10 * 0x10) = 0xffffffff;
        *(undefined4 *)(iVar10 * 0x10 + 0x6d3670) = 2;
      }
      if (iVar4 == 1) {
        local_30 = (int *)0x5e8862;
        (**(code **)(**(int **)((&DAT_006d35e4)[iVar10] + 0x168) + 8))
                  (*(int **)((&DAT_006d35e4)[iVar10] + 0x168),DAT_006d35d8);
      }
      else if (iVar4 < 0xc) {
        local_30 = (int *)0x5e8884;
        (**(code **)(**(int **)((&DAT_006d35e4)[iVar10] + 0x168) + 8))
                  (*(int **)((&DAT_006d35e4)[iVar10] + 0x168),DAT_006d35d4);
      }
      else {
        local_30 = (int *)0x5e88a1;
        (**(code **)(**(int **)((&DAT_006d35e4)[iVar10] + 0x168) + 8))
                  (*(int **)((&DAT_006d35e4)[iVar10] + 0x168),DAT_006d35dc);
      }
      if (0 < iVar5) {
        local_30 = (int *)0x5e88b4;
        FUN_005ea21c(param_1,iVar10,iVar5);
      }
      local_30 = (int *)0x5e88c4;
      FUN_005e9970(param_1,*(undefined4 *)(PTR_DAT_0066ac78 + 8));
    }
    iVar4 = iVar4 + 1;
    puVar8 = puVar8 + 4;
    local_2c = (undefined4 *)((int)local_2c + 0xc);
    local_28 = local_28 + 1;
    local_24 = local_24 + 1;
    local_20 = local_20 + 1;
  } while (iVar4 != 0x13);
  local_30 = (int *)0x5e88f3;
  puVar2 = (undefined1 *)(**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
  if (-1 < (int)(puVar2 + -1)) {
    iVar7 = 0;
    uVar9 = true;
    local_1c = puVar2;
    do {
      local_30 = &local_158;
      local_34 = (undefined4 *)0x5e891e;
      (**(code **)(**(int **)(param_1 + 0x304) + 0x100))(*(int **)(param_1 + 0x304),0x10,iVar7);
      local_24 = (undefined **)0x5e892e;
      FUN_00405378(local_158,&DAT_005e8bf8);
      if ((bool)uVar9) {
LAB_005e8990:
        local_24 = &local_164;
        local_28 = (undefined4 **)&local_16c;
        local_2c = (undefined4 *)0x5e89ad;
        FUN_00416244(local_17c,iVar7,0xfc);
        local_2c = (undefined4 *)local_17c;
        local_30 = (int *)0x5e89c4;
        FUN_00416478(local_18c,&DAT_005e8c0c);
        puVar8 = local_2c;
        uVar3 = *(undefined4 *)(param_1 + 0x304);
        local_2c = (undefined4 *)0x5e89d8;
        FUN_0050e448(uVar3,local_18c,puVar8);
        local_2c = (undefined4 *)0x5e89e9;
        FUN_00404b6c(&local_168,local_16c);
        local_2c = (undefined4 *)0x5e89f4;
        uVar6 = FUN_00409ff8(local_168);
        local_2c = (undefined4 *)0x5e89ff;
        FUN_005e9de8(param_1,uVar6,iVar7);
        local_2c = (undefined4 *)local_164;
        local_30 = (int *)0x5e8a15;
        FUN_00416244(local_19c,iVar7,0xfc);
        local_30 = (int *)local_19c;
        local_34 = (undefined4 *)0x5e8a2c;
        FUN_00416478(local_1ac,"status");
        piVar1 = local_30;
        local_30 = (int *)0x5e8a3a;
        FUN_0050e9b8(uVar3,local_1ac,piVar1);
      }
      else {
        local_24 = &local_15c;
        local_28 = (undefined4 **)0x5e894c;
        (**(code **)(**(int **)(param_1 + 0x304) + 0x100))(*(int **)(param_1 + 0x304),0x10,iVar7);
        local_24 = (undefined **)0x5e895c;
        FUN_00405378(local_15c,&DAT_005e8c14);
        if ((bool)uVar9) goto LAB_005e8990;
        local_24 = &local_160;
        local_28 = (undefined4 **)0x5e897a;
        (**(code **)(**(int **)(param_1 + 0x304) + 0x100))(*(int **)(param_1 + 0x304),0x10,iVar7);
        local_30 = (undefined4 *)0x5e898a;
        FUN_00405378(local_160,&DAT_005e8c1c);
        if ((bool)uVar9) goto LAB_005e8990;
      }
      iVar7 = iVar7 + 1;
      local_1c = local_1c + -1;
      uVar9 = local_1c == (undefined1 *)0x0;
    } while (!(bool)uVar9);
  }
  local_30 = (int *)0x0;
  local_34 = (undefined4 *)0x5e8a5b;
  FUN_004060a8(&DAT_006d34f0,PTR_DAT_005e5190,1);
  *in_FS_OFFSET = (int)local_2c;
  local_24 = (undefined **)&LAB_005e8be4;
  local_28 = (undefined4 **)0x5e8a81;
  FUN_00405744(local_1ac,PTR_DAT_004010f8,4);
  local_28 = (undefined4 **)0x5e8a8c;
  FUN_00404ff0(&local_16c);
  local_28 = (undefined4 **)0x5e8a97;
  FUN_004048d4(&local_168);
  local_28 = (undefined4 **)0x5e8aa7;
  FUN_00405008(&local_164,4);
  local_28 = (undefined4 **)0x5e8abd;
  FUN_00405744(local_154,PTR_DAT_004010f8,2);
  local_28 = (undefined4 **)0x5e8ac8;
  FUN_00404ff0(&local_134);
  local_28 = (undefined4 **)0x5e8ad3;
  FUN_004048d4(&local_130);
  local_28 = (undefined4 **)0x5e8ae9;
  FUN_00405744(local_12c,PTR_DAT_004010f8,2);
  local_28 = (undefined4 **)0x5e8af4;
  FUN_00404ff0(&local_10c);
  local_28 = (undefined4 **)0x5e8aff;
  FUN_004048d4(&local_108);
  local_28 = (undefined4 **)0x5e8b15;
  FUN_00405744(local_104,PTR_DAT_004010f8,2);
  local_28 = (undefined4 **)0x5e8b20;
  FUN_00404ff0(&local_e4);
  local_28 = (undefined4 **)0x5e8b2b;
  FUN_004048d4(&local_e0);
  local_28 = (undefined4 **)0x5e8b41;
  FUN_00405744(local_dc,PTR_DAT_004010f8,2);
  local_28 = (undefined4 **)0x5e8b4c;
  FUN_00404ff0(&local_bc);
  local_28 = (undefined4 **)0x5e8b57;
  FUN_004048d4(&local_b8);
  local_28 = (undefined4 **)0x5e8b6d;
  FUN_00405744(local_b4,PTR_DAT_004010f8,2);
  local_28 = (undefined4 **)0x5e8b78;
  FUN_00404ff0(&local_94);
  local_28 = (undefined4 **)0x5e8b83;
  FUN_004048d4(&local_90);
  local_28 = (undefined4 **)0x5e8b99;
  FUN_00405744(local_8c,PTR_DAT_004010f8,2);
  local_28 = (undefined4 **)0x5e8ba1;
  FUN_00404ff0(&local_6c);
  local_28 = (undefined4 **)0x5e8ba9;
  FUN_004048d4(&local_68);
  local_28 = (undefined4 **)0x5e8bbc;
  FUN_00405744(local_64,PTR_DAT_004010f8,2);
  local_28 = (undefined4 **)0x5e8bc4;
  FUN_00404ff0(&local_44);
  local_28 = (undefined4 **)0x5e8bcc;
  FUN_004048d4(&local_40);
  local_28 = (undefined4 **)0x5e8bd9;
  FUN_00405008(&local_3c,3);
  return;
}

