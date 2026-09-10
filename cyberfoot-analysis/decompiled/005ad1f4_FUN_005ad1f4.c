// Address: 005ad1f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005ad1f4(int param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int iVar5;
  uint uVar6;
  undefined4 unaff_EDI;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined *local_64;
  undefined *local_60;
  undefined *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  int local_c;
  
  local_20 = &stack0xfffffffc;
  iVar4 = 0x10;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_24 = &LAB_005adc21;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  puVar2 = &stack0xfffffffc;
  if ((*(int *)PTR_DAT_0066acf8 == 2) &&
     (puVar2 = &stack0xfffffffc,
     *(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d25bc * 0x294) == 0x1d)) {
    local_2c = (undefined *)0x5ad248;
    cVar3 = FUN_006500c8();
    puVar2 = local_20;
    if ((cVar3 != '\0') && (*(int *)(PTR_DAT_0066ac78 + 0x110) == 0)) {
      DAT_006d25c4 = '\x01';
      goto LAB_005ad262;
    }
  }
  local_20 = puVar2;
  DAT_006d25c4 = '\0';
LAB_005ad262:
  if (((DAT_006d25c5 != '\0') && (*(int *)PTR_DAT_0066acf8 == 2)) &&
     (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d25bc * 0x294) == 0x1d)) {
    local_2c = (undefined *)0x5ad296;
    cVar3 = FUN_006500c8();
    if (cVar3 != '\0') {
      DAT_006d25c4 = '\x01';
    }
  }
  if ((DAT_006d25c4 == '\0') || (*(int *)(PTR_DAT_0066ac78 + 0x110) < 1)) {
    local_2c = (undefined *)0x5ad2dd;
    FUN_00642c50(0xd5,&stack0xffffffe4);
    local_2c = (undefined *)0x5ad2ee;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x9fc),unaff_EDI);
  }
  else {
    local_2c = (undefined *)0x5ad2bd;
    FUN_00642c50(0xd6,&stack0xffffffe8);
    local_2c = (undefined *)0x5ad2ce;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x9fc),unaff_ESI);
  }
  DAT_006d25c6 = DAT_006d25c4;
  DAT_006d25c5 = 0;
  if ((*(int *)PTR_DAT_0066acf8 == 2) &&
     (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d25bc * 0x294) == 0x1d)) {
    local_2c = (undefined *)0x5ad327;
    cVar3 = FUN_006500c8();
    if ((cVar3 != '\0') && (0 < *(int *)(PTR_DAT_0066ac78 + 0x110))) {
      local_2c = (undefined *)0x5ad349;
      FUN_00466128(*(undefined4 *)(param_1 + 0x9fc),1);
    }
  }
  if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d25bc * 0x294) != 0x1d) {
    local_2c = (undefined *)0x5ad375;
    FUN_00466128(*(undefined4 *)(param_1 + 0x9fc),0);
  }
  if (*(int *)PTR_DAT_0066acf8 == 2) {
    local_2c = (undefined *)0x5ad3a0;
    FUN_006458c8(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d25bc * 0x294),&local_20)
    ;
    local_2c = (undefined *)0x5ad3b1;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),local_20);
    local_2c = (undefined *)0xffffffff;
    local_30 = (undefined *)0xffffffff;
    local_34 = (undefined *)0x5ad3db;
    local_c = FUN_0064dee4(2,*(undefined4 *)
                              (*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d25bc * 0x294),0xffffffff);
  }
  DAT_006d25c0 = 0;
  local_10 = 0;
  local_2c = (undefined *)0x5ad3ef;
  FUN_005acaa8();
  uVar7 = 1;
  if (*(int *)PTR_DAT_0066acf8 == 6) {
    local_2c = (undefined *)0x5ad40b;
    FUN_00642c50(0x3dd,&local_24);
    local_2c = (undefined *)0x5ad41c;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),local_24);
    local_2c = (undefined *)0x5ad430;
    iVar4 = FUN_0065a250(1,6,1);
    if (iVar4 == -1) {
      local_2c = (undefined *)0x5ad44b;
      iVar4 = FUN_0065a250(1,6,2);
      uVar7 = 0x11;
    }
    local_2c = (undefined *)0x5ad462;
    FUN_00466128(*(undefined4 *)(param_1 + 0xa08),0);
  }
  else {
    if (DAT_006d25c4 == '\0') {
      local_2c = (undefined *)0x5ad495;
      iVar4 = FUN_0065a250(DAT_006d25bc,2,1);
    }
    else {
      local_2c = (undefined *)0x5ad47d;
      iVar4 = FUN_0065a250(DAT_006d25bc,2,0);
    }
    local_2c = (undefined *)0x5ad4b8;
    FUN_006458c8(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d25bc * 0x294),&local_28)
    ;
    local_2c = (undefined *)0x5ad4c9;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),local_28);
    if (iVar4 == -1) {
      local_2c = (undefined *)0x5ad4e2;
      iVar4 = FUN_0065a250(DAT_006d25bc,2,1);
    }
    if (iVar4 == -1) {
      local_2c = (undefined *)0x5ad4fd;
      iVar4 = FUN_0065a250(DAT_006d25bc,2,2);
      uVar7 = 0x11;
    }
  }
  if (iVar4 != -1) {
    if (DAT_006d25c4 == '\0') {
      local_2c = (undefined *)0x5ad51b;
      FUN_005acc34(1,0);
    }
    if (DAT_006d25c4 == '\0') {
      uVar6 = uVar7;
      if (uVar7 < 0x20) {
        do {
          if ((-1 < *(int *)(*(int *)PTR_DAT_0066afa0 + iVar4 * 0x48)) &&
             (-1 < *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar4 * 0x48))) {
            local_2c = (undefined *)0x5ad7b0;
            FUN_005ac334(uVar6,*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar4 * 0x48),
                         *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar4 * 0x48));
            if ((uVar7 == 0x11) && ((int)uVar6 < 0x19)) {
              local_2c = (undefined *)0x5ad7d6;
              FUN_005ac334(local_10 + 1,*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar4 * 0x48),
                           0xffffffff);
              local_2c = (undefined *)0x5ad7ec;
              FUN_005ad0e4(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar4 * 0x48),0xffffffff);
              local_10 = local_10 + 2;
              local_2c = (undefined *)0x5ad809;
              FUN_005ac334(local_10,*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar4 * 0x48),
                           0xffffffff);
              local_2c = (undefined *)0x5ad820;
              FUN_005ad0e4(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar4 * 0x48),0xffffffff);
            }
            if (*(char *)(*(int *)PTR_DAT_0066afa0 + 0x2c + iVar4 * 0x48) != '\0') {
              local_2c = (undefined *)0x5ad84d;
              FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 8 + iVar4 * 0x48),&local_5c);
              local_2c = local_5c;
              local_30 = &DAT_005adc3c;
              local_34 = (undefined *)0x5ad86c;
              FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0xc + iVar4 * 0x48),&local_60)
              ;
              local_34 = local_60;
              local_38 = (undefined *)0x5ad87c;
              FUN_00404c64(&local_58,3);
              local_2c = (undefined *)0x5ad887;
              FUN_004051d4(&stack0xffffffec,local_58);
              if (*(char *)(*(int *)PTR_DAT_0066afa0 + 0x74 + iVar4 * 0x48) != '\0') {
                local_30 = &DAT_005adc44;
                local_34 = (undefined *)0x5ad8bc;
                FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x54 + iVar4 * 0x48),
                             &local_68);
                local_34 = (undefined *)0x5ad8c7;
                FUN_004051d4(&local_64,local_68);
                local_34 = local_64;
                local_38 = &DAT_005adc4c;
                local_3c = 0x5ad8e6;
                FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x50 + iVar4 * 0x48),
                             &local_70);
                local_3c = 0x5ad8f1;
                FUN_004051d4(&local_6c,local_70);
                local_3c = local_6c;
                local_40 = 0x5ad901;
                FUN_00405330(&stack0xffffffec,5);
                if ((0 < *(int *)(*(int *)PTR_DAT_0066afa0 + 0x58 + iVar4 * 0x48)) ||
                   (0 < *(int *)(*(int *)PTR_DAT_0066afa0 + 0x5c + iVar4 * 0x48))) {
                  local_30 = &LAB_005adc54;
                  local_34 = (undefined *)0x5ad944;
                  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x5c + iVar4 * 0x48),
                               &local_78);
                  local_34 = (undefined *)0x5ad94f;
                  FUN_004051d4(&local_74,local_78);
                  local_34 = local_74;
                  local_38 = &DAT_005adc4c;
                  local_3c = 0x5ad96e;
                  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x58 + iVar4 * 0x48),
                               &local_80);
                  local_3c = 0x5ad979;
                  FUN_004051d4(&local_7c,local_80);
                  local_3c = local_7c;
                  local_40 = 0x5ad989;
                  FUN_00405330(&stack0xffffffec,5);
                }
              }
              local_2c = (undefined *)0x5ad996;
              FUN_005ac4c4(param_1,uVar6,unaff_EBX);
            }
            if ((int)uVar6 < 0x11) {
              local_2c = (undefined *)0x5ad9bc;
              FUN_005ad0e4(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar4 * 0x48),
                           *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar4 * 0x48));
            }
            iVar4 = iVar4 + 2;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x20);
      }
    }
    else {
      local_2c = (undefined *)0x5ad52d;
      FUN_005acc34(0,1);
      if (uVar7 < 0x21) {
        do {
          if ((-1 < *(int *)(*(int *)PTR_DAT_0066afa0 + iVar4 * 0x48)) &&
             (-1 < *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar4 * 0x48))) {
            local_2c = (undefined *)0x5ad57e;
            FUN_005ac650(uVar7,*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar4 * 0x48),
                         *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar4 * 0x48));
            local_2c = (undefined *)0x5ad598;
            FUN_005ad0e4(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar4 * 0x48),
                         *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar4 * 0x48));
            if (*(char *)(*(int *)PTR_DAT_0066afa0 + 0x2c + iVar4 * 0x48) != '\0') {
              local_2c = (undefined *)0x5ad5bd;
              FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 8 + iVar4 * 0x48),&local_30);
              local_2c = local_30;
              local_30 = &DAT_005adc3c;
              local_34 = (undefined *)0x5ad5d8;
              FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0xc + iVar4 * 0x48),&local_34)
              ;
              local_38 = (undefined *)0x5ad5e8;
              FUN_00404c64(&local_2c,3);
              puVar1 = local_2c;
              local_2c = (undefined *)0x5ad5f3;
              FUN_004051d4(&stack0xffffffec,puVar1);
              if (*(char *)(*(int *)PTR_DAT_0066afa0 + 0x74 + iVar4 * 0x48) != '\0') {
                local_30 = &DAT_005adc44;
                local_34 = (undefined *)0x5ad620;
                FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x54 + iVar4 * 0x48),
                             &local_3c);
                local_34 = (undefined *)0x5ad62b;
                FUN_004051d4(&local_38,local_3c);
                local_34 = local_38;
                local_38 = &DAT_005adc4c;
                local_3c = 0x5ad646;
                FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x50 + iVar4 * 0x48),
                             &local_44);
                local_3c = 0x5ad651;
                FUN_004051d4(&local_40,local_44);
                local_3c = local_40;
                local_40 = 0x5ad661;
                FUN_00405330(&stack0xffffffec,5);
                if ((0 < *(int *)(*(int *)PTR_DAT_0066afa0 + 0x58 + iVar4 * 0x48)) ||
                   (0 < *(int *)(*(int *)PTR_DAT_0066afa0 + 0x5c + iVar4 * 0x48))) {
                  local_30 = &LAB_005adc54;
                  local_34 = (undefined *)0x5ad69b;
                  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x5c + iVar4 * 0x48),
                               &local_4c);
                  local_34 = (undefined *)0x5ad6a6;
                  FUN_004051d4(&local_48,local_4c);
                  local_34 = local_48;
                  local_38 = &DAT_005adc4c;
                  local_3c = 0x5ad6c1;
                  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x58 + iVar4 * 0x48),
                               &local_54);
                  local_3c = 0x5ad6cc;
                  FUN_004051d4(&local_50,local_54);
                  local_3c = local_50;
                  local_40 = 0x5ad6dc;
                  FUN_00405330(&stack0xffffffec,5);
                }
              }
              local_2c = (undefined *)0x5ad6e9;
              FUN_005ac564(param_1,uVar7,unaff_EBX);
            }
            iVar4 = iVar4 + 2;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != 0x21);
      }
      if (0 < *(int *)(PTR_DAT_0066ac78 + 0x110)) {
        local_2c = (undefined *)0x5ad71c;
        iVar4 = FUN_0065a250(DAT_006d25bc,2,1);
        if (0 < iVar4) {
          iVar5 = 1;
          do {
            local_2c = (undefined *)0x5ad74c;
            FUN_005ac870(iVar5,*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar4 * 0x48),
                         *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar4 * 0x48));
            iVar4 = iVar4 + 2;
            iVar5 = iVar5 + 1;
          } while (iVar5 != 0x11);
        }
      }
    }
    local_2c = (undefined *)0x5ad9d5;
    iVar4 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b058);
    if (*(int *)PTR_DAT_0066acf8 == 6) {
      local_2c = (undefined *)0x5ada00;
      iVar4 = FUN_006454a8(6,0x1d,*(undefined4 *)(PTR_DAT_0066ac78 + 0xc0));
      if (-1 < iVar4) {
        local_2c = (undefined *)0x5ada20;
        FUN_00404b48(&local_84,*(int *)PTR_DAT_0066af70 + iVar4 * 0x2f8);
        local_2c = (undefined *)0x5ada31;
        FUN_00466238(*(undefined4 *)(param_1 + 0x5d4),local_84);
        local_2c = (undefined *)0x5ada4d;
        FUN_004663a8(*(undefined4 *)(param_1 + 0x5d4),
                     *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar4 * 0x2f8));
        local_2c = (undefined *)0x5ada6c;
        FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x5d4) + 0x68),
                     *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + iVar4 * 0x2f8));
      }
    }
    else if ((5 < *(int *)(PTR_DAT_0066ac78 + 0x110)) && (iVar4 = iVar4 + -1, -1 < iVar4)) {
      do {
        if ((*(int *)(*(int *)PTR_DAT_0066b058 + iVar4 * 0x14) == *(int *)(PTR_DAT_0066ac78 + 0xc0))
           && ((*(int *)(*(int *)PTR_DAT_0066b058 + 4 + iVar4 * 0x14) == local_c &&
               (*(int *)(*(int *)PTR_DAT_0066b058 + 0xc + iVar4 * 0x14) == 1)))) {
          local_2c = (undefined *)0x5adaf7;
          FUN_00404b48(&local_88,
                       *(int *)PTR_DAT_0066af70 +
                       *(int *)(*(int *)PTR_DAT_0066b058 + 8 + iVar4 * 0x14) * 0x2f8);
          local_2c = (undefined *)0x5adb0b;
          FUN_00466238(*(undefined4 *)(param_1 + 0x5d4),local_88);
          local_2c = (undefined *)0x5adb34;
          FUN_004663a8(*(undefined4 *)(param_1 + 0x5d4),
                       *(undefined4 *)
                        (*(int *)PTR_DAT_0066af70 + 0xac +
                        *(int *)(*(int *)PTR_DAT_0066b058 + 8 + iVar4 * 0x14) * 0x2f8));
          local_2c = (undefined *)0x5adb60;
          FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x5d4) + 0x68),
                       *(undefined4 *)
                        (*(int *)PTR_DAT_0066af70 + 0xb0 +
                        *(int *)(*(int *)PTR_DAT_0066b058 + 8 + iVar4 * 0x14) * 0x2f8));
          break;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != -1);
    }
  }
  puVar2 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_005adc2b;
  local_24 = (undefined1 *)0x5adb89;
  FUN_004048f8(&local_88,3,puVar2);
  local_24 = (undefined1 *)0x5adb91;
  FUN_00404ff0(&local_7c);
  local_24 = (undefined1 *)0x5adb99;
  FUN_004048d4(&local_78);
  local_24 = (undefined1 *)0x5adba1;
  FUN_00404ff0(&local_74);
  local_24 = (undefined1 *)0x5adba9;
  FUN_004048d4(&local_70);
  local_24 = (undefined1 *)0x5adbb1;
  FUN_00404ff0(&local_6c);
  local_24 = (undefined1 *)0x5adbb9;
  FUN_004048d4(&local_68);
  local_24 = (undefined1 *)0x5adbc1;
  FUN_00404ff0(&local_64);
  local_24 = (undefined1 *)0x5adbce;
  FUN_004048f8(&local_60,4);
  local_24 = (undefined1 *)0x5adbd6;
  FUN_00404ff0(&local_50);
  local_24 = (undefined1 *)0x5adbde;
  FUN_004048d4(&local_4c);
  local_24 = (undefined1 *)0x5adbe6;
  FUN_00404ff0(&local_48);
  local_24 = (undefined1 *)0x5adbee;
  FUN_004048d4(&local_44);
  local_24 = (undefined1 *)0x5adbf6;
  FUN_00404ff0(&local_40);
  local_24 = (undefined1 *)0x5adbfe;
  FUN_004048d4(&local_3c);
  local_24 = (undefined1 *)0x5adc06;
  FUN_00404ff0(&local_38);
  local_24 = (undefined1 *)0x5adc13;
  FUN_004048f8(&local_34,3);
  local_24 = (undefined1 *)0x5adc20;
  FUN_00405008(&local_28,6);
  return;
}

