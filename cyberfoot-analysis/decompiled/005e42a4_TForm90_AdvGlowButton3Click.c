// Address: 005e42a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm90_AdvGlowButton3Click(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 local_164 [16];
  undefined1 local_154 [16];
  undefined4 local_144;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_114 [200];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined *puStack_40;
  undefined4 uStack_3c;
  undefined *puStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10 [3];
  
  puStack_20 = &stack0xfffffffc;
  local_10[0] = 0x32;
  do {
    local_10[2] = 0;
    local_10[0] = local_10[0] + -1;
  } while (local_10[0] != 0);
  puStack_24 = &LAB_005e46c0;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x5e42d4;
  FUN_00466128(*(undefined4 *)(param_1 + 0x328),0);
  iVar3 = 0xb;
  piVar5 = (int *)(PTR_DAT_0066b120 + 0xc);
  do {
    if (*piVar5 < 1) {
      puStack_2c = (undefined1 *)0x5e42f4;
      FUN_00466128(*(undefined4 *)(param_1 + 0x328),CONCAT31((int3)((uint)piVar5 >> 8),1));
      goto LAB_005e4621;
    }
    piVar5 = piVar5 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 3;
  piVar5 = local_10;
  do {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puStack_2c = (undefined1 *)0x5e431f;
  FUN_00466208(*(undefined4 *)(param_1 + 0x31c),&stack0xffffffec);
  if (unaff_EBX != 0) {
    puStack_2c = (undefined1 *)0x5e4335;
    iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b540);
    puStack_2c = (undefined1 *)(iVar3 + 1);
    puStack_30 = (undefined1 *)0x5e434c;
    FUN_004060a8(PTR_DAT_0066b540,PTR_DAT_00488fa0,1);
    puStack_2c = (undefined1 *)0x5e435b;
    iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b540);
    *(undefined4 *)(*(int *)PTR_DAT_0066b540 + iVar3 * 0x9c) = *(undefined4 *)(PTR_DAT_0066ac78 + 8)
    ;
    *(undefined4 *)(*(int *)PTR_DAT_0066b540 + 4 + iVar3 * 0x9c) =
         *(undefined4 *)(PTR_DAT_0066ac78 + 0x10);
    puStack_2c = (undefined1 *)0x5e4398;
    FUN_00466208(*(undefined4 *)(param_1 + 0x31c),&local_118);
    puStack_2c = (undefined1 *)0x5e43ae;
    FUN_00404b80(local_114,local_118,0xff);
    puStack_2c = (undefined1 *)0x5e43c6;
    FUN_004030e0(*(int *)PTR_DAT_0066b540 + 0x7c + iVar3 * 0x9c,local_114,0x14);
    iVar4 = 1;
    puVar6 = (undefined4 *)(PTR_DAT_0066b120 + 0xc);
    do {
      *(undefined4 *)(*(int *)PTR_DAT_0066b540 + iVar3 * 0x9c + 0x30 + iVar4 * 4) = *puVar6;
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 4;
    } while (iVar4 != 0x13);
    iVar4 = 1;
    puVar6 = (undefined4 *)PTR_DAT_0066b120;
    do {
      *(undefined4 *)(*(int *)PTR_DAT_0066b540 + iVar3 * 0x9c + 4 + iVar4 * 4) = *puVar6;
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 4;
    } while (iVar4 != 0xc);
    iVar4 = 0xb;
    piVar5 = (int *)PTR_DAT_0066b120;
    do {
      iVar1 = *piVar5;
      if (iVar1 - 2U < 8) {
        local_10[0] = local_10[0] + 1;
      }
      else if (iVar1 - 10U < 8) {
        local_10[1] = local_10[1] + 1;
      }
      else if (iVar1 - 0x12U < 8) {
        local_10[2] = local_10[2] + 1;
      }
      piVar5 = piVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puStack_2c = (undefined1 *)0x5e4460;
    (**(code **)(**(int **)(param_1 + 0x2f8) + 0x1d0))(*(int **)(param_1 + 0x2f8),1);
    puStack_2c = (undefined1 *)0x5e446d;
    FUN_00409dd8(iVar3,&local_120);
    puStack_2c = (undefined1 *)0x5e447e;
    FUN_004051d4(&local_11c,local_120);
    puStack_2c = (undefined1 *)local_11c;
    piVar5 = *(int **)(param_1 + 0x2f8);
    puStack_30 = (undefined1 *)0x5e4495;
    iVar4 = (**(code **)(*piVar5 + 0x11c))();
    puStack_30 = (undefined1 *)0x5e44a5;
    FUN_00416244(local_130,iVar4 + -1,0xfc);
    puStack_30 = local_130;
    puStack_34 = (undefined1 *)0x5e44bc;
    FUN_00416478(local_140,&DAT_005e46dc);
    puVar2 = puStack_30;
    puStack_30 = (undefined1 *)0x5e44ca;
    FUN_0050e9b8(piVar5,local_140,puVar2);
    puStack_30 = (undefined1 *)0x5e44e4;
    FUN_00405194(&local_144,*(int *)PTR_DAT_0066b540 + 0x7c + iVar3 * 0x9c);
    puStack_30 = (undefined1 *)local_144;
    puStack_34 = (undefined1 *)0x5e44f9;
    iVar4 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
    puStack_34 = (undefined1 *)0x5e4509;
    FUN_00416244(local_154,iVar4 + -1,0xfc);
    puStack_34 = local_154;
    puStack_38 = (undefined *)0x5e4520;
    FUN_00416478(local_164,"tnome");
    puVar2 = puStack_34;
    puStack_34 = (undefined1 *)0x5e4532;
    FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_164,puVar2);
    puStack_34 = (undefined1 *)0x5e4540;
    FUN_00409dd8(local_10[0],&local_16c);
    puStack_34 = (undefined1 *)local_16c;
    puStack_38 = &DAT_005e46f8;
    uStack_3c = 0x5e4559;
    FUN_00409dd8(local_10[1],&local_170);
    uStack_3c = local_170;
    puStack_40 = &DAT_005e46f8;
    uStack_44 = 0x5e4572;
    FUN_00409dd8(local_10[2],&local_174);
    uStack_44 = local_174;
    uStack_48 = 0x5e4588;
    FUN_00404c64(&local_168,5);
    uStack_48 = 0x5e459e;
    FUN_00404b80(local_114,local_168,0xff);
    uStack_48 = 0x5e45b9;
    FUN_004030e0(*(int *)PTR_DAT_0066b540 + 0x91 + iVar3 * 0x9c,local_114,10);
    uStack_48 = 0x5e45d3;
    FUN_00405194(&local_178,*(int *)PTR_DAT_0066b540 + 0x91 + iVar3 * 0x9c);
    uStack_48 = local_178;
    uStack_4c = 0x5e45e8;
    iVar3 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
    puStack_2c = (undefined1 *)0x5e45f8;
    FUN_00416244(local_188,iVar3 + -1,0xfc);
    puStack_2c = local_188;
    puStack_30 = (undefined1 *)0x5e460f;
    FUN_00416478(local_198,"tformacao");
    puVar2 = puStack_2c;
    puStack_2c = (undefined1 *)0x5e4621;
    FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_198,puVar2);
  }
LAB_005e4621:
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005e46ca;
  puStack_24 = (undefined1 *)0x5e4644;
  FUN_00405744(local_198,PTR_DAT_004010f8,2);
  puStack_24 = (undefined1 *)0x5e464f;
  FUN_00404ff0(&local_178);
  puStack_24 = (undefined1 *)0x5e465f;
  FUN_004048f8(&local_174,4);
  puStack_24 = (undefined1 *)0x5e4675;
  FUN_00405744(local_164,PTR_DAT_004010f8,2);
  puStack_24 = (undefined1 *)0x5e4680;
  FUN_00404ff0(&local_144);
  puStack_24 = (undefined1 *)0x5e4696;
  FUN_00405744(local_140,PTR_DAT_004010f8,2);
  puStack_24 = (undefined1 *)0x5e46a1;
  FUN_004048d4(&local_120);
  puStack_24 = (undefined1 *)0x5e46ac;
  FUN_00404ff0(&local_11c);
  puStack_24 = (undefined1 *)0x5e46b7;
  FUN_004048d4(&local_118);
  puStack_24 = (undefined1 *)0x5e46bf;
  FUN_004048d4(&stack0xffffffec);
  return;
}

