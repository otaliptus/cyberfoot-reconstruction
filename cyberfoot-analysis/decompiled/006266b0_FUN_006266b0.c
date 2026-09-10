// Address: 006266b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006266b0(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *in_FS_OFFSET;
  bool bVar10;
  undefined4 uStack_290;
  undefined1 *puStack_28c;
  undefined4 *puStack_288;
  undefined4 uStack_284;
  undefined1 *puStack_280;
  undefined1 *puStack_27c;
  undefined1 local_26c [256];
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 local_164 [12];
  undefined4 local_158;
  int *local_c;
  int local_8;
  
  local_16c = 0;
  local_168 = 0;
  puStack_27c = (undefined1 *)0x6266db;
  FUN_00405628(local_164,PTR_DAT_00408718);
  puStack_280 = &LAB_006273a8;
  uStack_284 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_284;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x634) = 0;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x638) = 0;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x63c) = 0;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x44) = 0;
  puStack_288 = (undefined4 *)0x62672f;
  puStack_27c = &stack0xfffffffc;
  iVar5 = FUN_0040a4d4("teams\\selecoes\\*.s11",0x3f,local_164);
  if (iVar5 == 0) {
    puStack_288 = (undefined4 *)0x20;
    puStack_28c = (undefined1 *)0x62674f;
    FUN_00404bf0(&local_168,"teams\\selecoes\\",local_158);
    puStack_28c = (undefined1 *)0x626761;
    local_c = (int *)FUN_00420dec(PTR_PTR_0041bfa0,1,local_168);
    puStack_28c = &LAB_006267e2;
    uStack_290 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_290;
    puStack_288 = (undefined4 *)&stack0xfffffffc;
    iVar5 = FUN_00405eec(DAT_006d4950);
    FUN_004060a8(&DAT_006d4950,PTR_DAT_00624ff0,1,iVar5 + 1);
    (**(code **)(*local_c + 0xc))(local_c,&local_8,4);
    iVar5 = FUN_00405ef4(DAT_006d4950);
    (**(code **)(*local_c + 0xc))(local_c,DAT_006d4950 + iVar5 * 0x6d4,0x6d4);
    puVar2 = puStack_288;
    *in_FS_OFFSET = uStack_290;
    puStack_288 = (undefined4 *)0x62689b;
    puStack_28c = (undefined1 *)0x6267e1;
    FUN_00403a84(local_c,uStack_290,puVar2);
    return;
  }
  puStack_288 = (undefined4 *)0x6268a6;
  iVar5 = FUN_0040a524(local_164);
  if (iVar5 != 0) {
    puStack_288 = (undefined4 *)0x6268b8;
    iVar5 = FUN_00405ef4(DAT_006d4950);
    if (-1 < iVar5) {
      iVar5 = iVar5 + 1;
      local_8 = 0;
      do {
        if (*(int *)(DAT_006d4950 + local_8 * 0x6d4) == 0x83) {
          *(undefined4 *)(DAT_006d4950 + 4 + local_8 * 0x6d4) = 4;
        }
        else {
          puStack_288 = (undefined4 *)0x626901;
          uVar7 = FUN_0064f2d0(*(undefined4 *)(DAT_006d4950 + local_8 * 0x6d4));
          *(undefined4 *)(DAT_006d4950 + 4 + local_8 * 0x6d4) = uVar7;
        }
        local_8 = local_8 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    puStack_288 = (undefined4 *)0x626922;
    iVar5 = FUN_00405ef4(DAT_006d4950);
    if (-1 < iVar5) {
      iVar5 = iVar5 + 1;
      local_8 = 0;
      do {
        if (*(char *)(DAT_006d4950 + 0x698 + local_8 * 0x6d4) == '\v') {
          puStack_288 = (undefined4 *)0x62695b;
          iVar6 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b4b4);
          puStack_288 = (undefined4 *)(iVar6 + 1);
          puStack_28c = (undefined1 *)0x626972;
          FUN_004060a8(PTR_DAT_0066b4b4,PTR_DAT_00488be0,1);
          puStack_288 = (undefined4 *)0x626981;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b4b4);
          *(undefined4 *)(*(int *)PTR_DAT_0066b4b4 + iVar6 * 0x30) =
               *(undefined4 *)(DAT_006d4950 + local_8 * 0x6d4);
          puStack_288 = (undefined4 *)0x6269ad;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b4b4);
          *(undefined4 *)(*(int *)PTR_DAT_0066b4b4 + 4 + iVar6 * 0x30) =
               *(undefined4 *)(DAT_006d4950 + 4 + local_8 * 0x6d4);
          puStack_288 = (undefined4 *)0x6269db;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b4b4);
          puStack_288 = (undefined4 *)0x626a04;
          FUN_004030e0(*(int *)PTR_DAT_0066b4b4 + 8 + iVar6 * 0x30,
                       DAT_006d4950 + 0x27 + local_8 * 0x6d4,0x1e);
          puStack_288 = (undefined4 *)0x626a10;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b4b4);
          *(undefined4 *)(*(int *)PTR_DAT_0066b4b4 + 0x28 + iVar6 * 0x30) =
               *(undefined4 *)(DAT_006d4950 + 0x48 + local_8 * 0x6d4);
          puStack_288 = (undefined4 *)0x626a3e;
          iVar6 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066af70);
          puStack_288 = (undefined4 *)(iVar6 + 1);
          puStack_28c = (undefined1 *)0x626a55;
          FUN_004060a8(PTR_DAT_0066af70,PTR_DAT_00488b20,1);
          puStack_288 = (undefined4 *)0x626a64;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b4b4);
          puStack_288 = (undefined4 *)(*(int *)PTR_DAT_0066b4b4 + 0x2c + iVar6 * 0x30);
          puStack_28c = (undefined1 *)0x626a82;
          uVar7 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *puStack_288 = uVar7;
          iVar6 = 1;
          do {
            if (*(char *)(DAT_006d4950 + local_8 * 0x6d4 + 0x38 + iVar6 * 0x24) != '\0') {
              pbVar1 = (byte *)(DAT_006d4950 + local_8 * 0x6d4 + 0x38 + iVar6 * 0x24);
              bVar10 = *pbVar1 == 0xffffffff;
              puStack_288 = (undefined4 *)0x626ace;
              FUN_00403180(pbVar1,&DAT_006273f0);
              if (!bVar10) {
                puStack_288 = (undefined4 *)0x626ae0;
                iVar8 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
                puStack_288 = (undefined4 *)(iVar8 + 1);
                puStack_28c = (undefined1 *)0x626af7;
                FUN_004060a8(PTR_DAT_0066b5b8,PTR_DAT_00488b00,1);
                puStack_288 = (undefined4 *)0x626b06;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                puStack_288 = (undefined4 *)0x626b31;
                FUN_004030e0(*(int *)PTR_DAT_0066b5b8 + iVar8 * 0x130,
                             DAT_006d4950 + local_8 * 0x6d4 + 0x38 + iVar6 * 0x24,0x14);
                puStack_288 = (undefined4 *)0x626b3d;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x50 + iVar8 * 0x130) =
                     *(undefined4 *)(DAT_006d4950 + local_8 * 0x6d4 + 0x528 + iVar6 * 4);
                if (*(char *)(DAT_006d4950 + local_8 * 0x6d4 + 0x67b + iVar6) != '\0') {
                  puStack_288 = (undefined4 *)0x626b89;
                  iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                  *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + iVar8 * 0x130) = 1;
                }
                puStack_288 = (undefined4 *)0x626ba5;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar8 * 0x130) =
                     *(undefined4 *)(DAT_006d4950 + local_8 * 0x6d4 + 0x598 + iVar6 * 4);
                puStack_288 = (undefined4 *)0x626bd7;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar8 * 0x130) =
                     *(undefined4 *)(DAT_006d4950 + local_8 * 0x6d4 + 0x608 + iVar6 * 4);
                puStack_288 = (undefined4 *)0x626c09;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + iVar8 * 0x130) =
                     *(undefined4 *)(DAT_006d4950 + local_8 * 0x6d4 + 0x448 + iVar6 * 4);
                puStack_288 = (undefined4 *)0x626c3b;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                *(uint *)(*(int *)PTR_DAT_0066b5b8 + 0x2c + iVar8 * 0x130) =
                     (uint)*(byte *)(DAT_006d4950 + local_8 * 0x6d4 + 0x698 + iVar6);
                puStack_288 = (undefined4 *)0x626c6e;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar8 * 0x130) =
                     *(undefined4 *)(DAT_006d4950 + local_8 * 0x6d4 + 0x4b8 + iVar6 * 4);
                puStack_288 = (undefined4 *)0x626ca0;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xa8 + iVar8 * 0x130) = 0;
                puStack_288 = (undefined4 *)0x626cc0;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xd4 + iVar8 * 0x130) = 0;
                puStack_288 = (undefined4 *)0x626ce0;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xac + iVar8 * 0x130) = 0;
                puStack_288 = (undefined4 *)0x626d00;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xd8 + iVar8 * 0x130) = 0;
                puStack_288 = (undefined4 *)0x626d20;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xb0 + iVar8 * 0x130) = 0;
                puStack_288 = (undefined4 *)0x626d40;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xdc + iVar8 * 0x130) = 0;
                puStack_288 = (undefined4 *)0x626d60;
                iVar9 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                puVar3 = PTR_DAT_0066b574;
                iVar8 = *(int *)(PTR_DAT_0066ac78 + 0x16c);
                puVar2 = (undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x68 + iVar9 * 0x130);
                *puVar2 = *(undefined4 *)(PTR_DAT_0066b574 + iVar8 * 0x18 + -0x10);
                puVar2[1] = *(undefined4 *)(puVar3 + iVar8 * 0x18 + -0xc);
                puStack_288 = (undefined4 *)0x626d9d;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x88 + iVar8 * 0x130) = 0;
                puStack_288 = (undefined4 *)0x626dbd;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x118 + iVar8 * 0x130) = 0;
                puStack_288 = (undefined4 *)0x626ddd;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x11c + iVar8 * 0x130) = 0;
                puStack_288 = (undefined4 *)0x626dfd;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + iVar8 * 0x130) = 3;
                puStack_288 = (undefined4 *)0x626e1f;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                puStack_288 = (undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar8 * 0x130);
                puStack_28c = (undefined1 *)0x626e3b;
                uVar7 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
                *puStack_288 = uVar7;
                puStack_288 = (undefined4 *)0x626e4a;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + iVar8 * 0x130) = 100;
                puStack_288 = (undefined4 *)0x626e69;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                puStack_288 = (undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x58 + iVar8 * 0x130);
                puStack_28c = (undefined1 *)0x626e85;
                FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                puStack_28c = (undefined1 *)0x626e8a;
                uVar7 = FUN_0065173c();
                *puStack_288 = uVar7;
                puStack_288 = (undefined4 *)0x626e99;
                uVar7 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                puStack_288 = (undefined4 *)0x626eaf;
                uVar7 = FUN_005d5b24(uVar7,*(undefined4 *)(DAT_006d4950 + 0x48 + local_8 * 0x6d4));
                puStack_288 = (undefined4 *)0x626ebd;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar8 * 0x130) = uVar7;
                puStack_288 = (undefined4 *)0x626ed8;
                iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
                *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x1c + iVar8 * 0x130) =
                     *(undefined4 *)(DAT_006d4950 + local_8 * 0x6d4);
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 != 0x1d);
          puStack_288 = (undefined4 *)0x626f0d;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          puStack_288 = (undefined4 *)(*(int *)PTR_DAT_0066af70 + iVar6 * 0x2f8);
          puStack_28c = (undefined1 *)0x626f45;
          FUN_004051e4(local_26c,
                       *(undefined4 *)
                        (PTR_DAT_0066b294 + *(int *)(DAT_006d4950 + local_8 * 0x6d4) * 4),0xff);
          puVar2 = puStack_288;
          puStack_288 = (undefined4 *)0x626f53;
          FUN_004030e0(puVar2,local_26c,0x19);
          puStack_288 = (undefined4 *)0x626f5f;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar6 * 0x2f8) =
               *(undefined4 *)(DAT_006d4950 + 0x48 + local_8 * 0x6d4);
          puStack_288 = (undefined4 *)0x626f8e;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar6 * 0x2f8) = 0;
          puStack_288 = (undefined4 *)0x626faa;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar6 * 0x2f8) =
               *(undefined4 *)(DAT_006d4950 + 0x54 + local_8 * 0x6d4);
          puStack_288 = (undefined4 *)0x626fd9;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + iVar6 * 0x2f8) =
               *(undefined4 *)(DAT_006d4950 + 0x50 + local_8 * 0x6d4);
          puStack_288 = (undefined4 *)0x627008;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          puStack_288 = (undefined4 *)0x62702f;
          FUN_004030e0(*(int *)PTR_DAT_0066af70 + 0x1a + iVar6 * 0x2f8,
                       DAT_006d4950 + 8 + local_8 * 0x6d4,0x1e);
          puStack_288 = (undefined4 *)0x62703b;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar6 * 0x2f8) =
               *(undefined4 *)(DAT_006d4950 + local_8 * 0x6d4);
          puStack_288 = (undefined4 *)0x627066;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(uint *)(*(int *)PTR_DAT_0066af70 + 0x58 + iVar6 * 0x2f8) =
               (uint)*(byte *)(DAT_006d4950 + 0x6d1 + local_8 * 0x6d4);
          puStack_288 = (undefined4 *)0x627096;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + iVar6 * 0x2f8) = 0xffffffff;
          puStack_288 = (undefined4 *)0x6270b5;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          puStack_288 = (undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x40 + iVar6 * 0x2f8);
          puStack_28c = (undefined1 *)0x6270d1;
          uVar7 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b4b4);
          *puStack_288 = uVar7;
          puStack_288 = (undefined4 *)0x6270e0;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xd0 + iVar6 * 0x2f8) = 0;
          puStack_288 = (undefined4 *)0x627100;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xf8 + iVar6 * 0x2f8) = 0;
          puStack_288 = (undefined4 *)0x627120;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x120 + iVar6 * 0x2f8) = 0;
          puStack_288 = (undefined4 *)0x627140;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x170 + iVar6 * 0x2f8) = 0;
          puStack_288 = (undefined4 *)0x627160;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x198 + iVar6 * 0x2f8) = 0;
          puStack_288 = (undefined4 *)0x627180;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x148 + iVar6 * 0x2f8) = 0;
          puStack_288 = (undefined4 *)0x6271a0;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xd4 + iVar6 * 0x2f8) = 0;
          puStack_288 = (undefined4 *)0x6271c0;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xfc + iVar6 * 0x2f8) = 0;
          puStack_288 = (undefined4 *)0x6271e0;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x124 + iVar6 * 0x2f8) = 0;
          puStack_288 = (undefined4 *)0x627200;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x174 + iVar6 * 0x2f8) = 0;
          puStack_288 = (undefined4 *)0x627220;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x19c + iVar6 * 0x2f8) = 0;
          puStack_288 = (undefined4 *)0x627240;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x14c + iVar6 * 0x2f8) = 0;
          puStack_288 = (undefined4 *)0x627260;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xd8 + iVar6 * 0x2f8) = 0;
          puStack_288 = (undefined4 *)0x627280;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x100 + iVar6 * 0x2f8) = 0;
          puStack_288 = (undefined4 *)0x6272a0;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x128 + iVar6 * 0x2f8) = 0;
          puStack_288 = (undefined4 *)0x6272c0;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x178 + iVar6 * 0x2f8) = 0;
          puStack_288 = (undefined4 *)0x6272e0;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x1a0 + iVar6 * 0x2f8) = 0;
          puStack_288 = (undefined4 *)0x627300;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x150 + iVar6 * 0x2f8) = 0;
          puStack_288 = (undefined4 *)0x627320;
          iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x215 + iVar6 * 0x2f8) = 1;
          puStack_288 = (undefined4 *)0x62733f;
          FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          puStack_288 = (undefined4 *)0x627344;
          FUN_0065156c();
          puStack_288 = (undefined4 *)0x627350;
          FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
          puStack_288 = (undefined4 *)0x627355;
          FUN_006520d0();
        }
        local_8 = local_8 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    puStack_288 = (undefined4 *)0x0;
    puStack_28c = (undefined1 *)0x627376;
    FUN_004060a8(&DAT_006d4950,PTR_DAT_00624ff0,1);
    puVar4 = puStack_27c;
    *in_FS_OFFSET = uStack_284;
    puStack_27c = &LAB_006273af;
    puStack_280 = (undefined1 *)0x627396;
    FUN_004048f8(&local_16c,2,puVar4);
    puStack_280 = (undefined1 *)0x6273a7;
    FUN_004056f8(local_164,PTR_DAT_00408718);
    return;
  }
  puStack_288 = (undefined4 *)0x20;
  puStack_28c = (undefined1 *)0x626801;
  FUN_00404bf0(&local_16c,"teams\\selecoes\\",local_158);
  puStack_28c = (undefined1 *)0x626813;
  local_c = (int *)FUN_00420dec(PTR_PTR_0041bfa0,1,local_16c);
  puStack_28c = &LAB_00626894;
  uStack_290 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_290;
  puStack_288 = (undefined4 *)&stack0xfffffffc;
  iVar5 = FUN_00405eec(DAT_006d4950);
  FUN_004060a8(&DAT_006d4950,PTR_DAT_00624ff0,1,iVar5 + 1);
  (**(code **)(*local_c + 0xc))(local_c,&local_8,4);
  iVar5 = FUN_00405ef4(DAT_006d4950);
  (**(code **)(*local_c + 0xc))(local_c,DAT_006d4950 + iVar5 * 0x6d4,0x6d4);
  puVar2 = puStack_288;
  *in_FS_OFFSET = uStack_290;
  puStack_288 = (undefined4 *)0x62689b;
  puStack_28c = (undefined1 *)0x626893;
  FUN_00403a84(local_c,uStack_290,puVar2);
  return;
}

