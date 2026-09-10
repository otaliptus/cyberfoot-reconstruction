// Address: 0064af08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064af08(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uStack_f8;
  undefined1 *puStack_f4;
  undefined1 *puStack_f0;
  undefined4 uStack_ec;
  undefined1 *puStack_e8;
  undefined1 *puStack_e4;
  undefined1 local_d4 [56];
  undefined4 local_9c;
  undefined1 local_98 [56];
  undefined1 local_60 [56];
  undefined1 local_28 [28];
  int *local_c;
  int local_8;
  
  puStack_e4 = &stack0xfffffffc;
  local_9c = 0;
  puStack_e8 = &LAB_0064bdfa;
  uStack_ec = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_ec;
  puVar1 = &stack0xfffffffc;
  if (PTR_DAT_0066ac78[0x8c] == '\0') {
    puStack_f0 = (undefined1 *)0x64af50;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005b5078,PTR_DAT_0066b104);
    puStack_f0 = (undefined1 *)0x64af5f;
    (**(code **)(**(int **)PTR_DAT_0066b104 + 0xec))();
    puVar1 = puStack_e4;
  }
  puStack_e4 = puVar1;
  puVar1 = puStack_e4;
  if (PTR_DAT_0066ac78[0x8c] != '\0') {
    puStack_f4 = &LAB_0064afbe;
    uStack_f8 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_f8;
    puStack_f0 = &stack0xfffffffc;
    FUN_004030e0(PTR_DAT_0066ac78 + 0x6c9,
                 *(int *)PTR_DAT_0066b718 +
                 *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)
                 * 0x80,CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b718 >> 8),0x19));
    puVar1 = puStack_f0;
    *in_FS_OFFSET = uStack_f8;
    puStack_f4 = &LAB_0064b0b4;
    uStack_f8 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_f8;
    if ((*(int *)(PTR_DAT_0066ac78 + 0x88) < 7) || (*(int *)(PTR_DAT_0066ac78 + 0x88) == 10)) {
      puStack_f0 = &stack0xfffffffc;
      FUN_004030e0(PTR_DAT_0066ac78 + 0x6e3,
                   *(int *)PTR_DAT_0066af70 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8,
                   CONCAT31((int3)((uint)*(int *)PTR_DAT_0066af70 >> 8),0x19));
    }
    else {
      puStack_f0 = &stack0xfffffffc;
      FUN_004030d4(local_28,*(int *)PTR_DAT_0066af70 + *(int *)(PTR_DAT_0066ac78 + 0x600) * 0x2f8,
                   puVar1);
      FUN_004030a4(local_28,&DAT_0064be08,0x1b);
      FUN_004030d4(local_60,local_28);
      FUN_004030a4(local_60,*(int *)PTR_DAT_0066af70 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8,0x34);
      FUN_004030d4(local_98,local_60);
      FUN_004030a4(local_98,&DAT_0064be0c,0x35);
      FUN_004030e0(PTR_DAT_0066ac78 + 0x6e3,local_98,0x19);
    }
    puVar1 = puStack_f0;
    *in_FS_OFFSET = uStack_f8;
    puStack_f4 = &LAB_0064b12a;
    uStack_f8 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_f8;
    uVar4 = 0xffff;
    puStack_f0 = &stack0xfffffffc;
    FUN_004030d4(local_d4,&DAT_0064be10,puVar1,0xffff);
    FUN_004030a4(local_d4,PTR_DAT_0066ac78 + 0x8c,0x36);
    FUN_00404b48(&local_9c,local_d4);
    local_c = (int *)FUN_00420dec(PTR_PTR_0041bfa0,1,local_9c,uVar4);
    *in_FS_OFFSET = uStack_f8;
    puStack_f4 = &LAB_0064bdda;
    uStack_f8 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_f8;
    local_8 = 1;
    puStack_f0 = &stack0xfffffffc;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    (**(code **)(*local_c + 0x10))(local_c,PTR_DAT_0066ac78,0x760);
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b5b8 + local_8 * 0x130,0x130);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066af70);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066af70 + local_8 * 0x2f8,0x2f8);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b4b4);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b4b4 + local_8 * 0x30,0x30);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b718);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b718 + local_8 * 0x80,0x80);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_8 = 4;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    local_8 = 0;
    puVar3 = PTR_DAT_0066b608;
    do {
      (**(code **)(*local_c + 0x10))(local_c,puVar3,0x10);
      local_8 = local_8 + 1;
      puVar3 = puVar3 + 0x10;
    } while (local_8 != 5);
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066afec);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066afec + local_8 * 0x38,0x38);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066ae84);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066ae84 + local_8 * 0x18,0x18);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_8 = 0x10;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    local_8 = 1;
    puVar3 = PTR_DAT_0066ad60;
    do {
      (**(code **)(*local_c + 0x10))(local_c,puVar3,0x30);
      local_8 = local_8 + 1;
      puVar3 = puVar3 + 0x30;
    } while (local_8 != 0x11);
    local_8 = 6;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    local_8 = 1;
    puVar3 = PTR_DAT_0066af90;
    do {
      (**(code **)(*local_c + 0x10))(local_c,puVar3,0x30);
      local_8 = local_8 + 1;
      puVar3 = puVar3 + 0x30;
    } while (local_8 != 7);
    local_8 = 0x1b;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    local_8 = 0;
    puVar3 = PTR_DAT_0066ae98;
    do {
      (**(code **)(*local_c + 0x10))(local_c,puVar3,0x568);
      local_8 = local_8 + 1;
      puVar3 = puVar3 + 0x568;
    } while (local_8 != 0x1b);
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b154);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b154 + local_8 * 600,600);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b544);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b544 + local_8 * 8,8);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b770);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b770 + local_8 * 0x30,0x30);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b0d4);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b0d4 + local_8 * 0x18,0x18);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066aca0 + local_8 * 0x294,0x294);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066afa0);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066afa0 + local_8 * 0x48,0x48);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b160);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b160 + local_8 * 0x18,0x18);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b058);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b058 + local_8 * 0x14,0x14);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b3d0);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b3d0 + local_8 * 0x1c,0x1c);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b560);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b560 + local_8 * 0x1c,0x1c);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b114);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b114 + local_8 * 0x14,0x14);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b070);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b070 + local_8 * 0x20,0x20);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b2b8);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b2b8 + local_8 * 0xc,0xc);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b108);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b108 + local_8 * 0x28,0x28);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b05c);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b05c + local_8 * 0x18,0x18);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b308);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b308 + local_8 * 0x1c,0x1c);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b128);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b128 + local_8 * 0x20,0x20);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066ae14);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066ae14 + local_8 * 0x20,0x20);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b604);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b604 + local_8 * 0x20,0x20);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b6b4);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b6b4 + local_8 * 0x10,0x10);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066ae58);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066ae58 + local_8 * 0x10,0x10);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b6ac);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b6ac + local_8 * 0xc,0xc);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b474);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b474 + local_8 * 0x20,0x20);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b754);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b754 + local_8 * 0x78,0x78);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066add8);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066add8 + local_8 * 8,8);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b578);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b578 + local_8 * 100,100);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b1b8);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b1b8 + local_8 * 0x18,0x18);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066acd8);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066acd8 + local_8 * 0x68,0x68);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b540);
    local_8 = iVar2;
    (**(code **)(*local_c + 0x10))(local_c,&local_8,4);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        (**(code **)(*local_c + 0x10))(local_c,*(int *)PTR_DAT_0066b540 + local_8 * 0x9c,0x9c);
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    puVar1 = puStack_f0;
    *in_FS_OFFSET = uStack_f8;
    puStack_f0 = (undefined1 *)0x64bde1;
    puStack_f4 = (undefined1 *)0x64bdd9;
    FUN_00403a84(local_c,uStack_f8,puVar1);
    return;
  }
  *in_FS_OFFSET = uStack_ec;
  puStack_e4 = &LAB_0064be01;
  puStack_e8 = (undefined1 *)0x64bdf9;
  FUN_004048d4(&local_9c,uStack_ec,puVar1);
  return;
}

