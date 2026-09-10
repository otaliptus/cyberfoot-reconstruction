// Address: 0048b6f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_0048b6f8(int *param_1)

{
  HGDIOBJ ho;
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2ec;
  undefined1 *puStack_2e8;
  undefined1 *puStack_2e4;
  undefined1 *puStack_2e0;
  undefined1 *puStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined1 *puStack_2cc;
  undefined1 *puStack_2c8;
  undefined4 uStack_2c4;
  undefined1 *puStack_2c0;
  undefined1 *puStack_2bc;
  undefined1 local_2ac [16];
  undefined1 local_29c [172];
  undefined4 local_1f0;
  char local_1ec;
  undefined4 local_1e8;
  undefined1 local_1e4 [8];
  int local_1dc;
  int local_1b8;
  int local_1a4;
  undefined4 local_19c;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_174;
  uint local_170;
  undefined4 local_164;
  int local_15c;
  uint local_158;
  undefined4 local_154;
  char local_11;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_c = (int *)param_1[0xb];
  if (local_c == (int *)0x0) {
    puStack_2bc = (undefined1 *)0x48b72a;
    local_8 = param_1;
    iVar4 = FUN_0042fcb8(PTR_PTR_00429378,1);
    local_8[0xb] = iVar4;
    local_c = (int *)local_8[0xb];
    local_11 = '\x01';
    puStack_2bc = (undefined1 *)0x48b74b;
    FUN_0048af30(local_8,local_29c);
    puStack_2c0 = &LAB_0048baf2;
    uStack_2c4 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c4;
    puStack_2cc = &LAB_0048bac3;
    uStack_2d0 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2d0;
    uStack_2d4 = 0x48b774;
    puStack_2c8 = &stack0xfffffffc;
    puStack_2bc = &stack0xfffffffc;
    FUN_00430eec(local_8[0xb],0);
    if ((*(char *)((int)local_8 + 0x3e) == '\x01') || (local_1b8 == 1)) {
      uStack_2d4 = 0x48b793;
      FUN_00431290(local_8[0xb],3);
    }
    else {
      uStack_2d4 = 0x48b7a2;
      FUN_00431290(local_8[0xb],6);
    }
    uStack_2d4 = 0;
    uStack_2d8 = 0;
    puStack_2dc = (undefined1 *)0x0;
    puStack_2e0 = local_2ac;
    puStack_2e4 = (undefined1 *)0x48b7ba;
    FUN_0041c990(0,0,0);
    puStack_2dc = local_2ac;
    puStack_2e0 = (undefined1 *)0x0;
    puStack_2e4 = (undefined1 *)0x48b7d4;
    FUN_00403c80(local_8,local_8,0);
    puStack_2e8 = &LAB_0048bab2;
    uStack_2ec = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2ec;
    ho = (HGDIOBJ)local_8[0xe];
    puStack_2e4 = &stack0xfffffffc;
    if (ho != (HGDIOBJ)0x0) {
      if (*(char *)((int)local_8 + 0x3e) == '\x01') {
        puStack_2e4 = &stack0xfffffffc;
        FUN_0048b670(local_1e4,ho);
        uVar5 = FUN_0042fa48(local_8[0xe]);
        (**(code **)(*(int *)local_8[0xb] + 0x38))((int *)local_8[0xb],uVar5);
        local_11 = '\0';
      }
      else {
        puStack_2e4 = &stack0xfffffffc;
        DeleteObject(ho);
        local_8[0xe] = 0;
      }
    }
    FUN_0048d798(local_1e4);
    piVar1 = (int *)local_8[0xb];
    FUN_00430eec(piVar1,0);
    (**(code **)(*piVar1 + 0x40))(piVar1,local_174);
    (**(code **)(*piVar1 + 0x34))(piVar1,local_170);
    local_10 = FUN_004303f0(piVar1,0);
    iVar4 = FUN_004303f0(piVar1,1);
    uVar7 = iVar4 - local_10;
    if (((int)uVar7 < 1) || (uVar5 = local_164, (uVar7 & 3) != 0)) {
      uVar5 = 1;
    }
    if (local_1a4 != 0) {
      while (iVar4 = FUN_0048c2f4(local_1e4), iVar4 != 2) {
        FUN_0048da5c(local_1e4,local_154);
        if ((((*(int *)(local_1dc + 0xc) == 0) && (local_15c != 0)) &&
            (cVar3 = FUN_0043036c(local_8[0xb]), cVar3 == '\x03')) && (local_11 != '\0')) {
          uVar6 = FUN_0048b5c8(local_1e4);
          (**(code **)(*(int *)local_8[0xb] + 0x38))((int *)local_8[0xb],uVar6);
          *(undefined1 *)((int)local_8 + 0x22) = 1;
        }
        local_10 = FUN_004303f0(local_8[0xb],0);
        while (local_158 < local_170) {
          iVar4 = FUN_0048d920(local_1e4,&local_10,uVar5);
          local_10 = local_10 + uVar7 * iVar4;
        }
        FUN_0048dabc(local_1e4);
      }
      local_19c = local_1f0;
      local_18c = local_1e8;
      if (local_1ec != '\0') {
        local_188 = 0xffffffff;
        local_15c = 0;
      }
      FUN_0048da5c(local_1e4,local_154);
      local_10 = FUN_004303f0(local_8[0xb],0);
    }
    if (((local_1a4 == 0) || (local_1ec != '\0')) && ((local_15c != 0 && (local_11 != '\0')))) {
      uVar6 = FUN_0048b5c8(local_1e4);
      (**(code **)(*(int *)local_8[0xb] + 0x38))((int *)local_8[0xb],uVar6);
      *(undefined1 *)((int)local_8 + 0x22) = 1;
      local_10 = FUN_004303f0(local_8[0xb],0);
    }
    while (local_158 < local_170) {
      iVar4 = FUN_0048d920(local_1e4,&local_10,uVar5);
      local_10 = local_10 + uVar7 * iVar4;
    }
    if (local_1a4 != 0) {
      FUN_0048dabc(local_1e4);
    }
    FUN_0048c408(local_1e4);
    puVar2 = puStack_2e4;
    *in_FS_OFFSET = uStack_2ec;
    puStack_2e4 = &LAB_0048bab9;
    puStack_2e8 = (undefined1 *)0x48ba58;
    iVar4 = FUN_0040288c(0,uStack_2ec,puVar2);
    if (iVar4 == 0) {
      puStack_2e8 = (undefined1 *)0x64;
    }
    else {
      puStack_2e8 = (undefined1 *)0x0;
    }
    uStack_2ec = CONCAT31((int3)((uint)local_8 >> 8),*(undefined1 *)((int)local_8 + 0x22));
    FUN_0041c990(0,0,0,local_2ac,0);
    FUN_00403c80(local_8,local_8,2,0,local_2ac);
    if (*(char *)((int)local_8 + 0x22) != '\0') {
      local_8 = (int *)(**(code **)(*local_8 + 0x10))(local_8,local_8);
    }
    return local_8;
  }
  return local_c;
}

