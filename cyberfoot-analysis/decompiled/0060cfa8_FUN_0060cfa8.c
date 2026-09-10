// Address: 0060cfa8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0060cfa8(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined *puStack_158;
  undefined4 uStack_154;
  undefined1 *puStack_150;
  undefined1 *puStack_14c;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120 [36];
  undefined1 local_fc [32];
  undefined1 local_dc [28];
  undefined1 local_c0 [40];
  undefined1 local_98 [36];
  undefined1 local_74 [36];
  undefined1 local_50 [36];
  undefined1 local_2c [28];
  undefined4 local_10;
  int local_c;
  int local_8;
  
  puStack_14c = &stack0xfffffffc;
  local_134 = 0;
  local_138 = 0;
  local_13c = 0;
  local_12c = 0;
  local_130 = 0;
  local_124 = 0;
  local_128 = 0;
  local_10 = 0;
  puStack_150 = &LAB_0060d54e;
  uStack_154 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_154;
  local_c = param_3;
  local_8 = param_1;
  uVar4 = FUN_00402c38();
  puStack_158 = (undefined *)0x60d024;
  FUN_004048d4(&local_10);
  if (param_5 == 4) {
    if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130) ==
        *(int *)(*(int *)PTR_DAT_0066b3b8 + local_c * 0x1bc + 4 + local_8 * 4)) {
      FUN_004030d4(local_2c,&DAT_0060d564);
      FUN_004030a4(local_2c,*(int *)PTR_DAT_0066b5b8 + param_2 * 0x130,0x1a);
      FUN_00404b48(&local_10,local_2c);
      puStack_158 = &DAT_0060d574;
      FUN_00650548(param_2,*(undefined4 *)
                            (*(int *)PTR_DAT_0066b3b8 + local_c * 0x1bc + 4 + local_8 * 4),
                   *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + local_c * 0x1bc));
    }
    else {
      FUN_004030d4(local_50,"\r(gol contra) ");
      FUN_004030a4(local_50,*(int *)PTR_DAT_0066b5b8 + param_2 * 0x130,0x21);
      puStack_158 = (undefined *)0x60d0e7;
      FUN_00404b48(&local_10,local_50);
    }
  }
  if (param_5 == 0xe) {
    FUN_004030d4(local_74,&DAT_0060d588);
    FUN_004030a4(local_74,*(int *)PTR_DAT_0066b5b8 + param_2 * 0x130,0x20);
    FUN_00404b48(&local_10,local_74);
  }
  if (param_5 == 0xf) {
    FUN_004030d4(local_98,&DAT_0060d598);
    FUN_004030a4(local_98,*(int *)PTR_DAT_0066b5b8 + param_2 * 0x130,0x22);
    FUN_00404b48(&local_10,local_98);
  }
  if ((param_5 == 0xe) || (param_5 == 0xf)) {
    FUN_00650548(param_2,*(undefined4 *)
                          (*(int *)PTR_DAT_0066b3b8 + local_c * 0x1bc + 4 + local_8 * 4),
                 *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + local_c * 0x1bc),&DAT_0060d574);
  }
  if (param_5 == 0x10) {
    FUN_004030d4(local_c0,&DAT_0060d5a8);
    FUN_004030a4(local_c0,*(int *)PTR_DAT_0066b5b8 + param_2 * 0x130,0x25);
    FUN_00404b48(&local_10,local_c0);
  }
  if (param_5 == 0xd) {
    if (param_4 == 1) {
      FUN_004030d4(local_dc,&DAT_0060d5bc);
      FUN_004030a4(local_dc,*(int *)PTR_DAT_0066b5b8 + param_2 * 0x130,0x1b);
      FUN_00404b48(&local_10,local_dc);
      FUN_00650548(param_2,*(undefined4 *)
                            (*(int *)PTR_DAT_0066b3b8 + local_c * 0x1bc + 4 + local_8 * 4),
                   *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + local_c * 0x1bc),&DAT_0060d5cc);
    }
    else if (param_4 == 2) {
      FUN_004030d4(local_dc,&DAT_0060d5d0);
      FUN_004030a4(local_dc,*(int *)PTR_DAT_0066b5b8 + param_2 * 0x130,0x1b);
      FUN_00404b48(&local_10,local_dc);
      FUN_00650548(param_2,*(undefined4 *)
                            (*(int *)PTR_DAT_0066b3b8 + local_c * 0x1bc + 4 + local_8 * 4),
                   *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + local_c * 0x1bc),&DAT_0060d5e0);
    }
    else if (param_4 == 3) {
      FUN_004030d4(local_50,"\r(C.A + C.V.) ");
      FUN_004030a4(local_50,*(int *)PTR_DAT_0066b5b8 + param_2 * 0x130,0x21);
      FUN_00404b48(&local_10,local_50);
      FUN_00650548(param_2,*(undefined4 *)
                            (*(int *)PTR_DAT_0066b3b8 + local_c * 0x1bc + 4 + local_8 * 4),
                   *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + local_c * 0x1bc),&DAT_0060d5e0);
    }
  }
  if (param_5 == 0x12) {
    FUN_004030d4(local_fc,&DAT_0060d5f4);
    FUN_004030a4(local_fc,*(int *)PTR_DAT_0066b5b8 + param_2 * 0x130,0x1f);
    FUN_004030d4(local_120,local_fc);
    FUN_004030a4(local_120,&DAT_0060d600,0x23);
    FUN_00404b48(&local_10,local_120);
    FUN_00650548(param_2,*(undefined4 *)
                          (*(int *)PTR_DAT_0066b3b8 + local_c * 0x1bc + 4 + local_8 * 4),
                 *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + local_c * 0x1bc),&DAT_0060d610);
    if (0 < param_4) {
      FUN_00404b48(&local_124,*(int *)PTR_DAT_0066b5b8 + param_2 * 0x130,*(int *)PTR_DAT_0066b5b8,
                   "(subst.) ",local_10);
      FUN_00404b48(&local_128,*(int *)PTR_DAT_0066b5b8 + param_4 * 0x130,*(int *)PTR_DAT_0066b5b8,
                   &DAT_0060d630,local_124);
      FUN_00404c64(&local_10,5);
    }
  }
  if ((param_5 == 0x13) && (0 < param_4)) {
    FUN_00404b48(&local_12c,*(int *)PTR_DAT_0066b5b8 + param_2 * 0x130,*(int *)PTR_DAT_0066b5b8,
                 "(subst.) ",local_10);
    FUN_00404b48(&local_130,*(int *)PTR_DAT_0066b5b8 + param_4 * 0x130,*(int *)PTR_DAT_0066b5b8,
                 &DAT_0060d630,local_12c);
    FUN_00404c64(&local_10,5);
  }
  if (*PTR_DAT_0066af9c != '\0') {
    piVar1 = *(int **)(*(int *)(DAT_006d4274 + 0x2fc) + 0x198);
    (**(code **)(*piVar1 + 0x1c))(piVar1,&local_138);
    puVar8 = &DAT_0060d640;
    puVar6 = &DAT_0060d640;
    uVar7 = local_10;
    uVar9 = local_138;
    FUN_00409dd8(uVar4,&local_13c);
    puVar5 = &DAT_0060d64c;
    uVar4 = local_13c;
    FUN_00404c64(&local_134,6);
    piVar1 = *(int **)(*(int *)(DAT_006d4274 + 0x2fc) + 0x198);
    iVar2 = *piVar1;
    (**(code **)(iVar2 + 0x2c))(piVar1,local_134,iVar2,puVar5,uVar4,puVar6,uVar7,puVar8,uVar9);
  }
  FUN_006427a8(local_8,param_2,local_c,param_4,param_5);
  if ((param_5 == 0x12) && (0 < param_4)) {
    FUN_006427a8(local_8,param_2,local_c,param_4,0x14);
  }
  puVar3 = puStack_150;
  *in_FS_OFFSET = puStack_158;
  puStack_150 = &LAB_0060d555;
  uStack_154 = 0x60d545;
  FUN_004048f8(&local_13c,7,puVar3);
  uStack_154 = 0x60d54d;
  FUN_004048d4(&local_10);
  return;
}

