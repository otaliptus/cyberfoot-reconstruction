// Address: 0048b1d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048b1d0(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  undefined4 uStack_2f8;
  undefined1 *puStack_2f4;
  undefined1 *puStack_2f0;
  undefined1 *puStack_2ec;
  undefined1 *puStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined1 *puStack_2d8;
  undefined1 *puStack_2d4;
  undefined4 uStack_2d0;
  undefined *puStack_2cc;
  undefined1 *puStack_2c8;
  undefined4 uStack_2c4;
  undefined1 *puStack_2c0;
  undefined1 *puStack_2bc;
  undefined1 local_2ac [16];
  undefined4 local_29c [33];
  undefined1 *local_218 [5];
  int local_204;
  undefined4 *local_1e4 [2];
  undefined1 **local_1dc;
  undefined4 local_1c8;
  uint local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  uint local_108;
  int *local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  bVar7 = 0;
  puStack_2bc = (undefined1 *)0x48b1f1;
  local_8 = param_1;
  FUN_004032a8(local_29c,0x288,0);
  ppuVar5 = &PTR_FUN_00665324;
  puVar6 = local_29c;
  for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *ppuVar5;
    ppuVar5 = ppuVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  local_1e4[0] = local_29c;
  puStack_2bc = (undefined1 *)0x48b224;
  FUN_0049850c(local_1e4,0x3e,0x174);
  puStack_2c0 = &LAB_0048b53c;
  uStack_2c4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c4;
  puStack_2cc = &DAT_0048b505;
  uStack_2d0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2d0;
  local_218[0] = &LAB_0048ae18;
  local_204 = local_8;
  local_1dc = local_218;
  puStack_2c8 = &stack0xfffffffc;
  puStack_2bc = &stack0xfffffffc;
  if (*(int *)(*(int *)(local_8 + 0x28) + 8) != 0) {
    puStack_2d4 = (undefined1 *)0x48b273;
    puStack_2c8 = &stack0xfffffffc;
    puStack_2bc = &stack0xfffffffc;
    FUN_0048bc60(local_8);
  }
  puStack_2d4 = (undefined1 *)0x48b27f;
  uVar2 = FUN_00403a54(PTR_PTR_0041c090,1);
  *(undefined4 *)(*(int *)(local_8 + 0x28) + 8) = uVar2;
  puStack_2d4 = (undefined1 *)0x0;
  puStack_2d8 = (undefined1 *)0x0;
  uStack_2dc = 0x48b295;
  FUN_004208f4(uVar2);
  puStack_2d4 = (undefined1 *)0x48b2a9;
  FUN_004978e0(local_1e4,*(undefined4 *)(*(int *)(local_8 + 0x28) + 8));
  if (*(int **)(local_8 + 0x2c) != (int *)0x0) {
    puStack_2d4 = (undefined1 *)0x48b2ba;
    iVar3 = (**(code **)(**(int **)(local_8 + 0x2c) + 0x2c))();
    if (iVar3 != 0) {
      puStack_2d4 = (undefined1 *)0x48b2c9;
      iVar3 = (**(code **)(**(int **)(local_8 + 0x2c) + 0x20))();
      if (iVar3 != 0) {
        puStack_2d4 = (undefined1 *)0x48b2ea;
        local_1c8 = (**(code **)(**(int **)(local_8 + 0x2c) + 0x2c))();
        puStack_2d4 = (undefined1 *)0x48b2fb;
        uVar2 = (**(code **)(**(int **)(local_8 + 0x2c) + 0x2c))();
        *(undefined4 *)(*(int *)(local_8 + 0x28) + 0x10) = uVar2;
        puStack_2d4 = (undefined1 *)0x48b30f;
        local_1c4 = (**(code **)(**(int **)(local_8 + 0x2c) + 0x20))();
        puStack_2d4 = (undefined1 *)0x48b320;
        uVar2 = (**(code **)(**(int **)(local_8 + 0x2c) + 0x20))();
        iVar3 = *(int *)(local_8 + 0x28);
        *(undefined4 *)(iVar3 + 0xc) = uVar2;
        local_1c0 = 3;
        local_1bc = 2;
        puStack_2d4 = (undefined1 *)0x48b349;
        local_14 = (int *)FUN_0042fcb8(PTR_PTR_00429378,CONCAT31((int3)((uint)iVar3 >> 8),1));
        puStack_2d8 = &LAB_0048b4f4;
        uStack_2dc = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_2dc;
        uStack_2e0 = 0x48b368;
        puStack_2d4 = &stack0xfffffffc;
        (**(code **)(*local_14 + 8))(local_14,*(undefined4 *)(local_8 + 0x2c));
        uStack_2e0 = 0x48b372;
        FUN_00431290(local_14,6);
        uStack_2e0 = 0x48b37d;
        FUN_00497b38(local_1e4);
        uStack_2e0 = 0x48b393;
        FUN_00497a3c(local_1e4,*(undefined1 *)(local_8 + 0x3f),0xffffffff);
        if (*(char *)(local_8 + 0x3d) != '\0') {
          *(undefined1 *)(*(int *)(local_8 + 0x28) + 0x14) = 1;
          uStack_2e0 = 0x48b3b6;
          FUN_00497cac(local_1e4,1);
        }
        if (*(char *)(local_8 + 0x41) != '\0') {
          uStack_2e0 = 0x48b3ca;
          FUN_00498114(local_1e4);
        }
        uStack_2e0 = 0x48b3d4;
        local_10 = FUN_004303f0(local_14,0);
        uStack_2e0 = 0x48b3e4;
        iVar3 = FUN_004303f0(local_14,1);
        uVar4 = iVar3 - local_10;
        if (((int)uVar4 < 1) || ((uVar4 & 3) != 0)) {
          local_c = 1;
        }
        else {
          local_c = local_1c4;
        }
        uStack_2e0 = 0;
        uStack_2e4 = 0;
        puStack_2e8 = (undefined1 *)0x0;
        puStack_2ec = local_2ac;
        puStack_2f0 = (undefined1 *)0x48b41c;
        FUN_0041c990(0,0,0);
        puStack_2e8 = local_2ac;
        puStack_2ec = (undefined1 *)0x0;
        puStack_2f0 = (undefined1 *)0x48b436;
        FUN_00403c80(local_8,local_8,0);
        puStack_2f4 = &LAB_0048b4d7;
        uStack_2f8 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_2f8;
        puStack_2f0 = &stack0xfffffffc;
        FUN_0049832c(local_1e4,0xffffffff);
        while (local_108 < local_1c4) {
          iVar3 = FUN_004983a0(local_1e4,&local_10,local_c);
          local_10 = local_10 + uVar4 * iVar3;
        }
        FUN_0049862c(local_1e4);
        puVar1 = puStack_2f0;
        *in_FS_OFFSET = uStack_2f8;
        puStack_2f0 = &LAB_0048b4de;
        puStack_2f4 = (undefined1 *)0x48b498;
        iVar3 = FUN_0040288c(0,uStack_2f8,puVar1);
        if (iVar3 == 0) {
          puStack_2f4 = (undefined1 *)0x64;
        }
        else {
          puStack_2f4 = (undefined1 *)0x0;
        }
        uStack_2f8 = 0;
        FUN_0041c990(0,0,0,local_2ac,0);
        FUN_00403c80(local_8,local_8,2,0,local_2ac);
        return;
      }
    }
  }
  puVar1 = puStack_2c8;
  *in_FS_OFFSET = uStack_2d0;
  puStack_2c8 = (undefined1 *)0x48b2da;
  FUN_004042fc(0,uStack_2d0,puVar1);
  return;
}

