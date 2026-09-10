// Address: 005d1128
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm76_FormCreate(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int *local_1c;
  
  local_1c = (int *)&stack0xfffffffc;
  iVar5 = 0xc;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_20 = &LAB_005d1680;
  local_24 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = 0x5d1158;
  FUN_00642c50(0x2a3,&local_28);
  uVar1 = local_28;
  local_28 = 0x5d1169;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),uVar1);
  local_28 = 0x5d1176;
  FUN_00642c50(0x2a4,&local_2c);
  local_28 = 0x5d1187;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x34c),local_2c);
  if (*(int *)PTR_DAT_0066b2a8 == 7) {
    local_28 = 0x5d119e;
    FUN_00642c50(0x146,&local_30);
    local_28 = 0x5d11af;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x300),local_30);
  }
  else if (*(int *)PTR_DAT_0066b2a8 == 8) {
    local_28 = 0x5d11c8;
    FUN_00642c50(0x147,&local_34);
    local_28 = 0x5d11d9;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x300),local_34);
  }
  else if (*(int *)PTR_DAT_0066b2a8 == 9) {
    local_28 = 0x5d11f2;
    FUN_00642c50(0x148,&local_38);
    local_28 = 0x5d1203;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x300),local_38);
  }
  local_28 = 0x5d1210;
  FUN_00642c50(0x404,&local_3c);
  local_28 = 0x5d1221;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x350),local_3c);
  local_28 = 0x5d122e;
  FUN_00642c50(0x405,&local_40);
  local_28 = 0x5d123f;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x354),local_40);
  _DAT_006d31e4 = 0;
  iVar5 = 0x70;
  iVar6 = 1;
  puVar7 = &DAT_006d31e8;
  do {
    local_28 = 0x5d1270;
    piVar2 = (int *)FUN_0045f670(PTR_PTR_0045adf8,1,DAT_006d31e0);
    *puVar7 = piVar2;
    local_28 = 0x5d127e;
    FUN_00409dd8(iVar6,&local_48);
    local_28 = 0x5d128e;
    FUN_00404bf0(&local_44,"selradio",local_48);
    local_28 = 0x5d1298;
    (**(code **)(*piVar2 + 0x18))(piVar2,local_44);
    local_28 = 0x5d12a5;
    (**(code **)(*piVar2 + 0x68))(piVar2,DAT_006d31e0);
    local_28 = 0x5d12af;
    FUN_00465978(piVar2,0xb4);
    local_28 = 0x5d12b9;
    FUN_0046599c(piVar2,iVar5);
    iVar5 = iVar5 + 0x1a;
    local_28 = 0x5d12c9;
    FUN_004659e8(piVar2,0x12);
    local_28 = 0x5d12d5;
    FUN_004659c4(piVar2,0xf);
    local_28 = 0x5d12dc;
    FUN_00466468(piVar2);
    local_28 = 0x5d12e5;
    FUN_004663cc(piVar2,0);
    local_28 = 0x5d12ee;
    FUN_00466238(piVar2,0);
    local_28 = 0x5d12f8;
    (**(code **)(*piVar2 + 0x68))(piVar2,param_1);
    piVar2[0x49] = param_1;
    piVar2[0x48] = (int)TForm76_r1Click;
    local_28 = 0x5d1317;
    FUN_004663a8(piVar2,0x2d5b24);
    local_28 = 0x5d1324;
    FUN_0042a3a0(piVar2[0x1a],0xffff);
    local_28 = 0x5d1331;
    FUN_0042a5c8(piVar2[0x1a],"Arial");
    iVar6 = iVar6 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar6 != 0xb);
  iVar5 = 1;
  puVar7 = &DAT_006d3210;
  local_1c = &DAT_006d31e8;
  do {
    local_28 = 0x5d1361;
    piVar2 = (int *)FUN_0045b76c(PTR_PTR_004df4e4,1,DAT_006d31e0);
    *puVar7 = piVar2;
    local_28 = 0x5d136f;
    FUN_00409dd8(iVar5,&local_50);
    local_28 = 0x5d137f;
    FUN_00404bf0(&local_4c,"timeescolha",local_50);
    local_28 = 0x5d1389;
    (**(code **)(*piVar2 + 0x18))(piVar2,local_4c);
    local_28 = 0x5d1396;
    (**(code **)(*piVar2 + 0x68))(piVar2,DAT_006d31e0);
    local_28 = 0x5d139f;
    FUN_004663cc(piVar2,0);
    local_28 = 0x5d13ab;
    FUN_004659c4(piVar2,100);
    local_28 = 0x5d13b7;
    FUN_004659e8(piVar2,0x12);
    local_28 = 0x5d13c0;
    (**(code **)(*piVar2 + 0x5c))(piVar2,0);
    local_28 = 0x5d13cc;
    FUN_004e1414(piVar2,L"teste");
    local_28 = 0x5d13de;
    FUN_00465978(piVar2,*(int *)(*local_1c + 0x40) + 0xf);
    local_28 = 0x5d13ed;
    FUN_0046599c(piVar2,*(undefined4 *)(*local_1c + 0x44));
    local_28 = 0x5d13f9;
    FUN_004663a8(piVar2,0x2d5b24);
    local_28 = 0x5d1406;
    FUN_0042a3a0(piVar2[0x1a],0xffffff);
    local_28 = 0x5d140f;
    FUN_00466358(piVar2,0);
    local_28 = 0x5d141b;
    FUN_004e14d4(piVar2,&DAT_005d16dc);
    local_28 = 0x5d1422;
    FUN_00466468(piVar2);
    local_28 = 0x5d142b;
    FUN_0045bc28(piVar2,1);
    local_28 = 0x5d1438;
    FUN_0042a5c8(piVar2[0x1a],"Arial");
    local_28 = 0x5d1445;
    FUN_0042a640(piVar2[0x1a],9);
    local_28 = 0x5d144e;
    FUN_0045bb70(piVar2,0);
    local_28 = 0x5d1457;
    FUN_0045bbe4(piVar2,0);
    local_28 = 0x5d1460;
    FUN_00466128(piVar2,1);
    iVar5 = iVar5 + 1;
    local_1c = local_1c + 1;
    puVar7 = puVar7 + 1;
  } while (iVar5 != 0xb);
  if (*(int *)PTR_DAT_0066b31c == 1) {
    iVar5 = 10;
  }
  else {
    iVar5 = 8;
  }
  if (iVar5 != 0) {
    iVar6 = 1;
    local_20 = PTR_DAT_0066ac78 + 4;
    piVar2 = &DAT_006d3210;
    local_24 = &DAT_006d31e8;
    do {
      if (iVar6 < 9) {
        iVar8 = *(int *)(local_20 + *(int *)PTR_DAT_0066b31c * 0x20 + 0x624);
      }
      else {
        iVar8 = *(int *)(local_20 + 0x644);
      }
      local_28 = 0x5d14e8;
      FUN_00405194(&local_54,*(int *)PTR_DAT_0066af70 + iVar8 * 0x2f8);
      local_28 = 0x5d14f2;
      FUN_004e1414(*piVar2,local_54);
      local_28 = 0x5d14fc;
      FUN_00409dd8(iVar8,&local_5c);
      local_28 = 0x5d1507;
      FUN_004051d4(&local_58,local_5c);
      local_28 = 0x5d1511;
      FUN_004e14d4(*piVar2,local_58);
      if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar8 * 0x2f8) != '\0') {
        local_28 = 0x5d152f;
        (**(code **)(*(int *)*local_24 + 100))((int *)*local_24,0);
        local_28 = 0x5d153e;
        FUN_0042a3a0(*(undefined4 *)(*piVar2 + 0x68),0x808080);
      }
      if (iVar8 < 1) {
LAB_005d1553:
        local_28 = 0x5d155f;
        FUN_00466128(*local_24,0);
        local_28 = 0x5d1568;
        FUN_00466128(*piVar2,0);
      }
      else {
        local_28 = 0x5d154f;
        iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066af70);
        if (iVar3 <= iVar8) goto LAB_005d1553;
      }
      local_28 = 0x5d1573;
      FUN_00409dd8(iVar6 + -1,&local_64);
      local_28 = 0x5d1583;
      FUN_00404bf0(&local_60,"image",local_64);
      local_28 = 0x5d1590;
      iVar3 = FUN_00427360(DAT_006d31e0,local_60);
      if (0 < iVar8) {
        local_28 = 0x5d15a3;
        iVar4 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066af70);
        if (iVar8 < iVar4) {
          local_28 = 0x5d15cf;
          FUN_0042d610(*(undefined4 *)(iVar3 + 0x168),
                       *(undefined4 *)
                        (*(int *)PTR_DAT_0066b3e0 +
                        *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar8 * 0x2f8) * 4));
        }
      }
      iVar6 = iVar6 + 1;
      local_24 = local_24 + 1;
      piVar2 = piVar2 + 1;
      local_20 = local_20 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (1 < *(int *)PTR_DAT_0066b31c) {
    local_28 = 0x5d15fa;
    FUN_00466128(DAT_006d3208,0);
    local_28 = 0x5d1606;
    FUN_00466128(DAT_006d320c,0);
    local_28 = 0x5d1612;
    FUN_00466128(DAT_006d3230,0);
    local_28 = 0x5d161e;
    FUN_00466128(DAT_006d3234,0);
    local_28 = 0x5d162e;
    FUN_00466128(*(undefined4 *)(param_1 + 0x344),0);
    local_28 = 0x5d163e;
    FUN_00466128(*(undefined4 *)(param_1 + 0x348),0);
  }
  piVar2 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = (int *)&LAB_005d1687;
  local_20 = (undefined1 *)0x5d1658;
  FUN_004048f8(&local_64,3,piVar2);
  local_20 = (undefined1 *)0x5d1665;
  FUN_00405008(&local_58,2);
  local_20 = (undefined1 *)0x5d1672;
  FUN_004048f8(&local_50,4);
  local_20 = (undefined1 *)0x5d167f;
  FUN_00405008(&local_40,7);
  return;
}

