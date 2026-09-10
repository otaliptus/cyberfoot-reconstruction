// Address: 005c55a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm63_FormCreate(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 unaff_ESI;
  int iVar5;
  undefined4 unaff_EDI;
  char *pcVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar7;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 *puVar8;
  int local_c;
  int local_8;
  
  local_20 = &stack0xfffffffc;
  iVar4 = 8;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_24 = &LAB_005c5c35;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = (char *)0x5c55d4;
  FUN_00642c50(0x3fa,&stack0xffffffe8);
  local_2c = (char *)0x5c55e2;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x364),unaff_ESI);
  local_2c = (char *)0x5c55ef;
  FUN_00642c50(0x3fb,&stack0xffffffe4);
  local_2c = (char *)0x5c55fd;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x368),unaff_EDI);
  local_2c = (char *)0x5c560a;
  FUN_00642c50(0x3fc,&local_20);
  local_2c = (char *)0x5c5618;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x36c),local_20);
  local_2c = (char *)0x5c5625;
  FUN_00642c50(0x3fd,&local_24);
  local_2c = (char *)0x5c5633;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x370),local_24);
  local_2c = (char *)0x5c5640;
  FUN_00642c50(0x3fe,&local_28);
  local_2c = (char *)0x5c564e;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x374),local_28);
  local_2c = (char *)0x5c565b;
  FUN_00642c50(0x3ff,&local_2c);
  pcVar6 = local_2c;
  local_2c = (char *)0x5c5669;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x378),pcVar6);
  local_2c = (char *)0x5c5676;
  FUN_00642c50(0x28b,&local_30);
  local_2c = (char *)0x5c5687;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x30c) + 0x60),local_30);
  local_2c = (char *)0x5c5694;
  FUN_00642c50(0x28c,&local_34);
  local_2c = (char *)0x5c56a5;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x310) + 0x60),local_34);
  DAT_006d2c20 = 0;
  local_2c = (char *)0x5c56b8;
  iVar4 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (iVar4 < 2) {
    local_2c = (char *)0x5c5795;
    FUN_00466128(*(undefined4 *)(param_1 + 0x380),0);
  }
  else {
    local_2c = (char *)0x5c56cd;
    iVar2 = FUN_0065208c(3);
    if (-1 < iVar4 + -1) {
      iVar5 = 0;
      do {
        local_2c = "<img src=\"idx:";
        local_30 = 0x5c56fc;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar5 * 0x294),&local_40);
        local_30 = local_40;
        local_34 = &DAT_005c5c64;
        local_38 = 0x5c5711;
        FUN_00404c64(&local_3c,3);
        local_2c = (char *)0x5c571c;
        FUN_004051d4(&local_38,local_3c);
        local_2c = (char *)0x5c5742;
        FUN_0040526c(&local_38,
                     *(undefined4 *)
                      (PTR_DAT_0066b294 +
                      *(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar5 * 0x294) * 4));
        local_2c = (char *)0x5c5750;
        FUN_0054cd98(*(undefined4 *)(param_1 + 0x380),local_38);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (iVar2 < 0) {
      local_2c = (char *)0x5c577f;
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x380),0);
      DAT_006d2c20 = 0;
    }
    else {
      local_2c = (char *)0x5c5768;
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x380),iVar2);
      DAT_006d2c20 = iVar2;
    }
  }
  local_2c = (char *)0x5c57a1;
  _DAT_006d2c18 = FUN_0042fcb8(PTR_PTR_00429378,1);
  if (PTR_DAT_0066ac78[0x171] == '\0') {
    local_2c = (char *)0x5c57c1;
    FUN_00466128(*(undefined4 *)(param_1 + 0x34c),0);
    local_2c = (char *)0x5c57ce;
    FUN_00466128(*(undefined4 *)(param_1 + 0x350),0);
    local_2c = (char *)0x5c57db;
    FUN_00466128(*(undefined4 *)(param_1 + 0x354),0);
    local_2c = (char *)0x5c57e8;
    FUN_00466128(*(undefined4 *)(param_1 + 0x358),0);
    local_2c = (char *)0x5c57f5;
    FUN_00466128(*(undefined4 *)(param_1 + 0x35c),0);
    local_2c = (char *)0x5c5802;
    FUN_00466128(*(undefined4 *)(param_1 + 0x368),0);
    local_2c = (char *)0x5c580f;
    FUN_00466128(*(undefined4 *)(param_1 + 0x36c),0);
    local_2c = (char *)0x5c581c;
    FUN_00466128(*(undefined4 *)(param_1 + 0x374),0);
    local_2c = (char *)0x5c5829;
    FUN_00466128(*(undefined4 *)(param_1 + 0x378),0);
  }
  if (PTR_DAT_0066ac78[0x172] == '\0') {
    local_2c = (char *)0x5c5844;
    FUN_00466128(*(undefined4 *)(param_1 + 0x370),0);
    local_2c = (char *)0x5c5851;
    FUN_00466128(*(undefined4 *)(param_1 + 0x35c),0);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0xc0) == 1) {
    if (PTR_DAT_0066ac78[0x75d] == '\0') {
      local_2c = (char *)0x5c587e;
      FUN_00466128(*(undefined4 *)(param_1 + 0x34c),0);
      local_2c = (char *)0x5c588b;
      FUN_00466128(*(undefined4 *)(param_1 + 0x350),0);
      local_2c = (char *)0x5c5898;
      FUN_00466128(*(undefined4 *)(param_1 + 0x354),0);
      local_2c = (char *)0x5c58a5;
      FUN_00466128(*(undefined4 *)(param_1 + 0x358),0);
      local_2c = (char *)0x5c58b2;
      FUN_00466128(*(undefined4 *)(param_1 + 0x368),0);
      local_2c = (char *)0x5c58bf;
      FUN_00466128(*(undefined4 *)(param_1 + 0x36c),0);
      local_2c = (char *)0x5c58cc;
      FUN_00466128(*(undefined4 *)(param_1 + 0x374),0);
      local_2c = (char *)0x5c58d9;
      FUN_00466128(*(undefined4 *)(param_1 + 0x378),0);
    }
    local_2c = (char *)0x5c58e6;
    FUN_00466128(*(undefined4 *)(param_1 + 0x35c),0);
  }
  if (PTR_DAT_0066ac78[0x170] == '\0') {
    local_2c = (char *)0x5c5901;
    FUN_00466128(*(undefined4 *)(param_1 + 0x348),0);
  }
  else {
    local_c = 0;
    iVar4 = 0;
    pcVar6 = PTR_DAT_0066ae98 + 0x52d;
    puVar8 = (undefined4 *)PTR_PTR_0066b288;
    do {
      if (*pcVar6 != '\0') {
        local_2c = (char *)0x5c5937;
        FUN_004553ac(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x28c));
        local_2c = (char *)0x5c594b;
        piVar3 = (int *)FUN_00443198(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x28c),local_c);
        local_2c = (char *)0x5c5955;
        (**(code **)(*piVar3 + 0x20))(piVar3,*puVar8);
        local_2c = (char *)0x5c5969;
        piVar3 = (int *)FUN_00443198(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x28c),local_c);
        local_2c = (char *)0x5c5970;
        (**(code **)(*piVar3 + 0x28))(piVar3,iVar4);
        *(int *)(&DAT_006d2ba8 + local_c * 4) = iVar4;
        local_c = local_c + 1;
      }
      iVar4 = iVar4 + 1;
      puVar8 = puVar8 + 1;
      pcVar6 = pcVar6 + 0x568;
    } while (iVar4 != 0x1b);
    DAT_006d2c14 = 0x1c;
    iVar4 = 0;
    pcVar6 = PTR_DAT_0066ae98 + 0x52d;
    do {
      if ((*pcVar6 != '\0') && (iVar2 = iVar4, pcVar6[-1] != '\0')) break;
      iVar4 = iVar4 + 1;
      pcVar6 = pcVar6 + 0x568;
      iVar2 = DAT_006d2c14;
    } while (iVar4 != 0x1b);
    DAT_006d2c14 = iVar2;
    if (DAT_006d2c14 == 0x1c) {
      DAT_006d2c14 = *(int *)PTR_DAT_0066b09c;
    }
    if (-1 < local_c + -1) {
      iVar4 = 0;
      uVar7 = true;
      do {
        local_2c = (char *)0x5c59f4;
        iVar2 = FUN_00443198(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x28c),iVar4);
        local_2c = (char *)0x5c5a0b;
        FUN_00404cf0(*(undefined4 *)(iVar2 + 0x10),
                     *(undefined4 *)(PTR_PTR_0066b288 + DAT_006d2c14 * 4));
        if ((bool)uVar7) {
          local_2c = (char *)0x5c5a1d;
          (**(code **)(**(int **)(param_1 + 0x328) + 0xd0))(*(int **)(param_1 + 0x328),iVar4);
        }
        iVar4 = iVar4 + 1;
        local_c = local_c + -1;
        uVar7 = local_c == 0;
      } while (!(bool)uVar7);
    }
  }
  if ((PTR_DAT_0066ac78[0x171] == '\0') || (*(int *)(PTR_DAT_0066ac78 + 0xc4) == 0xca)) {
    local_2c = (char *)0x5c5a4d;
    FUN_00466128(*(undefined4 *)(param_1 + 0x34c),0);
    local_2c = (char *)0x5c5a5a;
    FUN_00466128(*(undefined4 *)(param_1 + 0x350),0);
    local_2c = (char *)0x5c5a67;
    FUN_00466128(*(undefined4 *)(param_1 + 0x368),0);
    local_2c = (char *)0x5c5a74;
    FUN_00466128(*(undefined4 *)(param_1 + 0x36c),0);
  }
  if (((PTR_DAT_0066ac78[0x172] == '\0') || (*(int *)(PTR_DAT_0066ac78 + 0xc4) == 0xca)) ||
     (*(int *)(PTR_DAT_0066ac78 + 0xc0) == 1)) {
    local_2c = (char *)0x5c5aae;
    FUN_00466128(*(undefined4 *)(param_1 + 0x35c),0);
    local_2c = (char *)0x5c5abb;
    FUN_00466128(*(undefined4 *)(param_1 + 0x370),0);
  }
  if (PTR_DAT_0066ac78[0x170] == '\0') {
    local_2c = (char *)0x5c5ad6;
    FUN_00466128(*(undefined4 *)(param_1 + 0x348),0);
  }
  if ((PTR_DAT_0066ac78[0x173] == '\0') || (*(int *)(PTR_DAT_0066ac78 + 0xc4) == 0xca)) {
    local_2c = (char *)0x5c5b02;
    FUN_00466128(*(undefined4 *)(param_1 + 0x354),0);
  }
  if ((PTR_DAT_0066ac78[0x174] == '\0') || (*(int *)(PTR_DAT_0066ac78 + 0xc4) == 0xca)) {
    local_2c = (char *)0x5c5b2e;
    FUN_00466128(*(undefined4 *)(param_1 + 0x358),0);
  }
  local_8 = 8;
  iVar4 = 1;
  do {
    local_2c = (char *)0x5c5b44;
    FUN_00409dd8(iVar4,&local_48);
    local_2c = (char *)0x5c5b54;
    FUN_00404bf0(&local_44,"Image",local_48);
    local_2c = (char *)0x5c5b61;
    iVar2 = FUN_00427360(DAT_006d2ba4,local_44);
    if (*(char *)(iVar2 + 0x57) != '\0') {
      local_2c = (char *)0x5c5b73;
      FUN_00465978(iVar2,local_8);
      local_8 = local_8 + *(int *)(iVar2 + 0x48);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 8);
  local_2c = (char *)0x5c5b93;
  FUN_00465978(*(undefined4 *)(param_1 + 0x368),*(undefined4 *)(*(int *)(param_1 + 0x34c) + 0x40));
  local_2c = (char *)0x5c5ba7;
  FUN_00465978(*(undefined4 *)(param_1 + 0x36c),*(undefined4 *)(*(int *)(param_1 + 0x350) + 0x40));
  local_2c = (char *)0x5c5bbb;
  FUN_00465978(*(undefined4 *)(param_1 + 0x370),*(undefined4 *)(*(int *)(param_1 + 0x35c) + 0x40));
  local_2c = (char *)0x5c5bcf;
  FUN_00465978(*(undefined4 *)(param_1 + 0x374),*(undefined4 *)(*(int *)(param_1 + 0x354) + 0x40));
  local_2c = (char *)0x5c5be3;
  FUN_00465978(*(undefined4 *)(param_1 + 0x378),*(undefined4 *)(*(int *)(param_1 + 0x358) + 0x40));
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 3) {
    local_2c = (char *)0x5c5bfe;
    TForm63_Image2Click(param_1,*(undefined4 *)(param_1 + 0x348));
  }
  else {
    local_2c = (char *)0x5c5c0d;
    TForm63_Image1Click(param_1,*(undefined4 *)(param_1 + 0x344));
  }
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_005c5c3c;
  local_24 = (undefined1 *)0x5c5c27;
  FUN_004048f8(&local_48,4,puVar1);
  local_24 = (undefined1 *)0x5c5c34;
  FUN_00405008(&local_38,9);
  return;
}

