// Address: 00576e94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00576e94(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  int iVar4;
  int unaff_ESI;
  int iVar5;
  undefined1 **ppuVar6;
  int unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined *local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int *local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 *local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 *local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 *local_94;
  undefined1 **local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c [24];
  undefined4 uStack_54;
  undefined4 local_50;
  undefined *local_4c;
  int *local_48;
  undefined1 **local_44;
  undefined1 **local_40;
  undefined1 **local_3c;
  undefined1 **local_38;
  undefined1 **local_34;
  undefined1 **ppuStack_30;
  undefined1 *puStack_2c;
  int iStack_28;
  int local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_c;
  
  local_1c = &stack0xfffffffc;
  iVar3 = 0x21;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_20 = &LAB_005784e4;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  iVar3 = *(int *)(PTR_DAT_0066ac78 + 0x88);
  if (iVar3 == 7) {
    unaff_ESI = 0xc;
  }
  else if (iVar3 == 8) {
    unaff_ESI = 3;
  }
  else if (iVar3 == 9) {
    unaff_ESI = 4;
  }
  puVar1 = &stack0xfffffffc;
  if (iVar3 == 7) {
    puVar1 = &stack0xfffffffc;
    switch(param_2) {
    case 1:
    case 7:
      iStack_28 = 0x576f5f;
      local_1c = &stack0xfffffffc;
      FUN_004051d4(&local_20,
                   *(undefined4 *)
                    (PTR_PTR_0066ae90 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x20 + -0x10));
      iStack_28 = 0x576f80;
      FUN_004051d4(&local_24,
                   *(undefined4 *)
                    (PTR_PTR_0066ae90 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x20 + -0xc));
      puVar1 = local_1c;
      break;
    case 2:
    case 5:
      iStack_28 = 0x576fa6;
      local_1c = &stack0xfffffffc;
      FUN_004051d4(&local_20,
                   *(undefined4 *)
                    (PTR_PTR_0066ae90 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x20 + -8));
      iStack_28 = 0x576fc7;
      FUN_004051d4(&local_24,
                   *(undefined4 *)
                    (PTR_PTR_0066ae90 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x20 + -4));
      puVar1 = local_1c;
      break;
    case 3:
    case 6:
      iStack_28 = 0x576fed;
      local_1c = &stack0xfffffffc;
      FUN_004051d4(&local_20,
                   *(undefined4 *)
                    (PTR_PTR_0066ae90 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x20 + -0x18));
      iStack_28 = 0x57700e;
      FUN_004051d4(&local_24,
                   *(undefined4 *)
                    (PTR_PTR_0066ae90 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x20 + -0x14));
      puVar1 = local_1c;
      break;
    case 4:
    case 8:
      iStack_28 = 0x577031;
      FUN_004051d4(&local_20,
                   *(undefined4 *)
                    (PTR_PTR_0066ae90 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x20 + -0x20));
      iStack_28 = 0x577052;
      FUN_004051d4(&local_24,
                   *(undefined4 *)
                    (PTR_PTR_0066ae90 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x20 + -0x1c));
      puVar1 = local_1c;
    }
    local_1c = puVar1;
    iStack_28 = 0x577060;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x308),local_20);
    iStack_28 = 0x57706e;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_24);
    iStack_28 = 0x57707c;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x32c),local_24);
    iStack_28 = 0x57708a;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x330),local_20);
    iStack_28 = 0x577098;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x35c),local_20);
    iStack_28 = 0x5770a6;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x360),local_24);
    puVar1 = local_1c;
  }
  local_1c = puVar1;
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 8) {
    if (param_2 == 1) {
      iStack_28 = 0x5770ed;
      FUN_004051d4(&local_20,
                   *(undefined4 *)
                    (PTR_DAT_0066b368 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -0x10));
      iStack_28 = 0x57710d;
      FUN_004051d4(&local_24,
                   *(undefined4 *)
                    (PTR_DAT_0066b368 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -0xc));
    }
    else if (param_2 == 2) {
      iStack_28 = 0x577132;
      FUN_004051d4(&local_20,
                   *(undefined4 *)
                    (PTR_DAT_0066b368 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -8));
      iStack_28 = 0x577152;
      FUN_004051d4(&local_24,
                   *(undefined4 *)
                    (PTR_DAT_0066b368 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -4));
    }
    else if (param_2 == 3) {
      iStack_28 = 0x577174;
      FUN_004051d4(&local_20,
                   *(undefined4 *)
                    (PTR_DAT_0066b368 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -0x10));
      iStack_28 = 0x577194;
      FUN_004051d4(&local_24,
                   *(undefined4 *)
                    (PTR_DAT_0066b368 + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -0xc));
    }
    iStack_28 = 0x5771a2;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x308),local_20);
    iStack_28 = 0x5771b0;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_24);
    iStack_28 = 0x5771be;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x32c),local_24);
    iStack_28 = 0x5771cc;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x330),local_20);
    iStack_28 = 0x5771da;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x35c),local_20);
    iStack_28 = 0x5771e8;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x360),local_24);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) != 9) goto LAB_005772e4;
  if (param_2 == 1) {
LAB_0057720e:
    iStack_28 = 0x57722e;
    FUN_004051d4(&local_20,
                 *(undefined4 *)
                  (PTR_DAT_0066b06c + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -0x10));
    iStack_28 = 0x57724e;
    FUN_004051d4(&local_24,
                 *(undefined4 *)
                  (PTR_DAT_0066b06c + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -0xc));
  }
  else if (param_2 == 2) {
LAB_00577250:
    iStack_28 = 0x577270;
    FUN_004051d4(&local_20,
                 *(undefined4 *)(PTR_DAT_0066b06c + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -8))
    ;
    iStack_28 = 0x577290;
    FUN_004051d4(&local_24,
                 *(undefined4 *)(PTR_DAT_0066b06c + *(int *)(PTR_DAT_0066ac78 + 0x644) * 0x10 + -4))
    ;
  }
  else {
    if (param_2 == 3) goto LAB_0057720e;
    if (param_2 == 4) goto LAB_00577250;
  }
  iStack_28 = 0x57729e;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x308),local_20);
  iStack_28 = 0x5772ac;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_24);
  iStack_28 = 0x5772ba;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x32c),local_24);
  iStack_28 = 0x5772c8;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x330),local_20);
  iStack_28 = 0x5772d6;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x35c),local_20);
  iStack_28 = 0x5772e4;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x360),local_24);
