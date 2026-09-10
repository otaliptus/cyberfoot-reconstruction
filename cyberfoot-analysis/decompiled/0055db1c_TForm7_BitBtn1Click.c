// Address: 0055db1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm7_BitBtn1Click(int param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 uVar8;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  int unaff_EBX;
  undefined4 unaff_ESI;
  int unaff_EDI;
  undefined4 *puVar9;
  undefined4 *in_FS_OFFSET;
  byte bVar10;
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined4 local_1f0;
  undefined1 *local_1ec;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined4 local_1a8;
  undefined *local_1a4;
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 *local_180;
  undefined1 local_17c [16];
  undefined1 local_16c [16];
  undefined4 local_15c;
  char *local_158;
  undefined1 local_154 [256];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined *local_34;
  undefined1 *local_30;
  char *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  int local_c;
  int local_8;
  
  bVar10 = 0;
  local_20 = &stack0xfffffffc;
  local_10 = 0x41;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_0055e3f8;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_8 = 0;
  local_2c = (char *)0x55db52;
  FUN_00466208(*(undefined4 *)(param_1 + 800),&local_c);
  if (local_c == 0) {
    local_2c = (char *)0x0;
    local_30 = (undefined1 *)0x55db8a;
    FUN_00437ef0("Enter Full Name",1,CONCAT22(extraout_var,DAT_0055e40c));
  }
  else {
    local_2c = (char *)0x55db66;
    FUN_00466208(*(undefined4 *)(param_1 + 800),&local_10);
    local_2c = (char *)0x55db73;
    FUN_00404928(&DAT_0067b3ec,local_10);
    local_2c = (char *)0x55db9d;
    FUN_00466208(*(undefined4 *)(param_1 + 0x31c),&stack0xffffffec);
    if (unaff_EBX == 0) {
      local_2c = (char *)0x0;
      local_30 = (undefined1 *)0x55dbd5;
      FUN_00437ef0("Enter Short Name",1,CONCAT22(extraout_var_00,DAT_0055e40c));
    }
    else {
      local_2c = (char *)0x55dbb1;
      FUN_00466208(*(undefined4 *)(param_1 + 0x31c),&stack0xffffffe8);
      local_2c = (char *)0x55dbbe;
      FUN_00404928(&DAT_0067b3f0,unaff_ESI);
      local_2c = (char *)0x55dbe8;
      FUN_00466208(*(undefined4 *)(param_1 + 0x318),&stack0xffffffe4);
      if (unaff_EDI == 0) {
        local_2c = (char *)0x0;
        local_30 = (undefined1 *)0x55dc20;
        FUN_00437ef0("Enter Coach",1,CONCAT22(extraout_var_01,DAT_0055e40c));
      }
      else {
        local_2c = (char *)0x55dbfc;
        FUN_00466208(*(undefined4 *)(param_1 + 0x318),&local_20);
        local_2c = (char *)0x55dc09;
        FUN_00404928(&DAT_0067b3f4,local_20);
        local_2c = (char *)0x55dc33;
        FUN_00466208(*(undefined4 *)(param_1 + 0x314),&local_24);
        if (local_24 == (undefined1 *)0x0) {
          local_2c = (char *)0x0;
          local_30 = (undefined1 *)0x55dc6b;
          FUN_00437ef0("Enter Stadium",1,CONCAT22(extraout_var_02,DAT_0055e40c));
        }
        else {
          local_2c = (char *)0x55dc47;
          FUN_00466208(*(undefined4 *)(param_1 + 0x314),&local_28);
          local_2c = (char *)0x55dc54;
          FUN_00404928(&DAT_0067b3fc,local_28);
          local_2c = (char *)0x55dc7e;
          FUN_00466208(*(undefined4 *)(param_1 + 0x300),&local_2c);
          if (local_2c == (char *)0x0) {
            local_2c = (char *)0x0;
            local_30 = (undefined1 *)0x55dcb6;
            FUN_00437ef0("Enter Filename",1,CONCAT22(extraout_var_03,DAT_0055e40c));
          }
          else {
            local_2c = (char *)0x55dc92;
            FUN_00466208(*(undefined4 *)(param_1 + 0x300),&local_30);
            local_2c = (char *)0x55dc9f;
            FUN_00404928(&DAT_0067b408,local_30);
            local_2c = (char *)0x55dcc9;
            FUN_00466208(*(undefined4 *)(param_1 + 0x334),&local_34);
            if (local_34 == (undefined *)0x0) {
              local_2c = (char *)0x0;
              local_30 = (undefined1 *)0x55dce4;
              FUN_00437ef0("Enter stadium number of seats",1,CONCAT22(extraout_var_04,DAT_0055e40c))
              ;
            }
            else {
              local_2c = (char *)0x55dcf7;
              FUN_00466208(*(undefined4 *)(param_1 + 0x334),&local_38);
              local_2c = (char *)0x55dd02;
              FUN_0040343c(local_38,&local_8);
              if (local_8 == 0) {
                local_2c = (char *)0x55dd30;
                FUN_00466208(*(undefined4 *)(param_1 + 0x334),&local_3c);
                local_2c = (char *)0x55dd38;
                iVar5 = FUN_00409ff8(local_3c);
                uVar8 = extraout_var_06;
                if (999 < iVar5) {
                  local_2c = (char *)0x55dd4d;
                  FUN_00466208(*(undefined4 *)(param_1 + 0x334),&local_40);
                  local_2c = (char *)0x55dd55;
                  iVar5 = FUN_00409ff8(local_40);
                  uVar8 = extraout_var_07;
                  if (iVar5 < 0x1d4c1) {
                    local_2c = (char *)0x55dd84;
                    FUN_00466208(*(undefined4 *)(param_1 + 0x334),&local_44);
                    if ((local_44 == 0) || (local_8 != 0)) {
                      local_2c = (char *)0x0;
                      local_30 = (undefined1 *)0x55ddc2;
                      FUN_00437ef0("Enter Stadium capacity",1,CONCAT22(extraout_var_08,DAT_0055e40c)
                                  );
                    }
                    else {
                      local_2c = (char *)0x55dd9e;
                      FUN_00466208(*(undefined4 *)(param_1 + 0x334),&local_48);
                      local_2c = (char *)0x55ddab;
                      FUN_00404928(&DAT_0067b414,local_48);
                      local_2c = "teams/";
                      local_30 = DAT_0067b408;
                      local_34 = &DAT_0055e510;
                      local_38 = (undefined1 *)0x55dde4;
                      FUN_00404c64(&local_4c,3);
                      local_2c = (char *)0x55ddec;
                      cVar3 = FUN_0040a43c(local_4c);
                      if (cVar3 == '\0') {
                        local_2c = (char *)0x55de2c;
                        iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b010);
                        local_30 = (undefined1 *)0x55de45;
                        local_2c = (char *)(iVar5 + 1);
                        FUN_004060a8(PTR_DAT_0066b010,PTR_DAT_0056716c,1);
                        local_30 = (undefined1 *)0x55de5e;
                        local_2c = (char *)(iVar5 + 1);
                        FUN_004060a8(PTR_DAT_0066b110,PTR_DAT_0056718c,1);
                        local_2c = (char *)0x55de78;
                        FUN_00404b80(local_154,DAT_0067b408,0xff);
                        local_2c = (char *)0x55de96;
                        FUN_004030e0(*(int *)PTR_DAT_0066b010 + 0x57 + iVar5 * 200,local_154,0x19);
                        *(undefined1 *)(*(int *)PTR_DAT_0066b010 + 2 + iVar5 * 200) = 0xf;
                        local_2c = (char *)0x55deb8;
                        FUN_00404b80(local_154,DAT_0067b3f0,0xff);
                        local_2c = (char *)0x55ded0;
                        FUN_004030e0(*(int *)PTR_DAT_0066b010 + 4 + iVar5 * 200,local_154,0x19);
                        local_2c = (char *)0x55dee6;
                        FUN_00404b80(local_154,DAT_0067b3ec,0xff);
                        local_2c = (char *)0x55defe;
                        FUN_004030e0(*(int *)PTR_DAT_0066b010 + 0x1e + iVar5 * 200,local_154,0x19);
                        local_2c = (char *)0x55df14;
                        FUN_00404b80(local_154,DAT_0067b3f4,0xff);
                        local_2c = (char *)0x55df2f;
                        FUN_004030e0(*(int *)PTR_DAT_0066b010 + 0x8b + iVar5 * 200,local_154,0x19);
                        local_2c = (char *)0x55df45;
                        FUN_00404b80(local_154,DAT_0067b3fc,0xff);
                        local_2c = (char *)0x55df5d;
                        FUN_004030e0(*(int *)PTR_DAT_0066b010 + 0x38 + iVar5 * 200,local_154,0x1e);
                        local_2c = (char *)0x55df67;
                        uVar6 = FUN_00409ff8(DAT_0067b414);
                        *(undefined4 *)(*(int *)PTR_DAT_0066b010 + 0xc4 + iVar5 * 200) = uVar6;
                        local_2c = (char *)0x55df81;
                        iVar7 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x354));
                        *(undefined *)(*(int *)PTR_DAT_0066b010 + iVar5 * 200) =
                             PTR_DAT_0066b2bc[iVar7 * 8 + 4];
                        local_2c = (char *)0x55dfa4;
                        uVar4 = (**(code **)(**(int **)(param_1 + 0x310) + 0xcc))();
                        *(undefined1 *)(*(int *)PTR_DAT_0066b010 + 3 + iVar5 * 200) = uVar4;
                        local_2c = (char *)0x55dfc1;
                        uVar6 = FUN_0042ab64(*(undefined4 *)(*(int *)(param_1 + 0x304) + 0x16c));
                        *(undefined4 *)(*(int *)PTR_DAT_0066b010 + 0xa8 + iVar5 * 200) = uVar6;
                        local_2c = (char *)0x55dfe1;
                        uVar6 = FUN_0042ab64(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0x16c));
                        *(undefined4 *)(*(int *)PTR_DAT_0066b010 + 0xac + iVar5 * 200) = uVar6;
                        local_2c = (char *)0x55dffe;
                        uVar4 = (**(code **)(**(int **)(param_1 + 0x30c) + 0xcc))();
                        *(undefined1 *)(*(int *)PTR_DAT_0066b010 + 0xb0 + iVar5 * 200) = uVar4;
                        local_2c = (char *)0x55e018;
                        uVar6 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x364));
                        *(undefined4 *)(*(int *)PTR_DAT_0066b010 + 0xb4 + iVar5 * 200) = uVar6;
                        local_2c = (char *)0x55e033;
                        uVar6 = TForm3_getnovoid(*(undefined4 *)PTR_DAT_0066b300);
                        *(undefined4 *)(*(int *)PTR_DAT_0066b010 + 0xbc + iVar5 * 200) = uVar6;
                        if (DAT_0067b40c == 0) {
                          *(undefined1 *)(*(int *)PTR_DAT_0066b010 + 0x71 + iVar5 * 200) = 0;
                        }
                        else {
                          local_2c = (char *)0x55e061;
                          FUN_00404b80(local_154,DAT_0067b40c,0xff);
                          local_2c = (char *)0x55e079;
                          FUN_004030e0(*(int *)PTR_DAT_0066b010 + 0x71 + iVar5 * 200,local_154,0x19)
                          ;
                        }
                        iVar7 = 1;
                        do {
                          puVar9 = (undefined4 *)
                                   (*(int *)PTR_DAT_0066b110 + iVar5 * 0x708 + -0x24 + iVar7 * 0x24)
                          ;
                          *puVar9 = DAT_0055e518;
                          *(undefined2 *)(puVar9 + (uint)bVar10 * -2 + 1) =
                               (&DAT_0055e51c)[(uint)bVar10 * -4];
                          iVar7 = iVar7 + 1;
                        } while (iVar7 != 0x29);
                        iVar7 = 10;
                        puVar9 = &DAT_0067b3ec;
                        do {
                          local_2c = (char *)0x55e0c5;
                          FUN_004048d4(puVar9);
                          puVar9 = puVar9 + 1;
                          iVar7 = iVar7 + -1;
                        } while (iVar7 != 0);
                        *(int *)PTR_DAT_0066ac90 = iVar5;
                        local_2c = (char *)0x55e0e9;
                        TForm3_timesalvar(*(undefined4 *)PTR_DAT_0066b300,iVar5);
                        local_2c = (char *)0x55e100;
                        (**(code **)(**(int **)(*(int *)PTR_DAT_0066b300 + 0x2f8) + 0x1f0))
                                  (*(int **)(*(int *)PTR_DAT_0066b300 + 0x2f8),0);
                        local_2c = (char *)0x55e10d;
                        FUN_00409dd8(iVar5,&local_15c);
                        local_2c = (char *)0x55e11e;
                        FUN_004051d4(&local_158,local_15c);
                        local_2c = local_158;
                        local_30 = (undefined1 *)0x55e134;
                        FUN_00416244(local_16c,0,1);
                        local_30 = local_16c;
                        local_34 = (undefined *)0x55e14b;
                        FUN_00416478(local_17c,&DAT_0055e528);
                        puVar1 = local_30;
                        local_30 = (undefined1 *)0x55e164;
                        FUN_0050e9b8(*(undefined4 *)(*(int *)PTR_DAT_0066b300 + 0x2f8),local_17c,
                                     puVar1);
                        local_30 = (undefined1 *)0x55e181;
                        FUN_00405194(&local_180,*(int *)PTR_DAT_0066b010 + 4 + iVar5 * 200);
                        local_30 = local_180;
                        local_34 = (undefined *)0x55e197;
                        FUN_00416244(local_190,0,1);
                        local_34 = local_190;
                        local_38 = (undefined1 *)0x55e1ae;
                        FUN_00416478(local_1a0,"clube");
                        puVar2 = local_34;
                        local_34 = (undefined *)0x55e1c7;
                        FUN_0050e9b8(*(undefined4 *)(*(int *)PTR_DAT_0066b300 + 0x2f8),local_1a0,
                                     puVar2);
                        local_34 = (undefined *)0x55e1dd;
                        FUN_00409dd8(*(undefined1 *)(*(int *)PTR_DAT_0066b010 + iVar5 * 200),
                                     &local_1a8);
                        local_34 = (undefined *)0x55e1ee;
                        FUN_004051d4(&local_1a4,local_1a8);
                        local_34 = local_1a4;
                        local_38 = (undefined1 *)0x55e204;
                        FUN_00416244(local_1b8,0,1);
                        local_38 = local_1b8;
                        local_3c = (undefined1 *)0x55e21b;
                        FUN_00416478(local_1c8,"paisimg");
                        puVar1 = local_38;
                        local_38 = (undefined1 *)0x55e234;
                        FUN_0050e9b8(*(undefined4 *)(*(int *)PTR_DAT_0066b300 + 0x2f8),local_1c8,
                                     puVar1);
                        local_38 = *(undefined1 **)
                                    (PTR_DAT_0066b294 +
                                    (uint)*(byte *)(*(int *)PTR_DAT_0066b010 + iVar5 * 200) * 4);
                        local_3c = (undefined1 *)0x55e258;
                        FUN_00416244(local_1d8,0,1);
                        local_3c = local_1d8;
                        local_40 = (undefined1 *)0x55e26f;
                        FUN_00416478(local_1e8,"paisnome");
                        puVar1 = local_3c;
                        local_3c = (undefined1 *)0x55e288;
                        FUN_0050e9b8(*(undefined4 *)(*(int *)PTR_DAT_0066b300 + 0x2f8),local_1e8,
                                     puVar1);
                        local_3c = (undefined1 *)0x55e29f;
                        FUN_00409dd8(*(undefined1 *)(*(int *)PTR_DAT_0066b010 + 3 + iVar5 * 200),
                                     &local_1f0);
                        local_3c = (undefined1 *)0x55e2b0;
                        FUN_004051d4(&local_1ec,local_1f0);
                        local_3c = local_1ec;
                        local_40 = (undefined1 *)0x55e2c6;
                        FUN_00416244(local_200,0,1);
                        local_40 = local_200;
                        local_44 = 0x55e2dd;
                        FUN_00416478(local_210,"nivel");
                        puVar1 = local_40;
                        local_40 = (undefined1 *)0x55e2f6;
                        uVar6 = FUN_0050e9b8(*(undefined4 *)(*(int *)PTR_DAT_0066b300 + 0x2f8),
                                             local_210,puVar1);
                        local_40 = (undefined1 *)CONCAT31((int3)((uint)uVar6 >> 8),DAT_0055e570);
                        local_44 = 1;
                        local_48 = 0;
                        local_4c = 0x55e319;
                        (**(code **)(**(int **)(*(int *)PTR_DAT_0066b300 + 0x2f8) + 0x20c))
                                  (*(int **)(*(int *)PTR_DAT_0066b300 + 0x2f8),0,0);
                        local_2c = (char *)0x55e323;
                        FUN_00483bc4(DAT_0067b3e8);
                      }
                      else {
                        local_2c = (char *)0x0;
                        local_30 = (undefined1 *)0x55ddff;
                        FUN_00642c50(0x2fe,&local_54);
                        local_30 = (undefined1 *)0x55de0a;
                        FUN_00404b6c(&local_50,local_54);
                        local_30 = (undefined1 *)0x55de1b;
                        FUN_00437ef0(local_50,1,CONCAT22(extraout_var_09,DAT_0055e40c));
                      }
                    }
                    goto LAB_0055e323;
                  }
                }
                local_2c = (char *)0x0;
                local_30 = (undefined1 *)0x55dd71;
                FUN_00437ef0("Minimun: 1000, maximun: 120000;",1,CONCAT22(uVar8,DAT_0055e40c));
              }
              else {
                local_2c = (char *)0x0;
                local_30 = (undefined1 *)0x55dd1d;
                FUN_00437ef0("Enter stadium number of seats",1,
                             CONCAT22(extraout_var_05,DAT_0055e40c));
              }
            }
          }
        }
      }
    }
  }
