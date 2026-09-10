// Address: 00608da4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Removing unreachable block (ram,0x00608f3f) */
/* WARNING: Removing unreachable block (ram,0x00608f45) */
/* WARNING: Removing unreachable block (ram,0x00608f4f) */
/* WARNING: Removing unreachable block (ram,0x00608f4a) */
/* WARNING: Removing unreachable block (ram,0x00608f52) */
/* WARNING: Removing unreachable block (ram,0x00608f6a) */
/* WARNING: Removing unreachable block (ram,0x00608f0b) */
/* WARNING: Removing unreachable block (ram,0x00608ecc) */
/* WARNING: Removing unreachable block (ram,0x00608ed2) */
/* WARNING: Removing unreachable block (ram,0x00608edc) */
/* WARNING: Removing unreachable block (ram,0x00608ed7) */
/* WARNING: Removing unreachable block (ram,0x00608edf) */
/* WARNING: Removing unreachable block (ram,0x00608fa1) */
/* WARNING: Removing unreachable block (ram,0x00608fab) */
/* WARNING: Removing unreachable block (ram,0x00608fb5) */
/* WARNING: Removing unreachable block (ram,0x00608fb0) */
/* WARNING: Removing unreachable block (ram,0x00608ff1) */
/* WARNING: Removing unreachable block (ram,0x0060921a) */
/* WARNING: Removing unreachable block (ram,0x00609231) */
/* WARNING: Removing unreachable block (ram,0x00609004) */
/* WARNING: Removing unreachable block (ram,0x0060900e) */
/* WARNING: Removing unreachable block (ram,0x00609018) */
/* WARNING: Removing unreachable block (ram,0x0060902d) */
/* WARNING: Removing unreachable block (ram,0x006090cd) */
/* WARNING: Removing unreachable block (ram,0x00609180) */
/* WARNING: Removing unreachable block (ram,0x006090fb) */
/* WARNING: Removing unreachable block (ram,0x00609052) */
/* WARNING: Removing unreachable block (ram,0x00609190) */
/* WARNING: Removing unreachable block (ram,0x006091d1) */
/* WARNING: Removing unreachable block (ram,0x006091da) */
/* WARNING: Removing unreachable block (ram,0x00609198) */

void FUN_00608da4(undefined *param_1,int param_2,undefined4 param_3,undefined4 *param_4,uint param_5
                 ,undefined4 ****param_6,undefined4 ****param_7)

