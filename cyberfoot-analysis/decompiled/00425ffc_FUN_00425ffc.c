// Address: 00425ffc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00425ffc(undefined4 param_1,undefined2 *param_2)

{
  longlong lVar1;
  double dVar2;
  undefined1 *puVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_17c;
  undefined1 *puStack_178;
  undefined1 *puStack_174;
  undefined4 uStack_170;
  undefined1 *puStack_16c;
  undefined1 *puStack_168;
  undefined4 uStack_164;
  undefined1 *puStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 *puStack_154;
  undefined1 *puStack_150;
  undefined1 local_140 [256];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  puStack_150 = &stack0xfffffffc;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_20 = (int *)0x0;
  puStack_154 = &LAB_004263d8;
  uStack_158 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_158;
  uStack_15c._0_2_ = 0x6036;
  uStack_15c._2_2_ = 0x42;
  local_8 = param_1;
  cVar4 = FUN_004177a0(param_2);
  if (cVar4 != '\0') {
    uStack_15c._0_2_ = 0x604c;
    uStack_15c._2_2_ = 0x42;
    FUN_0040e42c(PTR_DAT_0041b404,1,PTR_PTR_0066b23c);
    uStack_15c._0_2_ = 0x6051;
    uStack_15c._2_2_ = 0x42;
    FUN_00404250();
  }
  uStack_15c._0_2_ = 0x6058;
  uStack_15c._2_2_ = 0x42;
  uVar5 = FUN_004173c4(param_2);
  uVar6 = (uint)(uVar5 & 0xfff);
  if (uVar6 < 8) {
    if (uVar6 == 7) {
      uStack_15c._0_2_ = 0x618b;
      uStack_15c._2_2_ = 0x42;
      FUN_004143bc(param_2);
      dVar2 = (double)in_ST0;
      puStack_160 = SUB84(dVar2,0);
      uStack_15c._0_2_ = (undefined2)((ulonglong)dVar2 >> 0x20);
      uStack_15c._2_2_ = (undefined2)((ulonglong)dVar2 >> 0x30);
      uStack_164 = 0x42619a;
      FUN_00424c14(local_8);
      goto LAB_0042639d;
    }
    switch(uVar6) {
    case 0:
      uStack_15c._0_2_ = 0x60d5;
      uStack_15c._2_2_ = 0x42;
      FUN_00426644(local_8,0xd);
      break;
    case 1:
      uStack_15c._0_2_ = 0x60e4;
      uStack_15c._2_2_ = 0x42;
      FUN_00426644(local_8,0);
      break;
    case 2:
    case 3:
switchD_00426073_caseD_2:
      uStack_15c._0_2_ = 0x6124;
      uStack_15c._2_2_ = 0x42;
      uVar7 = FUN_00412a6c(param_2);
      uStack_15c._0_2_ = 0x612e;
      uStack_15c._2_2_ = 0x42;
      FUN_00424cfc(local_8,uVar7);
      break;
    case 4:
      uStack_15c._0_2_ = 0x613a;
      uStack_15c._2_2_ = 0x42;
      FUN_004143bc(param_2);
      uStack_15c = (undefined1 *)(float)in_ST0;
      puStack_160 = (undefined1 *)0x426149;
      FUN_00424bcc(local_8);
      break;
    case 5:
      uStack_15c._0_2_ = 0x6155;
      uStack_15c._2_2_ = 0x42;
      FUN_004143bc(param_2);
      uStack_164 = SUB104(in_ST0,0);
      puStack_160 = (undefined1 *)((unkuint10)in_ST0 >> 0x20);
      uStack_15c._0_2_ = (undefined2)((unkuint10)in_ST0 >> 0x40);
      puStack_168 = (undefined1 *)0x426164;
      FUN_00424ba8(local_8);
      break;
    case 6:
      uStack_15c._0_2_ = 0x6170;
      uStack_15c._2_2_ = 0x42;
      FUN_00414d18(param_2);
      lVar1 = (longlong)ROUND(in_ST0);
      puStack_160 = (undefined1 *)lVar1;
      uStack_15c._0_2_ = (undefined2)((ulonglong)lVar1 >> 0x20);
      uStack_15c._2_2_ = (undefined2)((ulonglong)lVar1 >> 0x30);
      uStack_164 = 0x42617f;
      FUN_00424bf0(local_8);
      break;
    default:
      goto switchD_00426073_default;
    }
  }
  else {
    if (uVar6 < 0x10) {
      if (uVar6 == 8) {
        uStack_15c._0_2_ = 0x60f3;
        uStack_15c._2_2_ = 0x42;
        FUN_00415af4(&local_30,param_2);
        uStack_15c._0_2_ = 0x60fe;
        uStack_15c._2_2_ = 0x42;
        FUN_00426590(local_8,local_30);
        goto LAB_0042639d;
      }
      if (uVar6 == 0xb) {
        uStack_15c._0_2_ = 0x61a6;
        uStack_15c._2_2_ = 0x42;
        cVar4 = FUN_00413e74(param_2);
        if (cVar4 == '\0') {
          uStack_15c._0_2_ = 0x61c3;
          uStack_15c._2_2_ = 0x42;
          FUN_00426644(local_8,8);
        }
        else {
          uStack_15c._0_2_ = 0x61b4;
          uStack_15c._2_2_ = 0x42;
          FUN_00426644(local_8,9);
        }
        goto LAB_0042639d;
      }
    }
    else {
      if (uVar6 - 0x10 < 3) goto switchD_00426073_caseD_2;
      if (uVar6 - 0x13 < 2) {
        uStack_15c._0_2_ = 0x61cf;
        uStack_15c._2_2_ = 0x42;
        puStack_160 = (undefined1 *)FUN_00413530(param_2);
        uStack_15c._0_2_ = (undefined2)extraout_EDX;
        uStack_15c._2_2_ = (undefined2)((uint)extraout_EDX >> 0x10);
        uStack_164 = 0x4261e3;
        local_2c = puStack_160;
        FUN_00424d70(local_8);
        goto LAB_0042639d;
      }
      if (uVar6 == 0x100) {
        uStack_15c._0_2_ = 0x610d;
        uStack_15c._2_2_ = 0x42;
        FUN_004153cc(&local_34,param_2);
        uStack_15c._0_2_ = 0x6118;
        uStack_15c._2_2_ = 0x42;
        FUN_0042653c(local_8,local_34);
        goto LAB_0042639d;
      }
    }
switchD_00426073_default:
    puStack_160 = &LAB_0042637c;
    uStack_164 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_164;
    puStack_168 = (undefined1 *)0x426201;
    uStack_15c = &stack0xfffffffc;
    cVar4 = FUN_00418f24(*param_2,&local_c);
    if (cVar4 != '\0') {
      puStack_168 = (undefined1 *)0x42620d;
      puStack_168 = (undefined1 *)FUN_00406880(&local_20);
      puStack_16c = (undefined1 *)0x426218;
      FUN_004160cc(&local_38,param_2);
      puVar3 = puStack_168;
      puStack_168 = (undefined1 *)0x426226;
      cVar4 = FUN_0040fe70(local_38,&DAT_004263e8,puVar3);
      if (cVar4 != '\0') {
        local_14 = (undefined4 *)0x0;
        puStack_168 = (undefined1 *)0x426255;
        local_10 = FUN_00403a54(PTR_PTR_0041c090,1);
        puStack_16c = &LAB_0042636b;
        uStack_170 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_170;
        puStack_174 = (undefined1 *)0x426272;
        puStack_168 = &stack0xfffffffc;
        local_14 = (undefined4 *)FUN_00403a54(PTR_PTR_0041c090,1);
        puStack_174 = (undefined1 *)0x400;
        puStack_178 = (undefined1 *)0x426289;
        local_18 = FUN_004213b8(PTR_PTR_0041c470,1,local_10);
        puStack_178 = &LAB_00426311;
        uStack_17c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_17c;
        puStack_174 = &stack0xfffffffc;
        (**(code **)(*local_20 + 0x10))(local_20,param_2,local_14);
        local_1c = (**(code **)*local_14)();
        FUN_004039d4(*local_c,local_140);
        FUN_00404b48(&local_40,local_140);
        FUN_0042653c(local_18,local_40);
        FUN_004243ec(local_18,&local_1c,4);
        FUN_004243ec(local_18,local_14[1],local_1c);
        puVar3 = puStack_174;
        *in_FS_OFFSET = uStack_17c;
        puStack_174 = &LAB_00426318;
        puStack_178 = (undefined1 *)0x426310;
        FUN_00403a84(local_18,uStack_17c,puVar3);
        return;
      }
    }
    puStack_168 = (undefined1 *)0x426234;
    FUN_004153cc(&local_3c,param_2);
    puStack_168 = (undefined1 *)0x42623f;
    FUN_0042653c(local_8,local_3c);
    *in_FS_OFFSET = uStack_164;
  }
LAB_0042639d:
  puVar3 = puStack_150;
  *in_FS_OFFSET = uStack_158;
  puStack_150 = &LAB_004263df;
  puStack_154 = (undefined1 *)0x4263b7;
  FUN_004048f8(&local_40,2,puVar3);
  puStack_154 = (undefined1 *)0x4263bf;
  FUN_00406880(&local_38);
  puStack_154 = (undefined1 *)0x4263c7;
  FUN_004048d4(&local_34);
  puStack_154 = (undefined1 *)0x4263cf;
  FUN_00404ff0(&local_30);
  puStack_154 = (undefined1 *)0x4263d7;
  FUN_00406880(&local_20);
  return;
}

