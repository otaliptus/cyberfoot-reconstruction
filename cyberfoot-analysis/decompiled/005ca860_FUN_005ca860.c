// Address: 005ca860
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005ca860(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *unaff_EBX;
  undefined1 *unaff_ESI;
  undefined1 *unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_1c = &stack0xfffffffc;
  iVar3 = 6;
  do {
    local_8 = (undefined1 *)0x0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_20 = &LAB_005cad43;
  local_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (undefined1 *)0x5ca89d;
  iVar3 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + param_2 * 0x294));
  if (iVar3 == 0) {
    local_28 = (undefined1 *)0x5ca8b2;
    FUN_00642c50(0xdc,&local_8);
    local_28 = local_8;
    local_2c = (undefined1 *)0x5ca8c6;
    iVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxlibertadores1");
    puVar1 = local_28;
    local_28 = (undefined1 *)0x5ca8cf;
    FUN_00509a64(*(undefined4 *)(iVar3 + 0x60),puVar1);
    local_28 = (undefined1 *)0x5ca8dc;
    FUN_00642c50(0xdc,&local_c);
    local_28 = local_c;
    local_2c = (undefined1 *)0x5ca8f0;
    iVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x324),"nxlibertadores2");
    puVar1 = local_28;
    local_28 = (undefined1 *)0x5ca8f9;
    FUN_00509a64(*(undefined4 *)(iVar3 + 0x60),puVar1);
    local_28 = (undefined1 *)0x5ca906;
    FUN_00642c50(0xdd,&stack0xfffffff0);
    local_2c = (undefined1 *)0x5ca91a;
    local_28 = unaff_EBX;
    iVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxsulamericana1");
    puVar1 = local_28;
    local_28 = (undefined1 *)0x5ca923;
    FUN_00509a64(*(undefined4 *)(iVar3 + 0x60),puVar1);
    local_28 = (undefined1 *)0x5ca930;
    FUN_00642c50(0xdd,&stack0xffffffec);
    local_2c = (undefined1 *)0x5ca944;
    local_28 = unaff_ESI;
    iVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x324),"nxsulamericana2");
    puVar1 = local_28;
    local_28 = (undefined1 *)0x5ca94d;
    FUN_00509a64(*(undefined4 *)(iVar3 + 0x60),puVar1);
  }
  else {
    local_28 = (undefined1 *)0x5ca965;
    iVar3 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + param_2 * 0x294));
    if (iVar3 == 1) {
      local_28 = (undefined1 *)0x5ca979;
      FUN_00642c50(0xde,&stack0xffffffe8);
      local_2c = (undefined1 *)0x5ca98d;
      local_28 = unaff_EDI;
      iVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxlibertadores1");
      puVar1 = local_28;
      local_28 = (undefined1 *)0x5ca996;
      FUN_00509a64(*(undefined4 *)(iVar3 + 0x60),puVar1);
      local_28 = (undefined1 *)0x5ca9a3;
      FUN_00642c50(0xde,&local_1c);
      local_28 = local_1c;
      local_2c = (undefined1 *)0x5ca9b7;
      iVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x324),"nxlibertadores2");
      puVar1 = local_28;
      local_28 = (undefined1 *)0x5ca9c0;
      FUN_00509a64(*(undefined4 *)(iVar3 + 0x60),puVar1);
      local_28 = (undefined1 *)0x5ca9cd;
      FUN_00642c50(0xdf,&local_20);
      local_28 = local_20;
      local_2c = (undefined1 *)0x5ca9e1;
      iVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxsulamericana1");
      puVar1 = local_28;
      local_28 = (undefined1 *)0x5ca9ea;
      FUN_00509a64(*(undefined4 *)(iVar3 + 0x60),puVar1);
      local_28 = (undefined1 *)0x5ca9f7;
      FUN_00642c50(0xdf,&local_24);
      local_28 = local_24;
      local_2c = (undefined1 *)0x5caa0b;
      iVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x324),"nxsulamericana2");
      puVar1 = local_28;
      local_28 = (undefined1 *)0x5caa14;
      FUN_00509a64(*(undefined4 *)(iVar3 + 0x60),puVar1);
    }
    else {
      local_28 = (undefined1 *)0x5caa2c;
      iVar3 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + param_2 * 0x294));
      if (iVar3 == 2) {
        local_28 = (undefined1 *)0x5caa3e;
        FUN_00642c50(0x3e2,&local_28);
        local_2c = (undefined1 *)0x5caa52;
        iVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxlibertadores1");
        puVar1 = local_28;
        local_28 = (undefined1 *)0x5caa5b;
        FUN_00509a64(*(undefined4 *)(iVar3 + 0x60),puVar1);
        local_28 = (undefined1 *)0x5caa68;
        FUN_00642c50(0x3e2,&local_2c);
        local_28 = local_2c;
        local_2c = (undefined1 *)0x5caa7c;
        iVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x324),"nxlibertadores2");
        puVar1 = local_28;
        local_28 = (undefined1 *)0x5caa85;
        FUN_00509a64(*(undefined4 *)(iVar3 + 0x60),puVar1);
      }
      else {
        local_28 = (undefined1 *)0x5caa9a;
        iVar3 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + param_2 * 0x294));
        if (iVar3 == 3) {
          local_28 = (undefined1 *)0x5caaac;
          FUN_00642c50(0x3e3,&local_30);
          local_28 = local_30;
          local_2c = (undefined1 *)0x5caac0;
          iVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxlibertadores1");
          puVar1 = local_28;
          local_28 = (undefined1 *)0x5caac9;
          FUN_00509a64(*(undefined4 *)(iVar3 + 0x60),puVar1);
          local_28 = (undefined1 *)0x5caad6;
          FUN_00642c50(0x3e3,&local_34);
          local_28 = local_34;
          local_2c = (undefined1 *)0x5caaea;
          iVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x324),"nxlibertadores2");
          puVar1 = local_28;
          local_28 = (undefined1 *)0x5caaf3;
          FUN_00509a64(*(undefined4 *)(iVar3 + 0x60),puVar1);
        }
      }
    }
  }
  if (PTR_DAT_0066ac78[0x171] != '\0') {
    local_28 = (undefined1 *)0x5cab1b;
    iVar3 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + param_2 * 0x294));
    if (iVar3 < 4) {
      if (PTR_DAT_0066ac78[0x171] != '\0') {
        local_28 = (undefined1 *)0x5cabd1;
        uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxlibertadores1");
        local_28 = (undefined1 *)0x5cabd8;
        FUN_0050a804(uVar2,1);
        local_28 = (undefined1 *)0x5cabe8;
        uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxmundial1");
        local_28 = (undefined1 *)0x5cabef;
        FUN_0050a804(uVar2,1);
        local_28 = (undefined1 *)0x5cabff;
        uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x324),"nxmundial2");
        local_28 = (undefined1 *)0x5cac06;
        FUN_0050a804(uVar2,1);
        local_28 = (undefined1 *)0x5cac16;
        uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x324),"nxlibertadores2");
        local_28 = (undefined1 *)0x5cac1d;
        FUN_0050a804(uVar2,1);
      }
      if (PTR_DAT_0066ac78[0x172] != '\0') {
        local_28 = (undefined1 *)0x5cac3b;
        uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxsulamericana1");
        local_28 = (undefined1 *)0x5cac42;
        FUN_0050a804(uVar2,1);
        local_28 = (undefined1 *)0x5cac52;
        uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x324),"nxsulamericana2");
        local_28 = (undefined1 *)0x5cac59;
        FUN_0050a804(uVar2,1);
      }
      local_28 = (undefined1 *)0x5cac73;
      iVar3 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + param_2 * 0x294));
      if (1 < iVar3) {
        local_28 = (undefined1 *)0x5cac86;
        uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxsulamericana1");
        local_28 = (undefined1 *)0x5cac8d;
        FUN_0050a804(uVar2,0);
        local_28 = (undefined1 *)0x5cac9d;
        uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x324),"nxsulamericana2");
        local_28 = (undefined1 *)0x5caca4;
        FUN_0050a804(uVar2,0);
      }
      goto LAB_005caca4;
    }
  }
  local_28 = (undefined1 *)0x5cab34;
  uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxlibertadores1");
  local_28 = (undefined1 *)0x5cab3b;
  FUN_0050a804(uVar2,0);
  local_28 = (undefined1 *)0x5cab4b;
  uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x324),"nxlibertadores2");
  local_28 = (undefined1 *)0x5cab52;
  FUN_0050a804(uVar2,0);
  local_28 = (undefined1 *)0x5cab62;
  uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxsulamericana1");
  local_28 = (undefined1 *)0x5cab69;
  FUN_0050a804(uVar2,0);
  local_28 = (undefined1 *)0x5cab79;
  uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x324),"nxsulamericana2");
  local_28 = (undefined1 *)0x5cab80;
  FUN_0050a804(uVar2,0);
  local_28 = (undefined1 *)0x5cab90;
  uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxmundial1");
  local_28 = (undefined1 *)0x5cab97;
  FUN_0050a804(uVar2,0);
  local_28 = (undefined1 *)0x5caba7;
  uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x324),"nxmundial2");
  local_28 = (undefined1 *)0x5cabae;
  FUN_0050a804(uVar2,0);
LAB_005caca4:
  if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + param_2 * 0x294) == 0x1d) {
    if (PTR_DAT_0066ac78[0x170] != '\0') {
      local_28 = (undefined1 *)0x5cad0a;
      uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxestadual1");
      local_28 = (undefined1 *)0x5cad11;
      FUN_0050a804(uVar2,1);
      local_28 = (undefined1 *)0x5cad21;
      uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x324),"nxestadual2");
      local_28 = (undefined1 *)0x5cad28;
      FUN_0050a804(uVar2,1);
    }
  }
  else {
    local_28 = (undefined1 *)0x5caccc;
    uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x324),"nxestadual2");
    local_28 = (undefined1 *)0x5cacd3;
    FUN_0050a804(uVar2,0);
    local_28 = (undefined1 *)0x5cace3;
    uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxestadual1");
    local_28 = (undefined1 *)0x5cacea;
    FUN_0050a804(uVar2,0);
  }
  puVar1 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_005cad4a;
  local_20 = (undefined1 *)0x5cad42;
  FUN_00405008(&local_34,0xc,puVar1);
  return;
}