{
  int *piVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  uint uVar5;
  int iVar6;
  undefined4 ****ppppuVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *in_FS_OFFSET;
  byte bVar10;
  int local_138;
  undefined4 ***local_134;
  int local_130;
  uint local_12c;
  undefined4 ***local_128;
  undefined4 local_124;
  int local_120;
  undefined4 ***local_11c;
  int local_118;
  uint local_114;
  undefined4 ***local_110;
  undefined4 local_10c;
  int local_108;
  undefined4 ***local_104;
  int local_100;
  uint local_fc;
  undefined4 ***local_f8;
  undefined4 local_f4;
  int local_f0;
  undefined4 ***local_ec;
  int local_e8;
  uint local_e4;
  undefined4 ***local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined4 ***local_d4;
  int local_d0;
  uint local_cc;
  undefined4 ***local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 ***local_bc;
  int local_b8;
  uint local_b4;
  undefined4 ***local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined4 ***local_a4;
  int local_a0;
  uint local_9c;
  undefined4 ***local_98;
  undefined4 local_94;
  int local_90;
  undefined4 ***local_8c;
  int local_88;
  uint local_84;
  undefined4 ***local_80;
  undefined4 local_7c;
  int local_78;
  undefined4 ***local_74;
  int local_70;
  uint local_6c;
  undefined4 ***local_68;
  undefined4 local_64;
  undefined *local_60;
  int local_5c;
  undefined **local_58;
  undefined **local_54;
  int local_50;
  undefined4 ***local_4c;
  undefined4 ***local_48;
  undefined *puStack_44;
  undefined *local_40;
  int local_3c;
  undefined **local_38;
  undefined4 uStack_34;
  undefined4 ***local_30;
  undefined4 ***local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  
  bVar10 = 0;
  iVar9 = 0x26;
  do {
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  LOCK();
  UNLOCK();
  *in_FS_OFFSET = &local_28;
  uStack_34 = CONCAT13(1,(undefined3)uStack_34);
  local_20 = (undefined1 *)0xffffffff;
  local_28 = 0xffffffff;
  local_24 = 0xffffffff;
  local_30 = (undefined4 ****)0xffffffff;
  local_2c = (undefined4 ****)0xffffffff;
  iVar9 = 8;
  ppuVar4 = &local_60;
  do {
    *ppuVar4 = (undefined *)0xffffffff;
    ppuVar4 = ppuVar4 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                 *(int *)(*(int *)PTR_DAT_0066b3b8 + param_5 * 0x1bc + 4 + param_2 * 4) * 0x2f8) ==
        '\0') && (uStack_34._3_1_ != '\0')) && (uStack_34._3_1_ != '\0')) {
    uVar5 = *(uint *)(*(int *)PTR_DAT_0066b3b8 + 0x194 + param_5 * 0x1bc) & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    if (uVar5 == 0) {
      ppppuVar7 = param_6;
      if (param_2 == 1) {
        ppppuVar7 = param_7;
      }
      local_2c = &local_30;
      local_30 = (undefined4 ****)0x608e93;
      FUN_00608a20(ppppuVar7,param_5,param_2);
      if ((0 < (int)local_30) && (0 < (int)local_2c)) {
        local_60 = param_1;
        local_5c = param_2;
        local_58 = (undefined **)0x0;
        local_54 = (undefined **)0x13;
        local_50 = param_2;
        local_4c = local_30;
        local_48 = local_2c;
        uStack_34 = uStack_34 & 0xffffff;
      }
    }
  }
  if (uStack_34._3_1_ != '\0') {
    local_2c = param_7;
    local_30 = param_6;
    uStack_34 = param_5;
    local_38 = &local_40;
    local_3c = 0x60928a;
    FUN_00607264(param_1,param_2,0);
    iVar9 = local_3c;
    puVar2 = local_40;
    if (local_38 == (undefined **)0x4) {
      ppppuVar7 = param_7;
      if (local_3c == 1) {
        ppppuVar7 = param_6;
      }
      local_2c = (undefined4 ***)0x6092af;
      iVar6 = FUN_004032c8(100);
      if (iVar6 + 1 < 2) {
        if (iVar9 == 1) {
          param_6 = param_7;
        }
        local_2c = (undefined4 ***)0x6092dc;
        uVar8 = FUN_006078a8(2,iVar9);
        local_2c = (undefined4 ***)0x6092ea;
        ppppuVar7 = (undefined4 ****)FUN_0060a404(param_6,uVar8,0xfffffffe);
      }
      else {
        local_2c = (undefined4 ***)0x6092bf;
        ppppuVar7 = (undefined4 ****)FUN_0060a404(ppppuVar7,puVar2,0xffffffff);
      }
      local_2c = (undefined4 ***)0x6092f3;
      local_60 = (undefined *)FUN_00607810(iVar9);
      local_5c = iVar9;
      local_58 = (undefined **)0xffffffff;
      local_54 = (undefined **)0x4;
      local_2c = (undefined4 ****)0x60930e;
      local_50 = FUN_006077f0(iVar9);
      local_4c = ppppuVar7;
    }
    else if (local_38 == (undefined **)0x5) {
      local_60 = local_40;
      local_5c = local_3c;
      local_58 = (undefined **)0xb;
      local_54 = (undefined **)0x5;
      local_2c = (undefined4 ****)0x609336;
      local_50 = FUN_006077f0(local_3c);
      local_4c = (undefined4 ****)0xffffffff;
    }
    else {
      local_60 = local_40;
      local_5c = local_3c;
      local_58 = local_38;
      local_54 = local_38;
      local_50 = local_3c;
      local_4c = (undefined4 ****)0xffffffff;
    }
  }
  if (*PTR_DAT_0066af9c != '\0') {
    switch(local_54) {
    case (undefined **)0x1:
      piVar1 = *(int **)(*(int *)(DAT_006d4274 + 0x364) + 0x198);
      local_2c = (undefined4 ***)0x6093bc;
      (**(code **)(*piVar1 + 0x1c))(piVar1,&local_68);
      local_2c = local_68;
      local_30 = (undefined4 ***)&DAT_00609a48;
      uStack_34 = 0x6093cf;
      FUN_00409dd8(param_2,&local_6c);
      uStack_34 = local_6c;
      local_38 = (undefined **)&DAT_00609a54;
      local_3c = 0x6093e2;
      FUN_00409dd8(param_1,&local_70);
      local_3c = local_70;
      local_40 = &DAT_00609a60;
      puStack_44 = &DAT_00609a48;
      local_48 = (undefined4 ***)0x6093fa;
      FUN_00409dd8(local_5c,&local_74);
      local_48 = local_74;
      local_4c = (undefined4 ***)&DAT_00609a6c;
      local_50 = 0x60940d;
      FUN_00409dd8(local_60,&local_78);
      local_50 = local_78;
      local_54 = (undefined **)&DAT_00609a78;
      local_58 = (undefined **)0x609a88;
      local_5c = 0x609427;
      FUN_00404c64(&local_64,0xc);
      local_5c = 0x609431;
      (**(code **)(*piVar1 + 0x2c))(piVar1,local_64);
      break;
    case (undefined **)0x2:
      piVar1 = *(int **)(*(int *)(DAT_006d4274 + 0x364) + 0x198);
      local_2c = (undefined4 ***)0x609451;
      (**(code **)(*piVar1 + 0x1c))(piVar1,&local_80);
      local_2c = local_80;
      local_30 = (undefined4 ***)&DAT_00609a48;
      uStack_34 = 0x609464;
      FUN_00409dd8(param_2,&local_84);
      uStack_34 = local_84;
      local_38 = (undefined **)&DAT_00609a54;
      local_3c = 0x60947a;
      FUN_00409dd8(param_1,&local_88);
      local_3c = local_88;
      local_40 = &DAT_00609a60;
      puStack_44 = &DAT_00609a48;
      local_48 = (undefined4 ***)0x609498;
      FUN_00409dd8(local_5c,&local_8c);
      local_48 = local_8c;
      local_4c = (undefined4 ***)&DAT_00609a6c;
      local_50 = 0x6094b1;
      FUN_00409dd8(local_60,&local_90);
      local_50 = local_90;
      local_54 = (undefined **)&DAT_00609a78;
      local_58 = (undefined **)0x609aa0;
      local_5c = 0x6094ce;
      FUN_00404c64(&local_7c,0xc);
      local_5c = 0x6094d8;
      (**(code **)(*piVar1 + 0x2c))(piVar1,local_7c);
      break;
    case (undefined **)0x3:
      piVar1 = *(int **)(*(int *)(DAT_006d4274 + 0x364) + 0x198);
      local_2c = (undefined4 ***)0x6094fb;
      (**(code **)(*piVar1 + 0x1c))(piVar1,&local_98);
      local_2c = local_98;
      local_30 = (undefined4 ***)&DAT_00609a48;
      uStack_34 = 0x609514;
      FUN_00409dd8(param_2,&local_9c);
      uStack_34 = local_9c;
      local_38 = (undefined **)&DAT_00609a54;
      local_3c = 0x60952d;
      FUN_00409dd8(param_1,&local_a0);
      local_3c = local_a0;
      local_40 = &DAT_00609a60;
      puStack_44 = &DAT_00609a48;
      local_48 = (undefined4 ***)0x60954b;
      FUN_00409dd8(local_5c,&local_a4);
      local_48 = local_a4;
      local_4c = (undefined4 ***)&DAT_00609a6c;
      local_50 = 0x609564;
      FUN_00409dd8(local_60,&local_a8);
      local_50 = local_a8;
      local_54 = (undefined **)&DAT_00609a78;
      local_58 = (undefined **)0x609abc;
      local_5c = 0x609584;
      FUN_00404c64(&local_94,0xc);
      local_5c = 0x609591;
      (**(code **)(*piVar1 + 0x2c))(piVar1,local_94);
      break;
    case (undefined **)0x4:
      piVar1 = *(int **)(*(int *)(DAT_006d4274 + 0x364) + 0x198);
      local_2c = (undefined4 ***)0x6095b4;
      (**(code **)(*piVar1 + 0x1c))(piVar1,&local_b0);
      local_2c = local_b0;
      local_30 = (undefined4 ***)&DAT_00609a48;
      uStack_34 = 0x6095cd;
      FUN_00409dd8(param_2,&local_b4);
      uStack_34 = local_b4;
      local_38 = (undefined **)&DAT_00609a54;
      local_3c = 0x6095e6;
      FUN_00409dd8(param_1,&local_b8);
      local_3c = local_b8;
      local_40 = &DAT_00609a60;
      puStack_44 = &DAT_00609a48;
      local_48 = (undefined4 ***)0x609604;
      FUN_00409dd8(local_5c,&local_bc);
      local_48 = local_bc;
      local_4c = (undefined4 ***)&DAT_00609a6c;
      local_50 = 0x60961d;
      FUN_00409dd8(local_60,&local_c0);
      local_50 = local_c0;
      local_54 = (undefined **)&DAT_00609a78;
      local_58 = (undefined **)0x609ad4;
      local_5c = 0x60963d;
      FUN_00404c64(&local_ac,0xc);
      local_5c = 0x60964a;
      (**(code **)(*piVar1 + 0x2c))(piVar1,local_ac);
      break;
    case (undefined **)0x5:
      piVar1 = *(int **)(*(int *)(DAT_006d4274 + 0x364) + 0x198);
      local_2c = (undefined4 ***)0x60966d;
      (**(code **)(*piVar1 + 0x1c))(piVar1,&local_c8);
      local_2c = local_c8;
      local_30 = (undefined4 ***)&DAT_00609a48;
      uStack_34 = 0x609686;
      FUN_00409dd8(param_2,&local_cc);
      uStack_34 = local_cc;
      local_38 = (undefined **)&DAT_00609a54;
      local_3c = 0x60969f;
      FUN_00409dd8(param_1,&local_d0);
      local_3c = local_d0;
      local_40 = &DAT_00609a60;
      puStack_44 = &DAT_00609a48;
      local_48 = (undefined4 ***)0x6096bd;
      FUN_00409dd8(local_5c,&local_d4);
      local_48 = local_d4;
      local_4c = (undefined4 ***)&DAT_00609a6c;
      local_50 = 0x6096d6;
      FUN_00409dd8(local_60,&local_d8);
      local_50 = local_d8;
      local_54 = (undefined **)&DAT_00609a78;
      local_58 = (undefined **)0x609aec;
      local_5c = 0x6096f6;
      FUN_00404c64(&local_c4,0xc);
      local_5c = 0x609703;
      (**(code **)(*piVar1 + 0x2c))(piVar1,local_c4);
      break;
    case (undefined **)0x6:
      piVar1 = *(int **)(*(int *)(DAT_006d4274 + 0x364) + 0x198);
      local_2c = (undefined4 ***)0x609726;
      (**(code **)(*piVar1 + 0x1c))(piVar1,&local_e0);
      local_2c = local_e0;
      local_30 = (undefined4 ***)&DAT_00609a48;
      uStack_34 = 0x60973f;
      FUN_00409dd8(param_2,&local_e4);
      uStack_34 = local_e4;
      local_38 = (undefined **)&DAT_00609a54;
      local_3c = 0x609758;
      FUN_00409dd8(param_1,&local_e8);
      local_3c = local_e8;
      local_40 = &DAT_00609a60;
      puStack_44 = &DAT_00609a48;
      local_48 = (undefined4 ***)0x609776;
      FUN_00409dd8(local_5c,&local_ec);
      local_48 = local_ec;
      local_4c = (undefined4 ***)&DAT_00609a6c;
      local_50 = 0x60978f;
      FUN_00409dd8(local_60,&local_f0);
      local_50 = local_f0;
      local_54 = (undefined **)&DAT_00609a78;
      local_58 = (undefined **)0x609b08;
      local_5c = 0x6097af;
      FUN_00404c64(&local_dc,0xc);
      local_5c = 0x6097bc;
      (**(code **)(*piVar1 + 0x2c))(piVar1,local_dc);
      break;
    case (undefined **)0x7:
      piVar1 = *(int **)(*(int *)(DAT_006d4274 + 0x364) + 0x198);
      local_2c = (undefined4 ***)0x6097df;
      (**(code **)(*piVar1 + 0x1c))(piVar1,&local_f8);
      local_2c = local_f8;
      local_30 = (undefined4 ***)&DAT_00609a48;
      uStack_34 = 0x6097f8;
      FUN_00409dd8(param_2,&local_fc);
      uStack_34 = local_fc;
      local_38 = (undefined **)&DAT_00609a54;
      local_3c = 0x609811;
      FUN_00409dd8(param_1,&local_100);
      local_3c = local_100;
      local_40 = &DAT_00609a60;
      puStack_44 = &DAT_00609a48;
      local_48 = (undefined4 ***)0x60982f;
      FUN_00409dd8(local_5c,&local_104);
      local_48 = local_104;
      local_4c = (undefined4 ***)&DAT_00609a6c;
      local_50 = 0x609848;
      FUN_00409dd8(local_60,&local_108);
      local_50 = local_108;
      local_54 = (undefined **)&DAT_00609a78;
      local_58 = (undefined **)0x609b24;
      local_5c = 0x609868;
      FUN_00404c64(&local_f4,0xc);
      local_5c = 0x609875;
      (**(code **)(*piVar1 + 0x2c))(piVar1,local_f4);
      break;
    case (undefined **)0x8:
      piVar1 = *(int **)(*(int *)(DAT_006d4274 + 0x364) + 0x198);
      local_2c = (undefined4 ***)0x609896;
      (**(code **)(*piVar1 + 0x1c))(piVar1,&local_110);
      local_2c = local_110;
      local_30 = (undefined4 ***)&DAT_00609a48;
      uStack_34 = 0x6098af;
      FUN_00409dd8(param_2,&local_114);
      uStack_34 = local_114;
      local_38 = (undefined **)&DAT_00609a54;
      local_3c = 0x6098c8;
      FUN_00409dd8(param_1,&local_118);
      local_3c = local_118;
      local_40 = &DAT_00609a60;
      puStack_44 = &DAT_00609a48;
      local_48 = (undefined4 ***)0x6098e6;
      FUN_00409dd8(local_5c,&local_11c);
      local_48 = local_11c;
      local_4c = (undefined4 ***)&DAT_00609a6c;
      local_50 = 0x6098ff;
      FUN_00409dd8(local_60,&local_120);
      local_50 = local_120;
      local_54 = (undefined **)&DAT_00609a78;
      local_58 = (undefined **)0x609b3c;
      local_5c = 0x60991f;
      FUN_00404c64(&local_10c,0xc);
      piVar1 = *(int **)(*(int *)(DAT_006d4274 + 0x364) + 0x198);
      local_5c = 0x60993b;
      (**(code **)(*piVar1 + 0x2c))(piVar1,local_10c);
      break;
    case (undefined **)0x9:
      piVar1 = *(int **)(*(int *)(DAT_006d4274 + 0x364) + 0x198);
      local_2c = (undefined4 ***)0x60995c;
      (**(code **)(*piVar1 + 0x1c))(piVar1,&local_128);
      local_2c = local_128;
      local_30 = (undefined4 ***)&DAT_00609a48;
      uStack_34 = 0x609975;
      FUN_00409dd8(param_2,&local_12c);
      uStack_34 = local_12c;
      local_38 = (undefined **)&DAT_00609a54;
      local_3c = 0x60998e;
      FUN_00409dd8(param_1,&local_130);
      local_3c = local_130;
      local_40 = &DAT_00609a60;
      puStack_44 = &DAT_00609a48;
      local_48 = (undefined4 ***)0x6099ac;
      FUN_00409dd8(local_5c,&local_134);
      local_48 = local_134;
      local_4c = (undefined4 ***)&DAT_00609a6c;
      local_50 = 0x6099c5;
      FUN_00409dd8(local_60,&local_138);
      local_50 = local_138;
      local_54 = (undefined **)&DAT_00609a78;
      local_58 = (undefined **)0x609b54;
      local_5c = 0x6099e5;
      FUN_00404c64(&local_124,0xc);
      piVar1 = *(int **)(*(int *)(DAT_006d4274 + 0x364) + 0x198);
      local_5c = 0x609a01;
      (**(code **)(*piVar1 + 0x2c))(piVar1,local_124);
    }
  }
  puVar3 = local_20;
  ppuVar4 = &local_60;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *param_4 = *ppuVar4;
    ppuVar4 = ppuVar4 + (uint)bVar10 * -2 + 1;
    param_4 = param_4 + (uint)bVar10 * -2 + 1;
  }
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_00609a35;
  local_24 = 0x609a2d;
  FUN_004048f8(&local_138,0x36,puVar3);
  return;
}

