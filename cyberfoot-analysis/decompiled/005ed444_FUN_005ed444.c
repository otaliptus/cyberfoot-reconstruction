// Address: 005ed444
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005ed444(int param_1)

{
  undefined1 *puVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar2;
  undefined2 extraout_var_02;
  int iVar3;
  undefined *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  undefined4 local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_14 = 0;
  puStack_128 = &LAB_005ee3ff;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x334) != 0) {
    puStack_130 = (undefined1 *)0x5ed48b;
    FUN_00466414(*(undefined4 *)(param_1 + 0x318),0xfff5);
    puStack_130 = (undefined1 *)0x5ed499;
    FUN_00466414(DAT_006d37a0,CONCAT22(extraout_var_02,0xfff5));
    puStack_134 = &LAB_005ed4db;
    uStack_138 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_138;
    uVar5 = 0x20;
    puStack_130 = &stack0xfffffffc;
    FUN_00404bf0(&local_14,&DAT_005ee418,*(undefined4 *)(local_8 + 0x334),0x20);
    local_10 = (int *)FUN_00420dec(PTR_PTR_0041bfa0,1,local_14,uVar5);
    *in_FS_OFFSET = uStack_138;
    puStack_134 = &LAB_005ee317;
    uStack_138 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_138;
    puStack_130 = &stack0xfffffffc;
    (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
    (**(code **)(*local_10 + 0xc))(local_10,PTR_DAT_0066ac78,0x760);
    if (*(int *)(PTR_DAT_0066ac78 + 4) == 0xf) {
      (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
      FUN_004060a8(PTR_DAT_0066b5b8,PTR_DAT_00488b00,1,local_c);
      iVar3 = local_c;
      if (-1 < local_c + -1) {
        local_c = 0;
        do {
          (**(code **)(*local_10 + 0xc))(local_10,*(int *)PTR_DAT_0066b5b8 + local_c * 0x130,0x130);
          local_c = local_c + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
      FUN_004060a8(PTR_DAT_0066af70,PTR_DAT_00488b20,1,local_c);
      iVar3 = local_c;
      if (-1 < local_c + -1) {
        local_c = 0;
        do {
          (**(code **)(*local_10 + 0xc))(local_10,*(int *)PTR_DAT_0066af70 + local_c * 0x2f8,0x2f8);
          local_c = local_c + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066af70);
      uVar2 = extraout_var_00;
      if (0x13 < iVar3) {
        iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
        uVar2 = extraout_var_01;
        if (199 < iVar3) {
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b4b4,PTR_DAT_00488be0,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066b4b4 + local_c * 0x30,0x30);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b718,PTR_DAT_00488ba0,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066b718 + local_c * 0x80,0x80);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          local_c = 0;
          puVar4 = PTR_DAT_0066b608;
          do {
            (**(code **)(*local_10 + 0xc))(local_10,puVar4,0x10);
            local_c = local_c + 1;
            puVar4 = puVar4 + 0x10;
          } while (local_c != 5);
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066afec,PTR_DAT_00488bc0,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066afec + local_c * 0x38,0x38);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066ae84,PTR_DAT_00488b40,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066ae84 + local_c * 0x18,0x18);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          local_c = 1;
          puVar4 = PTR_DAT_0066ad60;
          do {
            (**(code **)(*local_10 + 0xc))(local_10,puVar4,0x30);
            local_c = local_c + 1;
            puVar4 = puVar4 + 0x30;
          } while (local_c != 0x11);
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          local_c = 1;
          puVar4 = PTR_DAT_0066af90;
          do {
            (**(code **)(*local_10 + 0xc))(local_10,puVar4,0x30);
            local_c = local_c + 1;
            puVar4 = puVar4 + 0x30;
          } while (local_c != 7);
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          local_c = 0;
          puVar4 = PTR_DAT_0066ae98;
          do {
            (**(code **)(*local_10 + 0xc))(local_10,puVar4,0x568);
            local_c = local_c + 1;
            puVar4 = puVar4 + 0x568;
          } while (local_c != 0x1b);
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b154,PTR_DAT_00488c80,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))(local_10,*(int *)PTR_DAT_0066b154 + local_c * 600,600);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b544,PTR_DAT_00488cc0,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))(local_10,*(int *)PTR_DAT_0066b544 + local_c * 8,8);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b770,PTR_DAT_00488ce0,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066b770 + local_c * 0x30,0x30);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b0d4,PTR_DAT_00488d00,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066b0d4 + local_c * 0x18,0x18);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066aca0,PTR_DAT_00488b60,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066aca0 + local_c * 0x294,0x294);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066afa0,PTR_DAT_00488d20,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066afa0 + local_c * 0x48,0x48);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b160,PTR_DAT_00488d80,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066b160 + local_c * 0x18,0x18);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b058,PTR_DAT_00488c20,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066b058 + local_c * 0x14,0x14);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b3d0,PTR_DAT_00488c40,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066b3d0 + local_c * 0x1c,0x1c);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b560,PTR_DAT_00488c60,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066b560 + local_c * 0x1c,0x1c);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b114,PTR_DAT_00488de0,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066b114 + local_c * 0x14,0x14);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b070,PTR_DAT_00488e00,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066b070 + local_c * 0x20,0x20);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b2b8,PTR_DAT_00488e20,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))(local_10,*(int *)PTR_DAT_0066b2b8 + local_c * 0xc,0xc);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b108,PTR_DAT_00488e40,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066b108 + local_c * 0x28,0x28);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b05c,PTR_DAT_00488e60,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066b05c + local_c * 0x18,0x18);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b308,PTR_DAT_00488e80,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066b308 + local_c * 0x1c,0x1c);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b128,PTR_DAT_00488ea0,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066b128 + local_c * 0x20,0x20);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066ae14,PTR_DAT_00488ec0,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066ae14 + local_c * 0x20,0x20);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b604,PTR_DAT_00488ee0,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066b604 + local_c * 0x20,0x20);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b6b4,PTR_DAT_00488f20,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066b6b4 + local_c * 0x10,0x10);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066ae58,PTR_DAT_00488f40,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066ae58 + local_c * 0x10,0x10);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b6ac,PTR_DAT_00488f60,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))(local_10,*(int *)PTR_DAT_0066b6ac + local_c * 0xc,0xc);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b474,PTR_DAT_00488f00,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066b474 + local_c * 0x20,0x20);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b754,PTR_DAT_00488f80,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066b754 + local_c * 0x78,0x78);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066add8,PTR_DAT_00489000,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))(local_10,*(int *)PTR_DAT_0066add8 + local_c * 8,8);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b578,PTR_DAT_00488d40,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))(local_10,*(int *)PTR_DAT_0066b578 + local_c * 100,100);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b1b8,PTR_DAT_00489020,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066b1b8 + local_c * 0x18,0x18);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066acd8,PTR_DAT_00488d60,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066acd8 + local_c * 0x68,0x68);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_10 + 0xc))(local_10,&local_c,4);
          FUN_004060a8(PTR_DAT_0066b540,PTR_DAT_00488fa0,1,local_c);
          iVar3 = local_c;
          if (-1 < local_c + -1) {
            local_c = 0;
            do {
              (**(code **)(*local_10 + 0xc))
                        (local_10,*(int *)PTR_DAT_0066b540 + local_c * 0x9c,0x9c);
              local_c = local_c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          puVar1 = puStack_130;
          *in_FS_OFFSET = uStack_138;
          puStack_130 = &LAB_005ee31e;
          puStack_134 = (undefined1 *)0x5ee316;
          FUN_00403a84(local_10,uStack_138,puVar1);
          return;
        }
      }
      FUN_00437ef0(&DAT_005ee454,1,CONCAT22(uVar2,DAT_005ee430),0);
      FUN_004042fc();
      puVar1 = puStack_124;
    }
    else {
      FUN_00437ef0("Invalid file",1,CONCAT22(extraout_var,DAT_005ee430),0);
      FUN_004042fc();
      puVar1 = puStack_124;
    }
  }
  puStack_124 = puVar1;
  puVar1 = puStack_124;
  *in_FS_OFFSET = uStack_12c;
  puStack_124 = &LAB_005ee406;
  puStack_128 = (undefined1 *)0x5ee3fe;
  FUN_004048d4(&local_14,uStack_12c,puVar1);
  return;
}

