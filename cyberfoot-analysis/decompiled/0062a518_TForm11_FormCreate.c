// Address: 0062a518
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm11_FormCreate(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined1 *puVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 *local_60;
  undefined1 local_5c [4];
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
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 uVar7;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  int local_8;
  
  local_1c = &stack0xfffffffc;
  iVar4 = 0xf;
  do {
    local_8 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_20 = &LAB_0062ab3a;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  _DAT_006d4b68 = 2;
  FUN_00642c50(0x20,&local_c);
  FUN_00545088(*(undefined4 *)(param_1 + 0x334),local_c);
  FUN_00642c50(0x21,&stack0xfffffff0);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x324),unaff_EBX);
  FUN_00642c50(0x22,&stack0xffffffec);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x31c),unaff_ESI);
  FUN_00642c50(0x41d,&stack0xffffffe8);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x330),unaff_EDI);
  FUN_00642c50(0x24,&local_1c);
  FUN_00545088(*(undefined4 *)(param_1 + 0x344),local_1c);
  FUN_00642c50(0x25,&local_20);
  FUN_00545088(*(undefined4 *)(param_1 + 0x348),local_20);
  FUN_00642c50(0x26,&local_24);
  FUN_00545088(*(undefined4 *)(param_1 + 0x34c),local_24);
  uVar7 = 0x62a60e;
  FUN_00642c50(0x29,&stack0xffffffd8);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x340),uVar7);
  FUN_00642c50(0x23,&local_2c);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_2c);
  FUN_00642c50(0x24,&local_30);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x308),local_30);
  FUN_00642c50(0x25,&local_34);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x300),local_34);
  FUN_00642c50(0x26,&local_38);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x304),local_38);
  FUN_00642c50(0x2b,&local_3c);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x318),local_3c);
  FUN_00642c50(0x2c,&local_40);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x314),local_40);
  FUN_00642c50(0x2d,&local_44);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_44);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x30c),0);
  DAT_006d4a10 = 1;
  if (PTR_DAT_0066ac78[0x170] != '\0') {
    FUN_005b570c(0);
  }
  iVar4 = *(int *)PTR_DAT_0066b57c;
  puVar3 = (undefined4 *)PTR_DAT_0066b740;
  if (0 < iVar4) {
    do {
      *puVar3 = 0xffffffff;
      iVar4 = iVar4 + -1;
      puVar3 = puVar3 + 1;
    } while (iVar4 != 0);
  }
  iVar4 = *(int *)PTR_DAT_0066b57c;
  puVar5 = PTR_DAT_0066b4bc;
  if (0 < iVar4) {
    do {
      *puVar5 = 0;
      iVar4 = iVar4 + -1;
      puVar5 = puVar5 + 0x1a;
    } while (iVar4 != 0);
  }
  local_2c = (undefined *)0x62a754;
  FUN_004060a8(&DAT_006d4a1c,PTR_LAB_00629c70,1);
  _DAT_006d4a20 = 0;
  _DAT_006d4a18 = FUN_0042fcb8(PTR_PTR_00429378,1);
  FUN_00629c94(param_1);
  local_2c = (undefined *)0x62a77d;
  iVar4 = GetSystemMetrics(0);
  if ((iVar4 == *(int *)PTR_DAT_0066ad9c) || (cVar1 = FUN_00653074(), cVar1 == '\0')) {
    cVar1 = FUN_00652fb8();
    if (cVar1 == '\0') {
      cVar1 = FUN_0065305c();
      if (cVar1 != '\0') {
        FUN_0046c5b8(param_1,0x96,100);
        FUN_00481860(DAT_006d4958,1);
      }
    }
    else {
      FUN_0046c5b8(param_1,0x85,100);
      FUN_00481860(DAT_006d4958,1);
    }
  }
  else {
    FUN_00481860(DAT_006d4958,1);
    FUN_0046c5b8(param_1,iVar4,*(undefined4 *)PTR_DAT_0066ad9c);
  }
  if (800 < iVar4) {
    FUN_004659c4(*(int *)(param_1 + 800),*(int *)(*(int *)(param_1 + 800) + 0x48) + -0x3f);
    FUN_00465978(*(int *)(param_1 + 800),*(int *)(*(int *)(param_1 + 800) + 0x40) + -4);
    FUN_004659e8(*(int *)(param_1 + 800),*(int *)(*(int *)(param_1 + 800) + 0x4c) + -5);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x13c) == 1) {
    FUN_00466128(*(undefined4 *)(param_1 + 0x2f8),0);
  }
  else {
    FUN_00409dd8(DAT_006d4a10,&local_50);
    FUN_00404bf0(&local_4c,"Time ",local_50);
    FUN_004051d4(&local_48,local_4c);
    FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),local_48);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x13c) == DAT_006d4a10) {
    FUN_00642c50(0x29,&local_54);
    FUN_0054dcb8(*(undefined4 *)(param_1 + 0x340),local_54);
  }
  else {
    FUN_00642c50(0x27,local_5c);
    local_2c = &DAT_0062ab5c;
    local_30 = (undefined1 *)0x62a8df;
    FUN_00409dd8(DAT_006d4a10 + 1,&local_64);
    local_30 = (undefined1 *)0x62a8ea;
    FUN_004051d4(&local_60,local_64);
    local_30 = local_60;
    local_34 = 0x62a8fa;
    FUN_00405330(&local_58,3);
    FUN_0054dcb8(*(undefined4 *)(param_1 + 0x340),local_58);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0xc4) < 0xca) {
    iVar4 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
    local_8 = FUN_0065208c(3);
    if (-1 < iVar4 + -1) {
      iVar6 = 0;
      do {
        local_2c = (undefined *)0x62a962;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar6 * 0x294),&local_70);
        local_2c = local_70;
        local_30 = &LAB_0062ab80;
        local_34 = 0x62a977;
        FUN_00404c64(&local_6c,3);
        FUN_004051d4(&local_68,local_6c);
        FUN_0040526c(&local_68,
                     *(undefined4 *)
                      (PTR_DAT_0066b294 +
                      *(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar6 * 0x294) * 4));
        FUN_0054cd98(*(undefined4 *)(param_1 + 0x338),local_68);
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (local_8 < 0) {
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x338),0);
    }
    else {
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x338),local_8);
    }
  }
  else {
    FUN_00466128(*(undefined4 *)(param_1 + 0x324),0);
    FUN_00466128(*(undefined4 *)(param_1 + 0x338),0);
  }
  iVar4 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x338));
  uVar7 = *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x144 + iVar4 * 0x294);
  local_2c = (undefined *)0x62aa25;
  uVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x338));
  FUN_0062abf4(param_1,uVar2,uVar7);
  iVar4 = *(int *)PTR_DAT_0066b57c;
  if (0 < iVar4) {
    puVar3 = (undefined4 *)(PTR_DAT_0066ac78 + 0x140);
    do {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00465978(*(undefined4 *)(param_1 + 0x2fc),*(int *)(DAT_006d49fc + 0x40) + 0x1e);
  iVar4 = 0xca;
  puVar3 = (undefined4 *)(PTR_DAT_0066b2bc + 4);
  do {
    local_2c = (undefined *)0x62aa84;
    FUN_00409dd8(*puVar3,&local_7c);
    local_2c = local_7c;
    local_30 = &LAB_0062ab80;
    local_34 = 0x62aa99;
    FUN_00404c64(&local_78,3);
    FUN_004051d4(&local_74,local_78);
    FUN_0040526c(&local_74,puVar3[-1]);
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x33c),local_74);
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x33c),1);
  puVar5 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_0062ab41;
  local_20 = (undefined1 *)0x62aaed;
  FUN_004048f8(&local_7c,2,puVar5);
  local_20 = (undefined1 *)0x62aaf5;
  FUN_00404ff0(&local_74);
  local_20 = (undefined1 *)0x62ab02;
  FUN_004048f8(&local_70,2);
  local_20 = (undefined1 *)0x62ab0a;
  FUN_00404ff0(&local_68);
  local_20 = (undefined1 *)0x62ab12;
  FUN_004048d4(&local_64);
  local_20 = (undefined1 *)0x62ab1f;
  FUN_00405008(&local_60,4);
  local_20 = (undefined1 *)0x62ab2c;
  FUN_004048f8(&local_50,2);
  local_20 = (undefined1 *)0x62ab39;
  FUN_00405008(&local_48,0x10);
  return;
}