LAB_0055e323:
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_0055e402;
  local_24 = (undefined1 *)0x55e346;
  FUN_00405744(local_210,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x55e351;
  FUN_004048d4(&local_1f0);
  local_24 = (undefined1 *)0x55e35c;
  FUN_00404ff0(&local_1ec);
  local_24 = (undefined1 *)0x55e372;
  FUN_00405744(local_1e8,PTR_DAT_004010f8,4);
  local_24 = (undefined1 *)0x55e37d;
  FUN_004048d4(&local_1a8);
  local_24 = (undefined1 *)0x55e388;
  FUN_00404ff0(&local_1a4);
  local_24 = (undefined1 *)0x55e39e;
  FUN_00405744(local_1a0,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x55e3a9;
  FUN_00404ff0(&local_180);
  local_24 = (undefined1 *)0x55e3bf;
  FUN_00405744(local_17c,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x55e3ca;
  FUN_004048d4(&local_15c);
  local_24 = (undefined1 *)0x55e3d5;
  FUN_00404ff0(&local_158);
  local_24 = (undefined1 *)0x55e3dd;
  FUN_00404ff0(&local_54);
  local_24 = (undefined1 *)0x55e3ea;
  FUN_004048f8(&local_50,2);
  local_24 = (undefined1 *)0x55e3f7;
  FUN_004048f8(&local_48,0x10);
  return;
}

