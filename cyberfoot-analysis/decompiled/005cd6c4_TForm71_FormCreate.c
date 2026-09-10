// Address: 005cd6c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm71_FormCreate(int param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int iVar5;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
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
  undefined *local_30;
  undefined4 local_2c;
  char *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  int local_8;
  
  local_1c = &stack0xfffffffc;
  iVar4 = 0xb;
  do {
    local_8 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_20 = &LAB_005cdb0c;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (char *)0x5cd6f3;
  FUN_00642c50(0x65,&local_c);
  local_28 = (char *)0x5cd701;
  FUN_00545088(*(undefined4 *)(param_1 + 0x368),local_c);
  local_28 = (char *)0x5cd70e;
  FUN_00642c50(0x29a,&stack0xfffffff0);
  local_28 = (char *)0x5cd71c;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x378),unaff_EBX);
  local_28 = (char *)0x5cd729;
  FUN_00642c50(0x29b,&stack0xffffffec);
  local_28 = (char *)0x5cd737;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x374),unaff_ESI);
  local_28 = (char *)0x5cd744;
  FUN_00642c50(0x29c,&stack0xffffffe8);
  local_28 = "j";
  FUN_004e1414(*(undefined4 *)(param_1 + 0x370),unaff_EDI);
  local_28 = (char *)0x0;
  local_2c = 0x5cd769;
  FUN_004060a8(&DAT_006d2d20,PTR_DAT_005ca4b8,1);
  DAT_006d2d1c = 1;
  local_28 = (char *)0x5cd782;
  DAT_006d2d08 = FUN_0042fcb8(PTR_PTR_00429378,1);
  DAT_006d2d14 = 0;
  local_28 = (char *)0x5cd79a;
  iVar4 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (iVar4 < 2) {
    local_28 = (char *)0x5cd8d1;
    FUN_00466128(*(undefined4 *)(param_1 + 0x36c),0);
    DAT_006d2d14 = 0;
    DAT_006d2d18 = 0;
  }
  else {
    local_28 = (char *)0x5cd7af;
    local_8 = FUN_0065208c(0x1d);
    if (-1 < iVar4 + -1) {
      iVar5 = 0;
      do {
        local_28 = "<img src=\"idx:";
        local_2c = 0x5cd7de;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar5 * 0x294),&local_24);
        local_2c = local_24;
        local_30 = &DAT_005cdb3c;
        local_34 = 0x5cd7f3;
        FUN_00404c64(&local_20,3);
        local_28 = (char *)0x5cd7fe;
        FUN_004051d4(&local_1c,local_20);
        local_28 = (char *)0x5cd824;
        FUN_0040526c(&local_1c,
                     *(undefined4 *)
                      (PTR_DAT_0066b294 +
                      *(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar5 * 0x294) * 4));
        local_28 = (char *)0x5cd832;
        FUN_0054cd98(*(undefined4 *)(param_1 + 0x36c),local_1c);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_28 = (char *)0x5cd843;
    FUN_00642c50(0x29d,&local_2c);
    local_28 = (char *)0x5cd853;
    FUN_004052cc(&local_28,L"<img src=\"idx:203\"> ",local_2c);
    pcVar1 = local_28;
    local_28 = (char *)0x5cd861;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x36c),pcVar1);
    if (local_8 < 0) {
      local_28 = (char *)0x5cd894;
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x36c),0);
      DAT_006d2d18 = 0;
    }
    else {
      local_28 = (char *)0x5cd875;
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x36c),local_8);
      DAT_006d2d18 = local_8;
    }
    local_28 = (char *)0x5cd8ad;
    DAT_006d2d14 = DAT_006d2d18;
    DAT_006d2d14 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x36c));
    local_28 = (char *)0x5cd8bd;
    DAT_006d2d18 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x36c));
  }
  local_28 = (char *)0x5cd8eb;
  FUN_005cae04(param_1,1);
  local_28 = (char *)0x5cd8f7;
  FUN_005cc7b0(param_1,1);
  if (PTR_DAT_0066ac78[0x10e] == '\0') {
    local_28 = (char *)0x5cd915;
    uVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxcopa1");
    local_28 = (char *)0x5cd91c;
    FUN_0050a804(uVar3,0);
    local_28 = (char *)0x5cd92c;
    uVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x324),"nxcopa2");
    local_28 = (char *)0x5cd933;
    FUN_0050a804(uVar3,0);
  }
  if (PTR_DAT_0066ac78[0x170] == '\0') {
    local_28 = (char *)0x5cd951;
    uVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxestadual1");
    local_28 = (char *)0x5cd958;
    FUN_0050a804(uVar3,0);
    local_28 = (char *)0x5cd968;
    uVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x324),"nxestadual2");
    local_28 = (char *)0x5cd96f;
    FUN_0050a804(uVar3,0);
  }
  local_28 = (char *)0x5cd97c;
  FUN_00642c50(0x155,&local_30);
  local_28 = (char *)0x5cd98d;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x330) + 0x60),local_30);
  local_28 = (char *)0x5cd99a;
  FUN_00642c50(0x156,&local_34);
  local_28 = (char *)0x5cd9ab;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x338) + 0x60),local_34);
  local_28 = (char *)0x5cd9b8;
  FUN_00642c50(0xde,&local_38);
  local_28 = (char *)0x5cd9c9;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x33c) + 0x60),local_38);
  local_28 = (char *)0x5cd9d6;
  FUN_00642c50(0xdf,&local_3c);
  local_28 = (char *)0x5cd9e7;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x340) + 0x60),local_3c);
  local_28 = (char *)0x5cd9f4;
  FUN_00642c50(0xe0,&local_40);
  local_28 = (char *)0x5cda05;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x60),local_40);
  local_28 = (char *)0x5cda12;
  FUN_00642c50(0x29e,&local_44);
  local_28 = (char *)0x5cda23;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x348) + 0x60),local_44);
  local_28 = (char *)0x5cda30;
  FUN_00642c50(0x155,&local_48);
  local_28 = (char *)0x5cda41;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0x60),local_48);
  local_28 = (char *)0x5cda4e;
  FUN_00642c50(0x156,&local_4c);
  local_28 = (char *)0x5cda5f;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x310) + 0x60),local_4c);
  local_28 = (char *)0x5cda6c;
  FUN_00642c50(0xde,&local_50);
  local_28 = (char *)0x5cda7d;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x314) + 0x60),local_50);
  local_28 = (char *)0x5cda8a;
  FUN_00642c50(0xdf,&local_54);
  local_28 = (char *)0x5cda9b;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x318) + 0x60),local_54);
  local_28 = (char *)0x5cdaa8;
  FUN_00642c50(0xe0,&local_58);
  local_28 = (char *)0x5cdab9;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x31c) + 0x60),local_58);
  local_28 = (char *)0x5cdac6;
  FUN_00642c50(0x29e,&local_5c);
  local_28 = (char *)0x5cdad7;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 800) + 0x60),local_5c);
  puVar2 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_005cdb13;
  local_20 = (undefined1 *)0x5cdaf1;
  FUN_00405008(&local_5c,0xe,puVar2);
  local_20 = (undefined1 *)0x5cdafe;
  FUN_004048f8(&local_24,2);
  local_20 = (undefined1 *)0x5cdb0b;
  FUN_00405008(&local_1c,5);
  return;
}

