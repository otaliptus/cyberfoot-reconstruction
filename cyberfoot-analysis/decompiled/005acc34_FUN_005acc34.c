// Address: 005acc34
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005acc34(undefined1 param_1,undefined1 param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_6c;
  undefined4 local_68;
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
  undefined *local_30;
  undefined4 local_2c;
  char *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  uint uStack_8;
  
  local_1c = &stack0xfffffffc;
  iVar4 = 0xd;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uStack_8 = (uint)CONCAT11(param_1,param_2) << 0x10;
  local_20 = &LAB_005ad049;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  iVar4 = 0x19;
  do {
    iVar5 = 1;
    do {
      local_28 = "j";
      local_2c = 0x5acc73;
      FUN_00409dd8(iVar4,&stack0xfffffff0);
      local_30 = &DAT_005ad06c;
      local_34 = 0x5acc85;
      local_2c = unaff_EBX;
      FUN_00409dd8(iVar5,&stack0xffffffec);
      local_38 = 0x5acc95;
      local_34 = unaff_ESI;
      FUN_00404c64(&local_c,4);
      local_28 = (char *)0x5acca2;
      uVar3 = FUN_00427360(DAT_006d25b8,local_c);
      local_28 = (char *)0x5accae;
      FUN_00466128(uVar3,uStack_8 >> 0x18);
      iVar5 = iVar5 + 1;
    } while (iVar5 != 3);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x20);
  iVar4 = 0x19;
  do {
    local_28 = (char *)0x5accc9;
    FUN_00409dd8(iVar4,&local_1c);
    local_28 = (char *)0x5accd9;
    FUN_00404bf0(&stack0xffffffe8,&DAT_005ad078,local_1c);
    local_28 = (char *)0x5acce6;
    uVar3 = FUN_00427360(DAT_006d25b8,unaff_EDI);
    local_28 = (char *)0x5accf2;
    FUN_00466128(uVar3,uStack_8 >> 0x18);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x20);
  local_28 = (char *)0x5acd0b;
  FUN_00466128(*(undefined4 *)(DAT_006d25b8 + 0x5d4),uStack_8 >> 0x18);
  local_28 = (char *)0x5acd1e;
  FUN_00466128(*(undefined4 *)(DAT_006d25b8 + 0x5d8),uStack_8 >> 0x18);
  local_28 = (char *)0x5acd30;
  FUN_00466238(*(undefined4 *)(DAT_006d25b8 + 0x5d4),0);
  local_28 = (char *)0x5acd45;
  FUN_004663a8(*(undefined4 *)(DAT_006d25b8 + 0x5d4),0xc0c0c0);
  iVar4 = 0x69;
  do {
    local_28 = (char *)0x5acd54;
    FUN_00409dd8(iVar4,&local_24);
    local_28 = (char *)0x5acd64;
    FUN_00404bf0(&local_20,"shape",local_24);
    local_28 = (char *)0x5acd71;
    uVar3 = FUN_00427360(DAT_006d25b8,local_20);
    local_28 = (char *)0x5acd7d;
    FUN_00466128(uVar3,uStack_8 >> 0x18);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x7b);
  iVar4 = 0x21;
  do {
    local_28 = (char *)0x5acd92;
    FUN_00409dd8(iVar4,&local_2c);
    local_28 = (char *)0x5acda2;
    FUN_00404bf0(&local_28,"shape",local_2c);
    pcVar1 = local_28;
    local_28 = (char *)0x5acdaf;
    uVar3 = FUN_00427360(DAT_006d25b8,pcVar1);
    local_28 = (char *)0x5acdbb;
    FUN_00466128(uVar3,uStack_8 >> 0x18);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x31);
  iVar4 = 0xba;
  do {
    local_28 = (char *)0x5acdd0;
    FUN_00409dd8(iVar4,&local_34);
    local_28 = (char *)0x5acde0;
    FUN_00404bf0(&local_30,"shape",local_34);
    local_28 = (char *)0x5acded;
    uVar3 = FUN_00427360(DAT_006d25b8,local_30);
    local_28 = (char *)0x5acdfb;
    FUN_00466128(uVar3,uStack_8 >> 0x10 & 0xff);
    local_28 = (char *)0x5ace07;
    FUN_00465978(uVar3,0x1d9);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xd2);
  iVar4 = 0x11;
  do {
    iVar5 = 1;
    do {
      local_28 = "cl_j";
      local_2c = 0x5ace29;
      FUN_00409dd8(iVar4,&local_3c);
      local_2c = local_3c;
      local_30 = &DAT_005ad0a4;
      local_34 = 0x5ace3b;
      FUN_00409dd8(iVar5,&local_40);
      local_34 = local_40;
      local_38 = 0x5ace4b;
      FUN_00404c64(&local_38,4);
      local_28 = (char *)0x5ace58;
      uVar3 = FUN_00427360(DAT_006d25b8,local_38);
      local_28 = (char *)0x5ace64;
      FUN_00466128(uVar3,uStack_8 >> 0x10 & 0xff);
      local_28 = (char *)0x5ace70;
      FUN_00465978(uVar3,499);
      iVar5 = iVar5 + 1;
    } while (iVar5 != 3);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x19);
  iVar4 = 0x11;
  do {
    local_28 = (char *)0x5ace8b;
    FUN_00409dd8(iVar4,&local_48);
    local_28 = (char *)0x5ace9b;
    FUN_00404bf0(&local_44,"ch2_pj",local_48);
    local_28 = (char *)0x5acea8;
    uVar3 = FUN_00427360(DAT_006d25b8,local_44);
    local_28 = (char *)0x5aceb6;
    FUN_00466128(uVar3,uStack_8 >> 0x10 & 0xff);
    local_28 = (char *)0x5acec2;
    FUN_00465978(uVar3,0x268);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x21);
  iVar4 = 1;
  do {
    local_28 = (char *)0x5aced7;
    FUN_00409dd8(iVar4,&local_50);
    local_28 = (char *)0x5acee7;
    FUN_00404bf0(&local_4c,&DAT_005ad0c0,local_50);
    local_28 = (char *)0x5acef4;
    uVar3 = FUN_00427360(DAT_006d25b8,local_4c);
    local_28 = (char *)0x5acf02;
    FUN_00466128(uVar3,uStack_8 >> 0x10 & 0xff);
    local_28 = (char *)0x5acf0e;
    FUN_00465978(uVar3,0x25d);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x11);
  iVar4 = 0x7b;
  do {
    local_28 = (char *)0x5acf23;
    FUN_00409dd8(iVar4,&local_58);
    local_28 = (char *)0x5acf33;
    FUN_00404bf0(&local_54,"shape",local_58);
    local_28 = (char *)0x5acf40;
    uVar3 = FUN_00427360(DAT_006d25b8,local_54);
    local_28 = (char *)0x5acf4e;
    FUN_00466128(uVar3,uStack_8 >> 0x10 & 0xff);
    local_28 = (char *)0x5acf5a;
    FUN_00465978(uVar3,0x267);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xaa);
  iVar4 = 0x11;
  do {
    iVar5 = 1;
    do {
      local_28 = "chave2_j";
      local_2c = 0x5acf7c;
      FUN_00409dd8(iVar4,&local_60);
      local_2c = local_60;
      local_30 = &DAT_005ad06c;
      local_34 = 0x5acf8e;
      FUN_00409dd8(iVar5,&local_64);
      local_34 = local_64;
      local_38 = 0x5acf9e;
      FUN_00404c64(&local_5c,4);
      local_28 = (char *)0x5acfab;
      uVar3 = FUN_00427360(DAT_006d25b8,local_5c);
      local_28 = (char *)0x5acfb7;
      FUN_00466128(uVar3,uStack_8 >> 0x10 & 0xff);
      local_28 = (char *)0x5acfc3;
      FUN_00465978(uVar3,0x287);
      iVar5 = iVar5 + 1;
    } while (iVar5 != 3);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x21);
  iVar4 = 0x21;
  do {
    local_28 = (char *)0x5acfde;
    FUN_00409dd8(iVar4,&local_6c);
    local_28 = (char *)0x5acfee;
    FUN_00404bf0(&local_68,&DAT_005ad0e0,local_6c);
    local_28 = (char *)0x5acffb;
    uVar3 = FUN_00427360(DAT_006d25b8,local_68);
    local_28 = (char *)0x5ad009;
    FUN_00466128(uVar3,uStack_8 >> 0x10 & 0xff);
    local_28 = (char *)0x5ad015;
    FUN_00465978(uVar3,0x2f4);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x41);
  local_28 = (char *)0x5ad02e;
  FUN_00466128(*(undefined4 *)(DAT_006d25b8 + 0x9f8),uStack_8 >> 0x10 & 0xff);
  puVar2 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_005ad050;
  local_20 = (undefined1 *)0x5ad048;
  FUN_004048f8(&local_6c,0x19,puVar2);
  return;
}

