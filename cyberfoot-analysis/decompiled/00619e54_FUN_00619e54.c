// Address: 00619e54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00619e54(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 **local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c [28];
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48 [3];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined4 ***local_28;
  undefined4 ***local_24;
  undefined4 **local_20;
  undefined1 *puStack_1c;
  int iVar8;
  undefined4 ***local_c;
  
  puStack_1c = &stack0xfffffffc;
  iVar7 = 0x13;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_20 = (undefined4 **)&LAB_0061a8ef;
  local_24 = (undefined4 ***)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 8) {
    local_2c = (undefined *)0x3;
    local_28 = (undefined4 ***)0x619e9e;
    puStack_1c = &stack0xfffffffc;
    FUN_00642c50(0x147,&local_20);
  }
  else {
    local_2c = (undefined *)0x4;
    local_28 = (undefined4 ***)0x619eb4;
    FUN_00642c50(0x148,&local_20);
  }
  local_28 = (undefined4 ***)0x619eb9;
  cVar5 = FUN_00653218();
  if (cVar5 == '\0') {
    local_28 = (undefined4 ***)0x619eeb;
    FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 0xcc));
  }
  else {
    local_28 = (undefined4 ***)0x619ed3;
    FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 200));
  }
  uVar1 = *(uint *)(PTR_DAT_0066ac78 + 0x62c);
  if (uVar1 < 4) {
    if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 8) {
      *(undefined4 *)PTR_DAT_0066aea4 = 6;
    }
    else {
      *(undefined4 *)PTR_DAT_0066aea4 = 8;
    }
  }
  else if (uVar1 == 4) {
    *(undefined4 *)PTR_DAT_0066aea4 = 4;
  }
  else if (uVar1 == 5) {
    *(undefined4 *)PTR_DAT_0066aea4 = 2;
  }
  else if (uVar1 == 6) {
    *(undefined4 *)PTR_DAT_0066aea4 = 2;
  }
  if (uVar1 == 4) {
    unaff_EDI = 0;
  }
  else if (uVar1 == 5) {
    unaff_EDI = 4;
  }
  else if (uVar1 == 6) {
    unaff_EDI = 6;
  }
  else if (uVar1 == 7) {
    unaff_EDI = 8;
  }
  if ((int)uVar1 < 4) {
    local_28 = (undefined4 ***)local_20;
    local_2c = &DAT_0061a904;
    local_30 = (undefined *)0x619fb2;
    FUN_00642c50(0xd1,&local_4c);
    local_30 = (undefined *)local_4c;
    local_34 = &DAT_0061a910;
    uStack_38 = 0x619fcd;
    FUN_00409dd8(*(undefined4 *)(PTR_DAT_0066ac78 + 0x62c),&local_54);
    uStack_38 = 0x619fd8;
    FUN_004051d4(&local_50,local_54);
    uStack_38 = local_50;
    uStack_3c = 0x619fe8;
    FUN_00405330(local_48,5);
    local_28 = (undefined4 ***)0x619ff9;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_48[0]);
  }
  else if (uVar1 == 4) {
    local_28 = (undefined4 ***)local_20;
    local_2c = &DAT_0061a904;
    local_30 = (undefined *)0x61a029;
    FUN_00642c50(0xd7,&local_5c);
    local_30 = (undefined *)local_5c;
    local_34 = (undefined *)0x61a039;
    FUN_00405330(&local_58,3);
    local_28 = (undefined4 ***)0x61a04a;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_58);
  }
  else if (uVar1 == 5) {
    local_28 = (undefined4 ***)local_20;
    local_2c = &DAT_0061a904;
    local_30 = (undefined *)0x61a061;
    FUN_00642c50(0xd8,&local_64);
    local_30 = (undefined *)local_64;
    local_34 = (undefined *)0x61a071;
    FUN_00405330(&local_60,3);
    local_28 = (undefined4 ***)0x61a082;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_60);
  }
  else if (uVar1 == 6) {
    local_28 = (undefined4 ***)local_20;
    local_2c = &DAT_0061a904;
    local_30 = (undefined *)0x61a099;
    FUN_00642c50(0xd9,&local_6c);
    local_30 = (undefined *)local_6c;
    local_34 = (undefined *)0x61a0a9;
    FUN_00405330(&local_68,3);
    local_28 = (undefined4 ***)0x61a0ba;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_68);
  }
  iVar7 = 0;
  if (*(int *)(PTR_DAT_0066ac78 + 0x62c) < 4) {
    if (0 < (int)local_2c) {
      local_30 = local_2c;
      local_34 = PTR_DAT_0066ac78 + 0x10;
      do {
        local_c = (undefined4 ***)0x1;
        do {
          iVar7 = iVar7 + 1;
          local_24 = &local_28;
          local_28 = (undefined4 ***)0x61a10b;
          FUN_00648c98(*(undefined4 *)(PTR_DAT_0066ac78 + 0x62c),1,local_c);
          iVar8 = *(int *)(local_34 + (int)local_28 * 4 + 0x4a8);
          iVar2 = *(int *)(local_34 + (int)local_24 * 4 + 0x4a8);
          local_28 = (undefined4 ***)0x61a135;
          FUN_004030d4(local_8c,&DAT_0061a914);
          local_28 = (undefined4 ***)0x61a150;
          FUN_004030a4(local_8c,*(int *)PTR_DAT_0066af70 + iVar8 * 0x2f8,0x1a);
          local_28 = (undefined4 ***)0x61a15e;
          FUN_00404b48(&local_70,local_8c);
          local_28 = (undefined4 ***)0x61a16e;
          FUN_00466238(*(undefined4 *)(DAT_006d4764 + iVar7 * 4),local_70);
          local_28 = (undefined4 ***)0x61a17e;
          FUN_004030d4(local_8c,&DAT_0061a914);
          local_28 = (undefined4 ***)0x61a199;
          FUN_004030a4(local_8c,*(int *)PTR_DAT_0066af70 + iVar2 * 0x2f8,0x1a);
          local_28 = (undefined4 ***)0x61a1aa;
          FUN_00404b48(&local_90,local_8c);
          local_28 = (undefined4 ***)0x61a1bd;
          FUN_00466238(*(undefined4 *)(DAT_006d4768 + iVar7 * 4),local_90);
          local_28 = (undefined4 ***)0x61a1df;
          FUN_0042a3a0(*(undefined4 *)(*(int *)(DAT_006d4764 + iVar7 * 4) + 0x68),
                       *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + iVar8 * 0x2f8));
          local_28 = (undefined4 ***)0x61a201;
          FUN_0042a3a0(*(undefined4 *)(*(int *)(DAT_006d4768 + iVar7 * 4) + 0x68),
                       *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + iVar2 * 0x2f8));
          local_28 = (undefined4 ***)0x61a220;
          FUN_004663a8(*(undefined4 *)(DAT_006d4764 + iVar7 * 4),
                       *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar8 * 0x2f8));
          local_28 = (undefined4 ***)0x61a244;
          FUN_0042ab6c(*(undefined4 *)(*(int *)(&DAT_006d461c + iVar7 * 4) + 0x16c),
                       *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar8 * 0x2f8));
          local_28 = (undefined4 ***)0x61a263;
          FUN_004663a8(*(undefined4 *)(DAT_006d4768 + iVar7 * 4),
                       *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar2 * 0x2f8));
          local_28 = (undefined4 ***)0x61a287;
          FUN_0042ab6c(*(undefined4 *)(*(int *)(&DAT_006d46bc + iVar7 * 4) + 0x16c),
                       *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar2 * 0x2f8));
          *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar7 * 0x1bc) = iVar8;
          *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar7 * 0x1bc) = iVar2;
          *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x10 + iVar7 * 0x1bc) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x60 + iVar8 * 0x2f8);
          *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x14 + iVar7 * 0x1bc) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x60 + iVar2 * 0x2f8);
          *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x18 + iVar7 * 0x1bc) = 3;
          *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x1c + iVar7 * 0x1bc) = 3;
          local_28 = (undefined4 ***)0xffffffff;
          local_2c = (undefined *)0xffffffff;
          local_30 = (undefined *)0x61a321;
          uVar6 = FUN_0064dee4(*(undefined4 *)(PTR_DAT_0066ac78 + 0x88),0xffffffff,0xffffffff);
          *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + iVar7 * 0x1bc) = uVar6;
          local_28 = (undefined4 ***)0x61a35b;
          FUN_0042d610(*(undefined4 *)(*(int *)(&DAT_006d47ac + iVar7 * 4) + 0x168),
                       *(undefined4 *)
                        (*(int *)PTR_DAT_0066b3e0 +
                        *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar8 * 0x2f8) * 4));
          local_28 = (undefined4 ***)0x61a387;
          FUN_0042d610(*(undefined4 *)(*(int *)(&DAT_006d484c + iVar7 * 4) + 0x168),
                       *(undefined4 *)
                        (*(int *)PTR_DAT_0066b3e0 +
                        *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar2 * 0x2f8) * 4));
          if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                        *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar7 * 0x1bc) * 0x2f8) != '\0') ||
             (*(char *)(*(int *)PTR_DAT_0066af70 +
                       *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar7 * 0x1bc) * 0x2f8 + 0x39) !=
              '\0')) {
            DAT_006d4794 = DAT_006d4794 + 1;
            (&DAT_006d4490)[DAT_006d4794] = iVar7;
          }
          local_c = (undefined4 ***)((int)local_c + 1);
        } while (local_c != (undefined4 ***)0x3);
        local_34 = local_34 + 0x10;
        local_30 = local_30 + -1;
      } while (local_30 != (undefined *)0x0);
      local_30 = (undefined *)0x0;
    }
  }
  else if (0 < *(int *)PTR_DAT_0066aea4) {
    iVar8 = 1;
    local_30 = (undefined *)*(int *)PTR_DAT_0066aea4;
    do {
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x23c) = 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x3f8) = 0;
      iVar7 = iVar7 + 1;
      iVar2 = *(int *)(PTR_DAT_0066ad60 + (iVar8 + unaff_EDI) * 0x30 + -0x30);
      iVar3 = *(int *)(PTR_DAT_0066ad60 + (iVar8 + unaff_EDI) * 0x30 + -0x2c);
      local_28 = (undefined4 ***)0x61a45a;
      FUN_004030d4(local_8c,&DAT_0061a914);
      local_28 = (undefined4 ***)0x61a475;
      FUN_004030a4(local_8c,*(int *)PTR_DAT_0066af70 + iVar2 * 0x2f8,0x1a);
      local_28 = (undefined4 ***)0x61a486;
      FUN_00404b48(&local_94,local_8c);
      local_28 = (undefined4 ***)0x61a499;
      FUN_00466238(*(undefined4 *)(DAT_006d4764 + iVar7 * 4),local_94);
      local_28 = (undefined4 ***)0x61a4a9;
      FUN_004030d4(local_8c,&DAT_0061a914);
      local_28 = (undefined4 ***)0x61a4c4;
      FUN_004030a4(local_8c,*(int *)PTR_DAT_0066af70 + iVar3 * 0x2f8,0x1a);
      local_28 = (undefined4 ***)0x61a4d5;
      FUN_00404b48(&local_98,local_8c);
      local_28 = (undefined4 ***)0x61a4e8;
      FUN_00466238(*(undefined4 *)(DAT_006d4768 + iVar7 * 4),local_98);
      local_28 = (undefined4 ***)0x61a50a;
      FUN_0042a3a0(*(undefined4 *)(*(int *)(DAT_006d4764 + iVar7 * 4) + 0x68),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + iVar2 * 0x2f8));
      local_28 = (undefined4 ***)0x61a52c;
      FUN_0042a3a0(*(undefined4 *)(*(int *)(DAT_006d4768 + iVar7 * 4) + 0x68),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + iVar3 * 0x2f8));
      local_28 = (undefined4 ***)0x61a54b;
      FUN_004663a8(*(undefined4 *)(DAT_006d4764 + iVar7 * 4),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar2 * 0x2f8));
      local_28 = (undefined4 ***)0x61a56f;
      FUN_0042ab6c(*(undefined4 *)(*(int *)(&DAT_006d461c + iVar7 * 4) + 0x16c),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar2 * 0x2f8));
      local_28 = (undefined4 ***)0x61a58e;
      FUN_004663a8(*(undefined4 *)(DAT_006d4768 + iVar7 * 4),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar3 * 0x2f8));
      local_28 = (undefined4 ***)0x61a5b2;
      FUN_0042ab6c(*(undefined4 *)(*(int *)(&DAT_006d46bc + iVar7 * 4) + 0x16c),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar3 * 0x2f8));
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar7 * 0x1bc) = iVar2;
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar7 * 0x1bc) = iVar3;
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x10 + iVar7 * 0x1bc) =
           *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x60 + iVar2 * 0x2f8);
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x14 + iVar7 * 0x1bc) =
           *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x60 + iVar3 * 0x2f8);
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x18 + iVar7 * 0x1bc) = 3;
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x1c + iVar7 * 0x1bc) = 3;
      local_28 = (undefined4 ***)0xffffffff;
      local_2c = (undefined *)0xffffffff;
      local_30 = (undefined *)0x61a64c;
      uVar6 = FUN_0064dee4(*(undefined4 *)(PTR_DAT_0066ac78 + 0x88),0xffffffff,0xffffffff);
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + iVar7 * 0x1bc) = uVar6;
      local_28 = (undefined4 ***)0x61a686;
      FUN_0042d610(*(undefined4 *)(*(int *)(&DAT_006d47ac + iVar7 * 4) + 0x168),
                   *(undefined4 *)
                    (*(int *)PTR_DAT_0066b3e0 +
                    *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar2 * 0x2f8) * 4));
      local_28 = (undefined4 ***)0x61a6b2;
      FUN_0042d610(*(undefined4 *)(*(int *)(&DAT_006d484c + iVar7 * 4) + 0x168),
                   *(undefined4 *)
                    (*(int *)PTR_DAT_0066b3e0 +
                    *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar3 * 0x2f8) * 4));
      if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                    *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar7 * 0x1bc) * 0x2f8) != '\0') ||
         (*(char *)(*(int *)PTR_DAT_0066af70 +
                   *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar7 * 0x1bc) * 0x2f8 + 0x39) != '\0')
         ) {
        DAT_006d4794 = DAT_006d4794 + 1;
        (&DAT_006d4490)[DAT_006d4794] = iVar7;
      }
      iVar8 = iVar8 + 1;
      local_30 = (undefined *)((int)local_30 + -1);
    } while (local_30 != (undefined *)0x0);
  }
  if (0 < *(int *)PTR_DAT_0066aea4) {
    local_c = (undefined4 ****)0x1;
    local_30 = (undefined *)*(int *)PTR_DAT_0066aea4;
    do {
      iVar7 = *(int *)(PTR_DAT_0066ac78 + 0x62c);
      if (iVar7 < 4) {
        local_24 = local_c;
        local_2c = (undefined *)0x61a7b9;
        FUN_0061a918(param_1,iVar7,
                     *(undefined4 *)
                      (*(int *)PTR_DAT_0066af70 + 0x94 +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + (int)local_c * 0x1bc) * 0x2f8));
      }
      else {
        local_28 = local_c;
        local_24 = &local_9c;
        local_30 = (undefined *)0x61a76e;
        FUN_00618dc4(param_1,iVar7,
                     *(undefined4 *)
                      (*(int *)PTR_DAT_0066af70 + 0x94 +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + (int)local_c * 0x1bc) * 0x2f8));
        local_30 = (undefined *)0x61a784;
        FUN_00404b6c(*(int *)PTR_DAT_0066b3b8 + 0x3c + (int)local_c * 0x1bc,local_9c);
      }
      local_28 = (undefined4 ***)0x61a7d8;
      FUN_00466238(*(undefined4 *)(DAT_006d4760 + (int)local_c * 4),
                   *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x3c + (int)local_c * 0x1bc));
      local_28 = (undefined4 ***)0x61a7ea;
      FUN_00466238(*(undefined4 *)(DAT_006d4788 + (int)local_c * 4),0);
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x2c + (int)local_c * 0x1bc) = 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x30 + (int)local_c * 0x1bc) = 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x34 + (int)local_c * 0x1bc) = 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x38 + (int)local_c * 0x1bc) = 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x28 + (int)local_c * 0x1bc) = 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x24 + (int)local_c * 0x1bc) = 0;
      local_28 = (undefined4 ***)0x61a84a;
      FUN_00466238(*(undefined4 *)(DAT_006d4780 + (int)local_c * 4),0);
      local_28 = (undefined4 ***)0x61a85c;
      FUN_00545088(*(undefined4 *)(DAT_006d4784 + (int)local_c * 4),0);
      iVar7 = *(int *)(DAT_006d492c + (int)local_c * 4);
      if (*(int *)(iVar7 + 0x168) != 0) {
        local_28 = (undefined4 ***)0x61a877;
        FUN_0043aa68(iVar7,0);
      }
      local_c = (undefined4 ***)((int)local_c + 1);
      local_30 = (undefined *)((int)local_30 + -1);
    } while (local_30 != (undefined *)0x0);
  }
  local_28 = (undefined4 ***)0x61a88f;
  FUN_0043b234(DAT_006d4918,1);
  puVar4 = puStack_1c;
  *in_FS_OFFSET = (int)local_24;
  puStack_1c = &LAB_0061a8f6;
  local_20 = (undefined4 **)0x61a8a7;
  FUN_00404ff0(&local_9c,local_24,puVar4);
  local_20 = (undefined4 **)0x61a8b7;
  FUN_004048f8(&local_98,3);
  local_20 = (undefined4 **)0x61a8bf;
  FUN_004048d4(&local_70);
  local_20 = (undefined4 **)0x61a8cc;
  FUN_00405008(&local_6c,6);
  local_20 = (undefined4 **)0x61a8d4;
  FUN_004048d4(&local_54);
  local_20 = (undefined4 **)0x61a8e1;
  FUN_00405008(&local_50,3);
  local_20 = (undefined4 **)0x61a8ee;
  FUN_00405008(&local_20,2);
  return;
}