LAB_005772e4:
  iStack_28 = 0;
  puStack_2c = (undefined1 *)0x5772fd;
  FUN_004060a8(&DAT_006d2148,PTR_DAT_00574744,1);
  local_c = 4;
  local_3c = (undefined1 **)(PTR_DAT_0066ac78 + 4);
  iVar3 = 0;
  do {
    iVar5 = iVar3;
    iVar4 = (int)local_3c[param_2 * 4 + 0x12a];
    iVar3 = iVar5 + 1;
    puStack_2c = (undefined1 *)0x577338;
    iStack_28 = iVar3;
    FUN_004060a8(&DAT_006d2148,PTR_DAT_00574744,1);
    *(int *)(DAT_006d2148 + -0x28 + iVar3 * 0x28) = iVar4;
    *(undefined4 *)(DAT_006d2148 + -0x24 + iVar3 * 0x28) =
         *(undefined4 *)
          (*(int *)PTR_DAT_0066af70 + iVar4 * 0x2f8 + 0xb4 + *(int *)(PTR_DAT_0066ac78 + 0x88) * 4);
    *(undefined4 *)(DAT_006d2148 + -0x20 + iVar3 * 0x28) =
         *(undefined4 *)
          (*(int *)PTR_DAT_0066af70 + iVar4 * 0x2f8 + 0xdc + *(int *)(PTR_DAT_0066ac78 + 0x88) * 4);
    *(undefined4 *)(DAT_006d2148 + -0x1c + iVar3 * 0x28) =
         *(undefined4 *)
          (*(int *)PTR_DAT_0066af70 + iVar4 * 0x2f8 + 0x104 + *(int *)(PTR_DAT_0066ac78 + 0x88) * 4)
    ;
    *(int *)(DAT_006d2148 + -0x18 + iVar3 * 0x28) =
         *(int *)(*(int *)PTR_DAT_0066af70 + iVar4 * 0x2f8 + 0xdc +
                 *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) -
         (*(int *)(*(int *)PTR_DAT_0066af70 + iVar4 * 0x2f8 + 0x104 +
                  *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) +
         *(int *)(*(int *)PTR_DAT_0066af70 + iVar4 * 0x2f8 + 300 +
                 *(int *)(PTR_DAT_0066ac78 + 0x88) * 4));
    *(undefined4 *)(DAT_006d2148 + -0x14 + iVar3 * 0x28) =
         *(undefined4 *)
          (*(int *)PTR_DAT_0066af70 + iVar4 * 0x2f8 + 300 + *(int *)(PTR_DAT_0066ac78 + 0x88) * 4);
    *(undefined4 *)(DAT_006d2148 + -0x10 + iVar3 * 0x28) =
         *(undefined4 *)
          (*(int *)PTR_DAT_0066af70 + iVar4 * 0x2f8 + 0x154 + *(int *)(PTR_DAT_0066ac78 + 0x88) * 4)
    ;
    *(undefined4 *)(DAT_006d2148 + -0xc + iVar3 * 0x28) =
         *(undefined4 *)
          (*(int *)PTR_DAT_0066af70 + iVar4 * 0x2f8 + 0x17c + *(int *)(PTR_DAT_0066ac78 + 0x88) * 4)
    ;
    *(int *)(DAT_006d2148 + -8 + iVar3 * 0x28) =
         *(int *)(*(int *)PTR_DAT_0066af70 + iVar4 * 0x2f8 + 0x154 +
                 *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) -
         *(int *)(*(int *)PTR_DAT_0066af70 + iVar4 * 0x2f8 + 0x17c +
                 *(int *)(PTR_DAT_0066ac78 + 0x88) * 4);
    local_3c = local_3c + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  iStack_28 = 0x577538;
  DAT_006d214c = FUN_00405eec(DAT_006d2148);
  iStack_28 = DAT_006d214c + -1;
  puStack_2c = &LAB_00574764;
  ppuStack_30 = (undefined1 **)0x57755a;
  FUN_004bcdb0(DAT_006d2148,0x28,0);
  ppuStack_30 = (undefined1 **)0x57756c;
  FUN_0040502c(DAT_006d2148 + 0x24,&DAT_005784fc);
  if (0 < iVar5) {
    iVar4 = 1;
    local_38 = (undefined1 **)iVar5;
    do {
      if ((((*(int *)(DAT_006d2148 + 4 + iVar4 * 0x28) ==
             *(int *)(DAT_006d2148 + -0x24 + iVar4 * 0x28)) &&
           (*(int *)(DAT_006d2148 + 0x20 + iVar4 * 0x28) ==
            *(int *)(DAT_006d2148 + -8 + iVar4 * 0x28))) &&
          (*(int *)(DAT_006d2148 + 0x18 + iVar4 * 0x28) ==
           *(int *)(DAT_006d2148 + -0x10 + iVar4 * 0x28))) &&
         (*(int *)(DAT_006d2148 + 0xc + iVar4 * 0x28) ==
          *(int *)(DAT_006d2148 + -0x1c + iVar4 * 0x28))) {
        ppuStack_30 = (undefined1 **)0x577601;
        FUN_00404ff0(DAT_006d2148 + 0x24 + iVar4 * 0x28);
      }
      else {
        ppuStack_30 = (undefined1 **)0x57760e;
        FUN_00409dd8(iVar4 + 1,&local_4c);
        ppuStack_30 = (undefined1 **)0x57761b;
        FUN_00404bac(&local_4c,&DAT_0057850c);
        ppuStack_30 = (undefined1 **)0x577630;
        FUN_004051d4(DAT_006d2148 + 0x24 + iVar4 * 0x28,local_4c);
      }
      iVar4 = iVar4 + 1;
      local_38 = (undefined1 **)((int)local_38 + -1);
    } while (local_38 != (undefined1 **)0x0);
  }
  if (-1 < iVar5) {
    local_c = 0;
    local_3c = (undefined1 **)&DAT_006d2084;
    local_40 = (undefined1 **)&DAT_006d2074;
    local_44 = (undefined1 **)&DAT_006d2094;
    local_48 = &DAT_006d2114;
    local_38 = (undefined1 **)iVar3;
    do {
      iVar3 = *(int *)(DAT_006d2148 + local_c * 0x28);
      ppuStack_30 = (undefined1 **)0x577688;
      FUN_004030d4(local_6c,&DAT_00578510);
      ppuStack_30 = (undefined1 **)0x5776a1;
      FUN_004030a4(local_6c,*(int *)PTR_DAT_0066af70 + iVar3 * 0x2f8,0x1a);
      ppuStack_30 = (undefined1 **)0x5776ac;
      FUN_00404b48(&local_50,local_6c);
      ppuStack_30 = (undefined1 **)0x5776b9;
      FUN_00466238(*local_3c,local_50);
      ppuStack_30 = (undefined1 **)0x5776cb;
      FUN_00404b6c(&local_70,*(undefined4 *)(DAT_006d2148 + 0x24 + local_c * 0x28));
      ppuStack_30 = (undefined1 **)0x5776d8;
      FUN_00466238(*local_40,local_70);
      iVar4 = 1;
      ppuVar6 = local_44;
      do {
        ppuStack_30 = (undefined1 **)0x5776fc;
        FUN_00409dd8(*(undefined4 *)(DAT_006d2148 + local_c * 0x28 + iVar4 * 4),&local_74);
        ppuStack_30 = (undefined1 **)0x577706;
        FUN_00466238(*ppuVar6,local_74);
        iVar4 = iVar4 + 1;
        ppuVar6 = ppuVar6 + 4;
      } while (iVar4 != 9);
      ppuStack_30 = (undefined1 **)0x57771b;
      FUN_0043aa68(*local_48,0);
      ppuStack_30 = (undefined1 **)0x57772b;
      uVar2 = FUN_0042d5c8(*(undefined4 *)(*local_48 + 0x168));
      ppuStack_30 = (undefined1 **)0x57774f;
      FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar3 * 0x2f8),uVar2);
      local_c = local_c + 1;
      local_48 = local_48 + 1;
      local_44 = local_44 + 1;
      local_40 = local_40 + 1;
      local_3c = local_3c + 1;
      local_38 = (undefined1 **)((int)local_38 + -1);
    } while (local_38 != (undefined1 **)0x0);
  }
  if (0 < unaff_ESI) {
    local_c = 1;
    local_38 = (undefined1 **)unaff_ESI;
    do {
      ppuStack_30 = (undefined1 **)0x577787;
      FUN_00409dd8(local_c,&local_7c);
      ppuStack_30 = (undefined1 **)0x577797;
      FUN_00404bf0(&local_78,&DAT_0057851c,local_7c);
      ppuStack_30 = (undefined1 **)0x5777a4;
      uVar2 = FUN_00427360(DAT_006d2070,local_78);
      ppuStack_30 = (undefined1 **)0x5777ab;
      FUN_0043aa68(uVar2,0);
      local_c = local_c + 1;
      local_38 = (undefined1 **)((int)local_38 + -1);
    } while (local_38 != (undefined1 **)0x0);
  }
  ppuStack_30 = &local_1c;
  local_34 = (undefined1 **)0x5777cb;
  FUN_00648c98(1,1,1);
  iVar3 = *(int *)(PTR_DAT_0066ac78 + (int)local_1c * 4 + param_2 * 0x10 + 0x4a8);
  iVar4 = *(int *)(PTR_DAT_0066ac78 + unaff_EDI * 4 + param_2 * 0x10 + 0x4a8);
  local_34 = (undefined1 **)0x577811;
  FUN_004030d4(local_6c,*(int *)PTR_DAT_0066af70 + iVar3 * 0x2f8);
  local_34 = (undefined1 **)0x577820;
  FUN_004030a4(local_6c,&DAT_00578510,0x1a);
  local_34 = (undefined1 **)0x57782b;
  FUN_00405194(&local_80,local_6c);
  local_34 = (undefined1 **)0x577839;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_80);
  local_34 = (undefined1 **)0x577846;
  FUN_004030d4(local_6c,&DAT_00578510);
  local_34 = (undefined1 **)0x57785e;
  FUN_004030a4(local_6c,*(int *)PTR_DAT_0066af70 + iVar4 * 0x2f8,0x1a);
  local_34 = (undefined1 **)0x577869;
  FUN_00405194(&local_84,local_6c);
  local_34 = (undefined1 **)0x577877;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x304),local_84);
  local_34 = (undefined1 **)0x577888;
  uVar2 = FUN_0042d5c8(*(undefined4 *)(*(int *)(param_1 + 0x31c) + 0x168));
  local_34 = (undefined1 **)0x5778ab;
  FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar3 * 0x2f8),uVar2);
  local_34 = (undefined1 **)0x5778bc;
  uVar2 = FUN_0042d5c8(*(undefined4 *)(*(int *)(param_1 + 0x324) + 0x168));
  local_34 = (undefined1 **)0x5778df;
  FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar4 * 0x2f8),uVar2);
  local_34 = (undefined1 **)0x5778ef;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x300),&DAT_00578524);
  local_34 = (undefined1 **)0x577906;
  iVar3 = FUN_0064a924(*(undefined4 *)(PTR_DAT_0066ac78 + 0x88),1,iVar3);
  if (-1 < iVar3) {
    local_34 = (undefined1 **)0x57792a;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 8 + iVar3 * 600),&local_90);
    local_34 = local_90;
    local_38 = (undefined1 **)&DAT_00578530;
    local_3c = (undefined1 **)0x57794f;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0xc + iVar3 * 600),&local_94);
    local_3c = (undefined1 **)local_94;
    local_40 = (undefined1 **)0x577965;
    FUN_00404c64(&local_8c,3);
    local_34 = (undefined1 **)0x577976;
    FUN_004051d4(&local_88,local_8c);
    local_34 = (undefined1 **)0x577987;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x300),local_88);
    *(int *)(*(int *)(param_1 + 0x300) + 0xc) = iVar3;
    local_34 = (undefined1 **)0x5779a4;
    FUN_0042a66c(*(undefined4 *)(*(int *)(param_1 + 0x300) + 0x68),DAT_00578534);
    local_34 = (undefined1 **)0x5779b3;
    FUN_00466414(*(undefined4 *)(param_1 + 0x300),CONCAT22(extraout_var,0xffeb));
  }
  local_34 = &local_1c;
  local_38 = (undefined1 **)0x5779cb;
  FUN_00648c98(1,1,2);
  iVar3 = *(int *)(PTR_DAT_0066ac78 + (int)local_1c * 4 + param_2 * 0x10 + 0x4a8);
  iVar4 = *(int *)(PTR_DAT_0066ac78 + unaff_EDI * 4 + param_2 * 0x10 + 0x4a8);
  local_38 = (undefined1 **)0x577a11;
  FUN_004030d4(local_6c,*(int *)PTR_DAT_0066af70 + iVar3 * 0x2f8);
  local_38 = (undefined1 **)0x577a20;
  FUN_004030a4(local_6c,&DAT_00578510,0x1a);
  local_38 = (undefined1 **)0x577a2e;
  FUN_00405194(&local_98,local_6c);
  local_38 = (undefined1 **)0x577a3f;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x30c),local_98);
  local_38 = (undefined1 **)0x577a4c;
  FUN_004030d4(local_6c,&DAT_00578510);
  local_38 = (undefined1 **)0x577a64;
  FUN_004030a4(local_6c,*(int *)PTR_DAT_0066af70 + iVar4 * 0x2f8,0x1a);
  local_38 = (undefined1 **)0x577a72;
  FUN_00405194(&local_9c,local_6c);
  local_38 = (undefined1 **)0x577a83;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x318),local_9c);
  local_38 = (undefined1 **)0x577a94;
  uVar2 = FUN_0042d5c8(*(undefined4 *)(*(int *)(param_1 + 800) + 0x168));
  local_38 = (undefined1 **)0x577ab7;
  FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar3 * 0x2f8),uVar2);
  local_38 = (undefined1 **)0x577ac8;
  uVar2 = FUN_0042d5c8(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x168));
  local_38 = (undefined1 **)0x577aeb;
  FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar4 * 0x2f8),uVar2);
  local_38 = (undefined1 **)0x577afb;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x314),&DAT_00578524);
  local_38 = (undefined1 **)0x577b12;
  iVar3 = FUN_0064a924(*(undefined4 *)(PTR_DAT_0066ac78 + 0x88),1,iVar3);
  if (-1 < iVar3) {
    local_38 = (undefined1 **)0x577b36;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 8 + iVar3 * 600),&local_a8);
    local_38 = (undefined1 **)local_a8;
    local_3c = (undefined1 **)&DAT_00578530;
    local_40 = (undefined1 **)0x577b5b;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0xc + iVar3 * 600),&local_ac);
    local_40 = (undefined1 **)local_ac;
    local_44 = (undefined1 **)0x577b71;
    FUN_00404c64(&local_a4,3);
    local_38 = (undefined1 **)0x577b82;
    FUN_004051d4(&local_a0,local_a4);
    local_38 = (undefined1 **)0x577b93;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x314),local_a0);
    *(int *)(*(int *)(param_1 + 0x314) + 0xc) = iVar3;
    local_38 = (undefined1 **)0x577bb0;
    FUN_0042a66c(*(undefined4 *)(*(int *)(param_1 + 0x314) + 0x68),DAT_00578534);
    local_38 = (undefined1 **)0x577bbf;
    FUN_00466414(*(undefined4 *)(param_1 + 0x314),CONCAT22(extraout_var_00,0xffeb));
  }
  local_38 = &local_1c;
  local_3c = (undefined1 **)0x577bd7;
  FUN_00648c98(2,1,1);
  iVar3 = *(int *)(PTR_DAT_0066ac78 + (int)local_1c * 4 + param_2 * 0x10 + 0x4a8);
  iVar4 = *(int *)(PTR_DAT_0066ac78 + unaff_EDI * 4 + param_2 * 0x10 + 0x4a8);
  local_3c = (undefined1 **)0x577c1d;
  FUN_004030d4(local_6c,*(int *)PTR_DAT_0066af70 + iVar3 * 0x2f8);
  local_3c = (undefined1 **)0x577c2c;
  FUN_004030a4(local_6c,&DAT_00578510,0x1a);
  local_3c = (undefined1 **)0x577c3a;
  FUN_00405194(&local_b0,local_6c);
  local_3c = (undefined1 **)0x577c4b;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x33c),local_b0);
  local_3c = (undefined1 **)0x577c58;
  FUN_004030d4(local_6c,&DAT_00578510);
  local_3c = (undefined1 **)0x577c70;
  FUN_004030a4(local_6c,*(int *)PTR_DAT_0066af70 + iVar4 * 0x2f8,0x1a);
  local_3c = (undefined1 **)0x577c7e;
  FUN_00405194(&local_b4,local_6c);
  local_3c = (undefined1 **)0x577c8f;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x34c),local_b4);
  local_3c = (undefined1 **)0x577ca0;
  uVar2 = FUN_0042d5c8(*(undefined4 *)(*(int *)(param_1 + 0x338) + 0x168));
  local_3c = (undefined1 **)0x577cc3;
  FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar3 * 0x2f8),uVar2);
  local_3c = (undefined1 **)0x577cd4;
  uVar2 = FUN_0042d5c8(*(undefined4 *)(*(int *)(param_1 + 0x358) + 0x168));
  local_3c = (undefined1 **)0x577cf7;
  FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar4 * 0x2f8),uVar2);
  local_3c = (undefined1 **)0x577d07;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x348),&DAT_00578524);
  local_3c = (undefined1 **)0x577d1e;
  iVar3 = FUN_0064a924(*(undefined4 *)(PTR_DAT_0066ac78 + 0x88),2,iVar3);
  if (-1 < iVar3) {
    local_3c = (undefined1 **)0x577d42;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 8 + iVar3 * 600),&local_c0);
    local_3c = (undefined1 **)local_c0;
    local_40 = (undefined1 **)&DAT_00578530;
    local_44 = (undefined1 **)0x577d67;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0xc + iVar3 * 600),&local_c4);
    local_44 = (undefined1 **)local_c4;
    local_48 = (int *)0x577d7d;
    FUN_00404c64(&local_bc,3);
    local_3c = (undefined1 **)0x577d8e;
    FUN_004051d4(&local_b8,local_bc);
    local_3c = (undefined1 **)0x577d9f;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x348),local_b8);
    *(int *)(*(int *)(param_1 + 0x348) + 0xc) = iVar3;
    local_3c = (undefined1 **)0x577dbc;
    FUN_0042a66c(*(undefined4 *)(*(int *)(param_1 + 0x348) + 0x68),DAT_00578534);
    local_3c = (undefined1 **)0x577dcb;
    FUN_00466414(*(undefined4 *)(param_1 + 0x348),CONCAT22(extraout_var_01,0xffeb));
  }
  local_3c = &local_1c;
  local_40 = (undefined1 **)0x577de3;
  FUN_00648c98(2,1,2);
  iVar3 = *(int *)(PTR_DAT_0066ac78 + (int)local_1c * 4 + param_2 * 0x10 + 0x4a8);
  iVar4 = *(int *)(PTR_DAT_0066ac78 + unaff_EDI * 4 + param_2 * 0x10 + 0x4a8);
  local_40 = (undefined1 **)0x577e29;
  FUN_004030d4(local_6c,*(int *)PTR_DAT_0066af70 + iVar3 * 0x2f8);
  local_40 = (undefined1 **)0x577e38;
  FUN_004030a4(local_6c,&DAT_00578510,0x1a);
  local_40 = (undefined1 **)0x577e46;
  FUN_00405194(&local_c8,local_6c);
  local_40 = (undefined1 **)0x577e57;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x340),local_c8);
  local_40 = (undefined1 **)0x577e64;
  FUN_004030d4(local_6c,&DAT_00578510);
  local_40 = (undefined1 **)0x577e7c;
  FUN_004030a4(local_6c,*(int *)PTR_DAT_0066af70 + iVar4 * 0x2f8,0x1a);
  local_40 = (undefined1 **)0x577e8a;
  FUN_00405194(&local_cc,local_6c);
  local_40 = (undefined1 **)0x577e9b;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x350),local_cc);
  local_40 = (undefined1 **)0x577eac;
  uVar2 = FUN_0042d5c8(*(undefined4 *)(*(int *)(param_1 + 0x334) + 0x168));
  local_40 = (undefined1 **)0x577ecf;
  FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar3 * 0x2f8),uVar2);
  local_40 = (undefined1 **)0x577ee0;
  uVar2 = FUN_0042d5c8(*(undefined4 *)(*(int *)(param_1 + 0x354) + 0x168));
  local_40 = (undefined1 **)0x577f03;
  FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar4 * 0x2f8),uVar2);
  local_40 = (undefined1 **)0x577f13;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x344),&DAT_00578524);
  local_40 = (undefined1 **)0x577f2a;
  iVar3 = FUN_0064a924(*(undefined4 *)(PTR_DAT_0066ac78 + 0x88),2,iVar3);
  if (-1 < iVar3) {
    local_40 = (undefined1 **)0x577f4e;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 8 + iVar3 * 600),&local_d8);
    local_40 = (undefined1 **)local_d8;
    local_44 = (undefined1 **)&DAT_00578530;
    local_48 = (int *)0x577f73;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0xc + iVar3 * 600),&local_dc);
    local_48 = local_dc;
    local_4c = (undefined *)0x577f89;
    FUN_00404c64(&local_d4,3);
    local_40 = (undefined1 **)0x577f9a;
    FUN_004051d4(&local_d0,local_d4);
    local_40 = (undefined1 **)0x577fab;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x344),local_d0);
    *(int *)(*(int *)(param_1 + 0x344) + 0xc) = iVar3;
    local_40 = (undefined1 **)0x577fc8;
    FUN_0042a66c(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x68),DAT_00578534);
    local_40 = (undefined1 **)0x577fd7;
    FUN_00466414(*(undefined4 *)(param_1 + 0x344),CONCAT22(extraout_var_02,0xffeb));
  }
  local_40 = &local_1c;
  local_44 = (undefined1 **)0x577fef;
  FUN_00648c98(3,1,1);
  iVar3 = *(int *)(PTR_DAT_0066ac78 + (int)local_1c * 4 + param_2 * 0x10 + 0x4a8);
  iVar4 = *(int *)(PTR_DAT_0066ac78 + unaff_EDI * 4 + param_2 * 0x10 + 0x4a8);
  local_44 = (undefined1 **)0x578035;
  FUN_004030d4(local_6c,*(int *)PTR_DAT_0066af70 + iVar3 * 0x2f8);
  local_44 = (undefined1 **)0x578044;
  FUN_004030a4(local_6c,&DAT_00578510,0x1a);
  local_44 = (undefined1 **)0x578052;
  FUN_00405194(&local_e0,local_6c);
  local_44 = (undefined1 **)0x578063;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x36c),local_e0);
  local_44 = (undefined1 **)0x578070;
  FUN_004030d4(local_6c,&DAT_00578510);
  local_44 = (undefined1 **)0x578088;
  FUN_004030a4(local_6c,*(int *)PTR_DAT_0066af70 + iVar4 * 0x2f8,0x1a);
  local_44 = (undefined1 **)0x578096;
  FUN_00405194(&local_e4,local_6c);
  local_44 = (undefined1 **)0x5780a7;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x37c),local_e4);
  local_44 = (undefined1 **)0x5780b8;
  uVar2 = FUN_0042d5c8(*(undefined4 *)(*(int *)(param_1 + 0x368) + 0x168));
  local_44 = (undefined1 **)0x5780db;
  FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar3 * 0x2f8),uVar2);
  local_44 = (undefined1 **)0x5780ec;
  uVar2 = FUN_0042d5c8(*(undefined4 *)(*(int *)(param_1 + 0x388) + 0x168));
  local_44 = (undefined1 **)0x57810f;
  FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar4 * 0x2f8),uVar2);
  local_44 = (undefined1 **)0x57811f;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x378),&DAT_00578524);
  local_44 = (undefined1 **)0x578136;
  iVar3 = FUN_0064a924(*(undefined4 *)(PTR_DAT_0066ac78 + 0x88),3,iVar3);
  if (-1 < iVar3) {
    local_44 = (undefined1 **)0x57815a;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 8 + iVar3 * 600),&local_f0);
    local_44 = (undefined1 **)local_f0;
    local_48 = (int *)&DAT_00578530;
    local_4c = (undefined *)0x57817f;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0xc + iVar3 * 600),&local_f4);
    local_4c = local_f4;
    local_50 = 0x578195;
    FUN_00404c64(&local_ec,3);
    local_44 = (undefined1 **)0x5781a6;
    FUN_004051d4(&local_e8,local_ec);
    local_44 = (undefined1 **)0x5781b7;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x378),local_e8);
    *(int *)(*(int *)(param_1 + 0x378) + 0xc) = iVar3;
    local_44 = (undefined1 **)0x5781d4;
    FUN_0042a66c(*(undefined4 *)(*(int *)(param_1 + 0x378) + 0x68),DAT_00578534);
    local_44 = (undefined1 **)0x5781e3;
    FUN_00466414(*(undefined4 *)(param_1 + 0x378),CONCAT22(extraout_var_03,0xffeb));
  }
  local_44 = &local_1c;
  local_48 = (int *)0x5781fb;
  FUN_00648c98(3,1,2);
  iVar3 = *(int *)(PTR_DAT_0066ac78 + (int)local_1c * 4 + param_2 * 0x10 + 0x4a8);
  iVar4 = *(int *)(PTR_DAT_0066ac78 + unaff_EDI * 4 + param_2 * 0x10 + 0x4a8);
  local_48 = (int *)0x578241;
  FUN_004030d4(local_6c,*(int *)PTR_DAT_0066af70 + iVar3 * 0x2f8);
  local_48 = (int *)0x578250;
  FUN_004030a4(local_6c,&DAT_00578510,0x1a);
  local_48 = (int *)0x57825e;
  FUN_00405194(&local_f8,local_6c);
  local_48 = (int *)0x57826f;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x370),local_f8);
  local_48 = (int *)0x57827c;
  FUN_004030d4(local_6c,&DAT_00578510);
  local_48 = (int *)0x578294;
  FUN_004030a4(local_6c,*(int *)PTR_DAT_0066af70 + iVar4 * 0x2f8,0x1a);
  local_48 = (int *)0x5782a2;
  FUN_00405194(&local_fc,local_6c);
  local_48 = (int *)0x5782b3;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x380),local_fc);
  local_48 = (int *)0x5782c4;
  uVar2 = FUN_0042d5c8(*(undefined4 *)(*(int *)(param_1 + 0x364) + 0x168));
  local_48 = (int *)0x5782e7;
  FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar3 * 0x2f8),uVar2);
  local_48 = (int *)0x5782f8;
  uVar2 = FUN_0042d5c8(*(undefined4 *)(*(int *)(param_1 + 900) + 0x168));
  local_48 = (int *)0x57831b;
  FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar4 * 0x2f8),uVar2);
  local_48 = (int *)0x57832b;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x374),&DAT_00578524);
  local_48 = (int *)0x578342;
  iVar3 = FUN_0064a924(*(undefined4 *)(PTR_DAT_0066ac78 + 0x88),3,iVar3);
  if (-1 < iVar3) {
    local_48 = (int *)0x578366;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 8 + iVar3 * 600),&local_108);
    local_48 = (int *)local_108;
    local_4c = &DAT_00578530;
    local_50 = 0x57838b;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0xc + iVar3 * 600),&local_10c);
    local_50 = local_10c;
    uStack_54 = 0x5783a1;
    FUN_00404c64(&local_104,3);
    local_48 = (int *)0x5783b2;
    FUN_004051d4(&local_100,local_104);
    local_48 = (int *)0x5783c3;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x374),local_100);
    *(int *)(*(int *)(param_1 + 0x374) + 0xc) = iVar3;
    local_48 = (int *)0x5783e0;
    FUN_0042a66c(*(undefined4 *)(*(int *)(param_1 + 0x374) + 0x68),DAT_00578534);
    local_48 = (int *)0x5783ef;
    FUN_00466414(*(undefined4 *)(param_1 + 0x374),CONCAT22(extraout_var_04,0xffeb));
  }
  ppuVar6 = local_3c;
  *in_FS_OFFSET = (int)local_44;
  local_3c = (undefined1 **)&LAB_005784ee;
  local_40 = (undefined1 **)0x57840c;
  FUN_004048f8(&local_10c,3,ppuVar6);
  local_40 = (undefined1 **)0x57841c;
  FUN_00405008(&local_100,3);
  local_40 = (undefined1 **)0x57842c;
  FUN_004048f8(&local_f4,3);
  local_40 = (undefined1 **)0x57843c;
  FUN_00405008(&local_e8,3);
  local_40 = (undefined1 **)0x57844c;
  FUN_004048f8(&local_dc,3);
  local_40 = (undefined1 **)0x57845c;
  FUN_00405008(&local_d0,3);
  local_40 = (undefined1 **)0x57846c;
  FUN_004048f8(&local_c4,3);
  local_40 = (undefined1 **)0x57847c;
  FUN_00405008(&local_b8,3);
  local_40 = (undefined1 **)0x57848c;
  FUN_004048f8(&local_ac,3);
  local_40 = (undefined1 **)0x57849c;
  FUN_00405008(&local_a0,3);
  local_40 = (undefined1 **)0x5784ac;
  FUN_004048f8(&local_94,3);
  local_40 = (undefined1 **)0x5784bc;
  FUN_00405008(&local_88,3);
  local_40 = (undefined1 **)0x5784c9;
  FUN_004048f8(&local_7c,4);
  local_40 = (undefined1 **)0x5784d6;
  FUN_004048f8(&local_50,2);
  local_40 = (undefined1 **)0x5784e3;
  FUN_00405008(&local_34,6);
  return;
}

