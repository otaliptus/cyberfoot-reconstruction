// Address: 0063c884
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_FormCreate(int param_1)

{
  char cVar1;
  uint uVar2;
  HCURSOR pHVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined4 unaff_EBX;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined1 local_ec [4];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  wchar_t *local_30;
  undefined4 in_stack_ffffffd4;
  undefined4 uVar8;
  wchar_t *pwVar9;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  int local_8;
  
  local_1c = &stack0xfffffffc;
  iVar4 = 0x1d;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_20 = &LAB_0063d810;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_8 = param_1;
  FUN_00642c50(0x3f,&local_c);
  FUN_0054dcb8(*(undefined4 *)(local_8 + 0x538),local_c);
  FUN_00642c50(0x40,&stack0xfffffff0);
  FUN_0054dcb8(*(undefined4 *)(local_8 + 0x53c),unaff_EBX);
  FUN_00642c50(0x41,&stack0xffffffec);
  FUN_0054dcb8(*(undefined4 *)(local_8 + 0x540),unaff_ESI);
  FUN_00642c50(0x42,&stack0xffffffe8);
  FUN_0054dcb8(*(undefined4 *)(local_8 + 0x544),unaff_EDI);
  FUN_00642c50(0x8d,&local_1c);
  FUN_004e1414(*(undefined4 *)(local_8 + 0x380),local_1c);
  FUN_00642c50(0x45,&local_20);
  FUN_00545088(*(undefined4 *)(local_8 + 0x40c),local_20);
  FUN_00642c50(0x2f,&local_24);
  FUN_00545088(*(undefined4 *)(local_8 + 0x3c8),local_24);
  uVar8 = 0x63c986;
  FUN_00642c50(0x30,&stack0xffffffd8);
  FUN_00545088(*(undefined4 *)(local_8 + 0x3cc),uVar8);
  FUN_00642c50(0x43,&stack0xffffffd4);
  FUN_004e1414(*(undefined4 *)(local_8 + 0x44c),in_stack_ffffffd4);
  FUN_00642c50(0x48,&local_30);
  FUN_00545088(*(undefined4 *)(local_8 + 0x424),local_30);
  FUN_0046599c(*(undefined4 *)(local_8 + 0x44c),*(int *)(*(int *)(local_8 + 0x3b8) + 0x44) + 6);
  FUN_00642c50(0x3df,&local_34);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x4f8),local_34);
  FUN_00642c50(0x3de,&local_38);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x4f0),local_38);
  FUN_00642c50(0x3e0,&local_3c);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x4e8),local_3c);
  FUN_00642c50(0x44,&local_40);
  FUN_0054dcb8(*(undefined4 *)(local_8 + 0x548),local_40);
  FUN_00642c50(0x3dd,&local_44);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x4d0),local_44);
  FUN_00642c50(0x5d,&local_48);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x4a8),local_48);
  FUN_00642c50(0x5e,&local_4c);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x4a0),local_4c);
  FUN_00642c50(0x5f,&local_50);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x498),local_50);
  FUN_00642c50(0x60,&local_54);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x490),local_54);
  FUN_00642c50(0x61,&local_58);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x488),local_58);
  FUN_00642c50(0x62,&local_5c);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x534),local_5c);
  FUN_00642c50(99,&local_60);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x52c),local_60);
  FUN_00642c50(100,&local_64);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x524),local_64);
  FUN_00642c50(0x7d,&local_68);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x520),local_68);
  FUN_00642c50(0x7e,&local_6c);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x518),local_6c);
  FUN_00642c50(0x65,&local_70);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x510),local_70);
  FUN_00642c50(0x66,&local_74);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x508),local_74);
  FUN_00642c50(0x67,&local_78);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x500),local_78);
  FUN_00642c50(0x68,&local_7c);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x4e0),local_7c);
  FUN_00642c50(0x69,&local_80);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x4d8),local_80);
  FUN_00642c50(0x6a,&local_84);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x4c8),local_84);
  FUN_00642c50(0x6b,&local_88);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x4c0),local_88);
  FUN_00642c50(0x6c,&local_8c);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x4b8),local_8c);
  FUN_00642c50(0x6d,&local_90);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x4b4),local_90);
  FUN_00642c50(0x6e,&local_94);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x4ac),local_94);
  FUN_00642c50(0x6f,&local_98);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x484),local_98);
  FUN_00642c50(0x70,&local_9c);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x47c),local_9c);
  FUN_00642c50(0x71,&local_a0);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x478),local_a0);
  FUN_00642c50(0x72,&local_a4);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x470),local_a4);
  FUN_00642c50(0x73,&local_a8);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x468),local_a8);
  FUN_00642c50(0x74,&local_ac);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x460),local_ac);
  FUN_00642c50(0x75,&local_b0);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x45c),local_b0);
  FUN_00642c50(0x76,&local_b4);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x454),local_b4);
  FUN_00642c50(0x77,&local_b8);
  FUN_004dc12c(*(undefined4 *)(local_8 + 0x450),local_b8);
  if (*PTR_DAT_0066b458 != '\0') {
    FUN_0050a850(*(undefined4 *)(local_8 + 0x33c),0x4b);
    FUN_0050a850(*(undefined4 *)(local_8 + 0x35c),0x4b);
    FUN_0050a804(*(undefined4 *)(local_8 + 0x364),0);
  }
  FUN_00642c50(0x80,&local_bc);
  FUN_00509a64(*(undefined4 *)(*(int *)(local_8 + 0x33c) + 0x60),local_bc);
  FUN_00642c50(0x81,&local_c0);
  FUN_00509a64(*(undefined4 *)(*(int *)(local_8 + 0x344) + 0x60),local_c0);
  FUN_00642c50(0x82,&local_c4);
  FUN_00509a64(*(undefined4 *)(*(int *)(local_8 + 0x414) + 0x60),local_c4);
  FUN_00642c50(0x83,&local_c8);
  FUN_00509a64(*(undefined4 *)(*(int *)(local_8 + 0x348) + 0x60),local_c8);
  FUN_00642c50(0x84,&local_cc);
  FUN_00509a64(*(undefined4 *)(*(int *)(local_8 + 0x34c) + 0x60),local_cc);
  FUN_00642c50(0x85,&local_d0);
  FUN_00509a64(*(undefined4 *)(*(int *)(local_8 + 0x350) + 0x60),local_d0);
  FUN_00642c50(0x86,&local_d4);
  FUN_00509a64(*(undefined4 *)(*(int *)(local_8 + 0x354) + 0x60),local_d4);
  FUN_00642c50(0x87,&local_d8);
  FUN_00509a64(*(undefined4 *)(*(int *)(local_8 + 0x358) + 0x60),local_d8);
  FUN_00642c50(0x88,&local_dc);
  FUN_00509a64(*(undefined4 *)(*(int *)(local_8 + 0x35c) + 0x60),local_dc);
  FUN_00642c50(0x89,&local_e0);
  FUN_00509a64(*(undefined4 *)(*(int *)(local_8 + 0x360) + 0x60),local_e0);
  FUN_00642c50(0x8a,&local_e4);
  FUN_00509a64(*(undefined4 *)(*(int *)(local_8 + 0x364) + 0x60),local_e4);
  *(undefined4 *)PTR_DAT_0066acf8 = 2;
  *(undefined4 *)PTR_DAT_0066b118 = 0xffffffff;
  FUN_004e1414(*(undefined4 *)(local_8 + 0x308),L"Cyberfoot 2015 - www.cyberfoot.net");
  uVar2 = FUN_004032c8(10);
  if (uVar2 < 4) {
    *(undefined4 *)PTR_DAT_0066b6fc = 0;
  }
  else if (uVar2 - 4 < 4) {
    *(undefined4 *)PTR_DAT_0066b6fc = 0x3dcccccd;
  }
  else if (uVar2 - 8 < 3) {
    *(undefined4 *)PTR_DAT_0066b6fc = 0xbdcccccd;
  }
  local_30 = L"좋悡暷謀먀\n";
  pHVar3 = LoadCursorA(DAT_0066c668,"cursor5");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,10,pHVar3);
  FUN_00466414(*(undefined4 *)(local_8 + 0x3f0),CONCAT22(extraout_var,10));
  FUN_00466414(*(undefined4 *)(local_8 + 0x3f8),CONCAT22(extraout_var_00,10));
  FUN_00466414(*(undefined4 *)(local_8 + 0x3fc),CONCAT22(extraout_var_01,10));
  FUN_00466414(*(undefined4 *)(local_8 + 0x3d0),CONCAT22(extraout_var_02,10));
  FUN_00466414(*(undefined4 *)(local_8 + 0x40c),CONCAT22(extraout_var_03,10));
  FUN_00466414(*(undefined4 *)(local_8 + 0x424),CONCAT22(extraout_var_04,10));
  FUN_00466414(*(undefined4 *)(local_8 + 0x420),CONCAT22(extraout_var_05,10));
  FUN_0046599c(*(undefined4 *)(local_8 + 0x390),*(int *)(*(int *)(local_8 + 0x3b8) + 0x44) + 0x14);
  FUN_00465978(*(undefined4 *)(local_8 + 0x390),0xf);
  FUN_0046599c(*(undefined4 *)(local_8 + 0x3b0),*(int *)(*(int *)(local_8 + 0x3b8) + 0x44) + 0x23);
  FUN_0046599c(*(undefined4 *)(local_8 + 0x548),*(int *)(*(int *)(local_8 + 0x390) + 0x44) + 0x46);
  local_30 = L"䖋诼钀\x03謀䁐슃謔ﱅ肋Ќ";
  FUN_0064fdf0();
  FUN_00465978(*(undefined4 *)(local_8 + 0x40c),*(int *)(*(int *)(local_8 + 0x394) + 0x40) + 0x14);
  FUN_00636400(local_8);
  *(undefined4 *)PTR_DAT_0066ae48 = 1;
  local_30 = (wchar_t *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_30;
  local_34 = 0x63d208;
  FUN_0043aa68(*(undefined4 *)(local_8 + 0x2fc),0);
  *in_FS_OFFSET = local_30;
  local_30 = (wchar_t *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_30;
  *in_FS_OFFSET = local_30;
  iVar4 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x22c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8);
  if (iVar4 == 1) {
    FUN_00404928(*(int *)(local_8 + 0x2fc) + 0x80,"Moral do time: Ruim",&stack0xfffffffc);
  }
  else if (iVar4 == 2) {
    FUN_00404928(*(int *)(local_8 + 0x2fc) + 0x80,"Moral do time: Boa",&stack0xfffffffc);
  }
  else if (iVar4 == 3) {
    FUN_00404928(*(int *)(local_8 + 0x2fc) + 0x80,"Moral do time: Excelente",&stack0xfffffffc);
  }
  DAT_006d52c8 = 1;
  iVar4 = *(int *)(PTR_DAT_0066ac78 + 0x88);
  if (iVar4 == 0) {
    iVar4 = *(int *)PTR_DAT_0066b57c;
    if (0 < iVar4) {
      iVar7 = 1;
      puVar5 = (undefined4 *)(PTR_DAT_0066ac78 + 0x140);
      do {
        cVar1 = FUN_00656990(*(undefined4 *)(PTR_DAT_0066ac78 + 0x16c),*puVar5);
        if (cVar1 != '\0') {
          *(int *)PTR_DAT_0066ae48 = iVar7;
          *(undefined4 *)(PTR_DAT_0066ac78 + 8) = *puVar5;
          break;
        }
        iVar7 = iVar7 + 1;
        puVar5 = puVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else if (iVar4 == 1) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 8) = *(undefined4 *)(PTR_DAT_0066ac78 + 0x140);
  }
  else if (iVar4 == 2) {
    iVar4 = *(int *)(PTR_DAT_0066ac78 + 0x110);
    if (iVar4 == 0) {
      iVar4 = *(int *)PTR_DAT_0066b57c;
      if (0 < iVar4) {
        iVar7 = 1;
        piVar6 = (int *)(PTR_DAT_0066ac78 + 0x140);
        do {
          if (((-1 < *piVar6) &&
              (*(char *)(*(int *)PTR_DAT_0066af70 + 0x214 + *piVar6 * 0x2f8) != '\0')) &&
             (cVar1 = FUN_00646a00(*piVar6), cVar1 != '\0')) {
            *(int *)PTR_DAT_0066ae48 = iVar7;
            *(int *)(PTR_DAT_0066ac78 + 8) = *piVar6;
            break;
          }
          iVar7 = iVar7 + 1;
          piVar6 = piVar6 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else if (iVar4 == 1) {
      iVar4 = *(int *)PTR_DAT_0066b57c;
      if (0 < iVar4) {
        iVar7 = 1;
        piVar6 = (int *)(PTR_DAT_0066ac78 + 0x140);
        do {
          if (((-1 < *piVar6) &&
              (*(char *)(*(int *)PTR_DAT_0066af70 + 0x214 + *piVar6 * 0x2f8) != '\0')) &&
             (cVar1 = FUN_006469c4(*piVar6), cVar1 != '\0')) {
            *(int *)PTR_DAT_0066ae48 = iVar7;
            *(int *)(PTR_DAT_0066ac78 + 8) = *piVar6;
            break;
          }
          iVar7 = iVar7 + 1;
          piVar6 = piVar6 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else if ((1 < iVar4) && (iVar4 = *(int *)PTR_DAT_0066b57c, 0 < iVar4)) {
      iVar7 = 1;
      piVar6 = (int *)(PTR_DAT_0066ac78 + 0x140);
      do {
        if ((-1 < *piVar6) &&
           (*(char *)(*(int *)PTR_DAT_0066af70 + 0x214 + *piVar6 * 0x2f8) != '\0')) {
          *(int *)PTR_DAT_0066ae48 = iVar7;
          *(int *)(PTR_DAT_0066ac78 + 8) = *piVar6;
          break;
        }
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else if (iVar4 == 3) {
    iVar4 = *(int *)PTR_DAT_0066b57c;
    if (0 < iVar4) {
      iVar7 = 1;
      piVar6 = (int *)(PTR_DAT_0066ac78 + 0x140);
      do {
        if ((-1 < *piVar6) &&
           (*(char *)(*(int *)PTR_DAT_0066af70 + 0x216 + *piVar6 * 0x2f8) != '\0')) {
          *(int *)PTR_DAT_0066ae48 = iVar7;
          iVar4 = *piVar6;
          *(int *)(PTR_DAT_0066ac78 + 8) = iVar4;
          *(undefined4 *)PTR_DAT_0066b09c =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x40 + iVar4 * 0x2f8);
          break;
        }
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else if (iVar4 == 4) {
    iVar4 = *(int *)PTR_DAT_0066b57c;
    if (0 < iVar4) {
      iVar7 = 1;
      piVar6 = (int *)(PTR_DAT_0066ac78 + 0x140);
      do {
        if ((-1 < *piVar6) &&
           (*(char *)(*(int *)PTR_DAT_0066af70 + 0x217 + *piVar6 * 0x2f8) != '\0')) {
          *(int *)PTR_DAT_0066ae48 = iVar7;
          *(int *)(PTR_DAT_0066ac78 + 8) = *piVar6;
          break;
        }
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else if (iVar4 == 5) {
    iVar4 = *(int *)PTR_DAT_0066b57c;
    if (0 < iVar4) {
      iVar7 = 1;
      piVar6 = (int *)(PTR_DAT_0066ac78 + 0x140);
      do {
        if ((-1 < *piVar6) &&
           (*(char *)(*(int *)PTR_DAT_0066af70 + 0x21b + *piVar6 * 0x2f8) != '\0')) {
          *(int *)PTR_DAT_0066ae48 = iVar7;
          *(int *)(PTR_DAT_0066ac78 + 8) = *piVar6;
          break;
        }
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else if (iVar4 == 6) {
    iVar4 = *(int *)PTR_DAT_0066b57c;
    if (0 < iVar4) {
      iVar7 = 1;
      piVar6 = (int *)(PTR_DAT_0066ac78 + 0x140);
      do {
        if ((-1 < *piVar6) &&
           (*(char *)(*(int *)PTR_DAT_0066af70 + 0x218 + *piVar6 * 0x2f8) != '\0')) {
          *(int *)PTR_DAT_0066ae48 = iVar7;
          *(int *)(PTR_DAT_0066ac78 + 8) = *piVar6;
          break;
        }
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else if ((iVar4 == 10) && (iVar4 = *(int *)PTR_DAT_0066b57c, 0 < iVar4)) {
    iVar7 = 1;
    piVar6 = (int *)(PTR_DAT_0066ac78 + 0x140);
    do {
      if ((-1 < *piVar6) && (cVar1 = FUN_0064544c(*piVar6), cVar1 != '\0')) {
        *(int *)PTR_DAT_0066ae48 = iVar7;
        *(int *)(PTR_DAT_0066ac78 + 8) = *piVar6;
        break;
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_0063b918(local_8);
  if (*PTR_DAT_0066afb4 == '\0') {
    *(int *)PTR_DAT_0066ad34 = *(int *)PTR_DAT_0066ad34 + 1;
    if ((*(int *)(PTR_DAT_0066ac78 + 0xd0) == 1) && (*(int *)PTR_DAT_0066ad34 == 3)) {
      if (PTR_DAT_0066ac78[0x8c] == '\0') {
        FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005b5078,PTR_DAT_0066b104);
        (**(code **)(**(int **)PTR_DAT_0066b104 + 0xec))();
      }
      FUN_0064af08();
      *(undefined4 *)PTR_DAT_0066ad34 = 0;
    }
    else if (*(int *)(PTR_DAT_0066ac78 + 0xd0) == 2) {
      if (PTR_DAT_0066ac78[0x8c] == '\0') {
        FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005b5078,PTR_DAT_0066b104);
        (**(code **)(**(int **)PTR_DAT_0066b104 + 0xec))();
      }
      FUN_0064af08();
      *(undefined4 *)PTR_DAT_0066ad34 = 0;
    }
  }
  DAT_006d52f0 = 1;
  FUN_0043b234(*(undefined4 *)(local_8 + 0x38c),1);
  pwVar9 = L"<shad>";
  uVar8 = FUN_00402c38();
  FUN_006468f4(uVar8,local_ec);
  local_30 = L"</shad>";
  local_34 = 0x63d7de;
  FUN_00405330(&local_e8,3);
  local_34 = 0x63d7f2;
  FUN_00545088(*(undefined4 *)(local_8 + 0x420),local_e8);
  *in_FS_OFFSET = local_30;
  FUN_00405008(local_ec,0x39,pwVar9);
  return;
}

