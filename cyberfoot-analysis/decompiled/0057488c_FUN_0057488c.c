// Address: 0057488c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0057488c(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
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
  undefined4 local_30;
  undefined4 local_2c;
  char *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_c;
  int local_8;
  
  local_1c = &stack0xfffffffc;
  iVar5 = 0xf;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_20 = &LAB_00575106;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  iVar5 = 0x66;
  local_8 = 1;
  puVar6 = &DAT_006d2074;
  do {
    local_28 = (char *)0x5748cf;
    piVar3 = (int *)FUN_0045b76c(PTR_PTR_00457844,1,DAT_006d2070);
    *puVar6 = piVar3;
    local_28 = (char *)0x5748de;
    FUN_00409dd8(local_8,&stack0xffffffe8);
    local_28 = (char *)0x5748ee;
    FUN_00404bf0(&stack0xffffffec,&DAT_0057511c,unaff_EDI);
    local_28 = (char *)0x5748f8;
    (**(code **)(*piVar3 + 0x18))(piVar3,unaff_ESI);
    local_28 = (char *)0x574905;
    (**(code **)(*piVar3 + 0x68))(piVar3,DAT_006d2070);
    local_28 = (char *)0x574911;
    FUN_004659c4(piVar3,0x14);
    local_28 = (char *)0x57491d;
    FUN_004659e8(piVar3,0x12);
    local_28 = (char *)0x574926;
    (**(code **)(*piVar3 + 0x5c))(piVar3,0);
    local_28 = (char *)0x574932;
    FUN_00466238(piVar3,&DAT_0057512c);
    local_28 = (char *)0x57493e;
    FUN_00465978(piVar3,0xf);
    local_28 = (char *)0x574947;
    FUN_0046599c(piVar3,iVar5);
    local_28 = (char *)0x574953;
    FUN_004663a8(piVar3,0xff8000);
    local_28 = (char *)0x574960;
    FUN_0042a3a0(piVar3[0x1a],0xffffff);
    local_28 = (char *)0x574967;
    FUN_00466468(piVar3);
    local_28 = (char *)0x574970;
    FUN_0045bc28(piVar3,1);
    local_28 = (char *)0x57497e;
    FUN_0042a66c(piVar3[0x1a],DAT_00575130);
    local_28 = (char *)0x574987;
    FUN_0045bbe4(piVar3,1);
    local_28 = (char *)0x574990;
    FUN_0045bbe4(piVar3,0);
    iVar5 = iVar5 + 0x13;
    local_8 = local_8 + 1;
    puVar6 = puVar6 + 1;
  } while (local_8 != 5);
  local_8 = 1;
  puVar6 = &DAT_006d2114;
  piVar3 = &DAT_006d2074;
  do {
    local_28 = (char *)0x5749c6;
    piVar4 = (int *)FUN_0043a67c(PTR_PTR_004386b8,1,DAT_006d2070);
    *puVar6 = piVar4;
    local_28 = (char *)0x5749d5;
    FUN_00409dd8(local_8,&local_20);
    local_28 = (char *)0x5749e5;
    FUN_00404bf0(&local_1c,&DAT_0057513c,local_20);
    local_28 = (char *)0x5749ef;
    (**(code **)(*piVar4 + 0x18))(piVar4,local_1c);
    local_28 = (char *)0x5749fc;
    (**(code **)(*piVar4 + 0x68))(piVar4,DAT_006d2070);
    local_28 = (char *)0x574a05;
    (**(code **)(*piVar4 + 0x5c))(piVar4,0);
    local_28 = (char *)0x574a0e;
    FUN_0043aa78(piVar4,1);
    local_28 = (char *)0x574a1a;
    FUN_004659c4(piVar4,0x10);
    local_28 = (char *)0x574a26;
    FUN_004659e8(piVar4,0x12);
    local_28 = (char *)0x574a2f;
    FUN_0043aa50(piVar4,1);
    local_28 = (char *)0x574a3f;
    FUN_00465978(piVar4,*(int *)(*piVar3 + 0x40) + *(int *)(*piVar3 + 0x48) + 1);
    local_28 = (char *)0x574a4b;
    FUN_0046599c(piVar4,*(undefined4 *)(*piVar3 + 0x44));
    local_28 = (char *)0x574a52;
    FUN_00466468(piVar4);
    local_8 = local_8 + 1;
    piVar3 = piVar3 + 1;
    puVar6 = puVar6 + 1;
  } while (local_8 != 5);
  local_8 = 1;
  puVar6 = &DAT_006d2084;
  piVar3 = &DAT_006d2114;
  do {
    local_28 = (char *)0x574a88;
    piVar4 = (int *)FUN_0045b76c(PTR_PTR_00457844,1,DAT_006d2070);
    *puVar6 = piVar4;
    local_28 = (char *)0x574a97;
    FUN_00409dd8(local_8,&local_28);
    pcVar1 = local_28;
    local_28 = (char *)0x574aa7;
    FUN_00404bf0(&local_24,"labnomee4",pcVar1);
    local_28 = (char *)0x574ab1;
    (**(code **)(*piVar4 + 0x18))(piVar4,local_24);
    local_28 = (char *)0x574abe;
    (**(code **)(*piVar4 + 0x68))(piVar4,DAT_006d2070);
    local_28 = (char *)0x574aca;
    FUN_004659c4(piVar4,0x88);
    local_28 = (char *)0x574ad6;
    FUN_004659e8(piVar4,0x12);
    local_28 = (char *)0x574adf;
    (**(code **)(*piVar4 + 0x5c))(piVar4,0);
    local_28 = (char *)0x574aeb;
    FUN_00466238(piVar4,&DAT_00575160);
    local_28 = (char *)0x574afb;
    FUN_00465978(piVar4,*(int *)(*piVar3 + 0x40) + *(int *)(*piVar3 + 0x48) + 1);
    local_28 = (char *)0x574b07;
    FUN_0046599c(piVar4,*(undefined4 *)(*piVar3 + 0x44));
    if (local_8 < 3) {
      local_28 = (char *)0x574b1d;
      FUN_004663a8(piVar4,*(undefined4 *)(PTR_DAT_0066b30c + 0xc));
    }
    else {
      local_28 = (char *)0x574b2e;
      FUN_004663a8(piVar4,*(undefined4 *)PTR_DAT_0066b30c);
    }
    local_28 = (char *)0x574b37;
    FUN_00466358(piVar4,1);
    local_28 = (char *)0x574b41;
    FUN_0042a3a0(piVar4[0x1a],0);
    local_28 = (char *)0x574b48;
    FUN_00466468(piVar4);
    local_28 = (char *)0x574b51;
    FUN_0045bc28(piVar4,1);
    local_28 = (char *)0x574b5f;
    FUN_0042a66c(piVar4[0x1a],DAT_00575130);
    local_28 = (char *)0x574b6c;
    FUN_0042a5c8(piVar4[0x1a],"Arial");
    local_28 = (char *)0x574b75;
    FUN_0045bbe4(piVar4,1);
    local_28 = (char *)0x574b7e;
    FUN_0045bbe4(piVar4,0);
    local_8 = local_8 + 1;
    piVar3 = piVar3 + 1;
    puVar6 = puVar6 + 1;
  } while (local_8 != 5);
  local_8 = 1;
  puVar6 = &DAT_006d2094;
  do {
    local_c = 1;
    piVar3 = &DAT_006d2084;
    puVar7 = puVar6;
    do {
      local_28 = (char *)0x574bc2;
      piVar4 = (int *)FUN_0045b76c(PTR_PTR_00457844,1,DAT_006d2070);
      *puVar7 = piVar4;
      local_28 = "labresult4";
      local_2c = 0x574bd6;
      FUN_00409dd8(local_8,&local_30);
      local_2c = local_30;
      local_30 = 0x574be4;
      FUN_00409dd8(local_c,&local_34);
      local_30 = local_34;
      local_34 = 0x574bf4;
      FUN_00404c64(&local_2c,3);
      local_34 = 0x574bfe;
      (**(code **)(*piVar4 + 0x18))(piVar4,local_2c);
      local_34 = 0x574c0b;
      (**(code **)(*piVar4 + 0x68))(piVar4,DAT_006d2070);
      if (local_8 < 6) {
        local_34 = 0x574c1d;
        FUN_004659c4(piVar4,0x14);
      }
      else {
        local_34 = 0x574c2b;
        FUN_004659c4(piVar4,0x19);
      }
      local_34 = 0x574c37;
      FUN_004659e8(piVar4,0x12);
      local_34 = 0x574c40;
      (**(code **)(*piVar4 + 0x5c))(piVar4,0);
      local_28 = (char *)0x574c4c;
      FUN_00466238(piVar4,&DAT_00575190);
      if (local_8 == 1) {
        local_28 = (char *)0x574c62;
        FUN_00465978(piVar4,*(int *)(*piVar3 + 0x40) + *(int *)(*piVar3 + 0x48) + 1);
      }
      else {
        local_28 = (char *)0x574c75;
        FUN_00465978(piVar4,*(int *)(puVar7[-4] + 0x40) + *(int *)(puVar7[-4] + 0x48) + 1);
      }
      local_28 = (char *)0x574c81;
      FUN_0046599c(piVar4,*(undefined4 *)(*piVar3 + 0x44));
      local_28 = (char *)0x574c8d;
      FUN_004663a8(piVar4,*(undefined4 *)(*piVar3 + 0x70));
      local_28 = (char *)0x574c97;
      FUN_0042a3a0(piVar4[0x1a],0);
      local_28 = (char *)0x574c9e;
      FUN_00466468(piVar4);
      local_28 = (char *)0x574ca7;
      FUN_0045bc28(piVar4,1);
      local_28 = (char *)0x574cb5;
      FUN_0042a66c(piVar4[0x1a],DAT_00575130);
      local_28 = (char *)0x574cbe;
      FUN_0045bb70(piVar4,2);
      local_28 = (char *)0x574cc7;
      FUN_0045bbe4(piVar4,1);
      local_28 = (char *)0x574cd0;
      FUN_0045bbe4(piVar4,0);
      local_c = local_c + 1;
      piVar3 = piVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (local_c != 5);
    local_8 = local_8 + 1;
    puVar6 = puVar6 + 4;
  } while (local_8 != 9);
  iVar5 = 1;
  puVar6 = &DAT_006d2124;
  piVar3 = &DAT_006d2094;
  do {
    local_28 = (char *)0x574d17;
    piVar4 = (int *)FUN_0045b76c(PTR_PTR_004df4e4,1,DAT_006d2070);
    *puVar6 = piVar4;
    local_28 = (char *)0x574d28;
    FUN_00409dd8(iVar5,&local_3c);
    local_28 = (char *)0x574d38;
    FUN_00404bf0(&local_38,"lablib4",local_3c);
    local_28 = (char *)0x574d42;
    (**(code **)(*piVar4 + 0x18))(piVar4,local_38);
    local_28 = (char *)0x574d4f;
    (**(code **)(*piVar4 + 0x68))(piVar4,DAT_006d2070);
    local_28 = (char *)0x574d58;
    (**(code **)(*piVar4 + 0x5c))(piVar4,0);
    local_28 = (char *)0x574d64;
    FUN_00465978(piVar4,*(undefined4 *)(*piVar3 + 0x40));
    local_28 = (char *)0x574d73;
    FUN_0046599c(piVar4,*(int *)(*piVar3 + 0x44) + -0x13);
    local_28 = (char *)0x574d7f;
    FUN_004659e8(piVar4,*(undefined4 *)(*piVar3 + 0x4c));
    local_28 = (char *)0x574d8b;
    FUN_004659c4(piVar4,*(undefined4 *)(*piVar3 + 0x48));
    local_28 = (char *)0x574d98;
    FUN_0042a3a0(piVar4[0x1a],0xffffff);
    local_28 = (char *)0x574da4;
    FUN_004663a8(piVar4,0xff8000);
    local_28 = (char *)0x574dad;
    FUN_00466358(piVar4,1);
    switch(iVar5) {
    case 1:
      local_28 = (char *)0x574df0;
      FUN_00642c50(0x56,&local_40);
      local_28 = (char *)0x574dfa;
      FUN_004e1414(piVar4,local_40);
      break;
    case 2:
      local_28 = (char *)0x574e0c;
      FUN_00642c50(0x54,&local_44);
      local_28 = (char *)0x574e16;
      FUN_004e1414(piVar4,local_44);
      break;
    case 3:
      local_28 = (char *)0x574e28;
      FUN_00642c50(0x4f,&local_48);
      local_28 = (char *)0x574e32;
      FUN_004e1414(piVar4,local_48);
      break;
    case 4:
      local_28 = (char *)0x574e41;
      FUN_00642c50(0x50,&local_4c);
      local_28 = (char *)0x574e4b;
      FUN_004e1414(piVar4,local_4c);
      break;
    case 5:
      local_28 = (char *)0x574e5a;
      FUN_00642c50(0x51,&local_50);
      local_28 = (char *)0x574e64;
      FUN_004e1414(piVar4,local_50);
      break;
    case 6:
      local_28 = (char *)0x574e73;
      FUN_00642c50(0x52,&local_54);
      local_28 = (char *)0x574e7d;
      FUN_004e1414(piVar4,local_54);
      break;
    case 7:
      local_28 = (char *)0x574e8c;
      FUN_00642c50(0x53,&local_58);
      local_28 = (char *)0x574e96;
      FUN_004e1414(piVar4,local_58);
      break;
    case 8:
      local_28 = (char *)0x574ea5;
      FUN_00642c50(0x55,&local_5c);
      local_28 = (char *)0x574eaf;
      FUN_004e1414(piVar4,local_5c);
    }
    switch(iVar5) {
    case 1:
      local_28 = (char *)0x574ef2;
      FUN_00642c50(0x1d5,&local_60);
      local_28 = (char *)0x574efc;
      FUN_004e14d4(piVar4,local_60);
      break;
    case 2:
      local_28 = (char *)0x574f0e;
      FUN_00642c50(0x1d6,&local_64);
      local_28 = (char *)0x574f18;
      FUN_004e14d4(piVar4,local_64);
      break;
    case 3:
      local_28 = (char *)0x574f2a;
      FUN_00642c50(0x1d7,&local_68);
      local_28 = (char *)0x574f34;
      FUN_004e14d4(piVar4,local_68);
      break;
    case 4:
      local_28 = (char *)0x574f43;
      FUN_00642c50(0x1d8,&local_6c);
      local_28 = (char *)0x574f4d;
      FUN_004e14d4(piVar4,local_6c);
      break;
    case 5:
      local_28 = (char *)0x574f5c;
      FUN_00642c50(0x1d9,&local_70);
      local_28 = (char *)0x574f66;
      FUN_004e14d4(piVar4,local_70);
      break;
    case 6:
      local_28 = (char *)0x574f75;
      FUN_00642c50(0x1da,&local_74);
      local_28 = (char *)0x574f7f;
      FUN_004e14d4(piVar4,local_74);
      break;
    case 7:
      local_28 = (char *)0x574f8e;
      FUN_00642c50(0x1db,&local_78);
      local_28 = (char *)0x574f98;
      FUN_004e14d4(piVar4,local_78);
      break;
    case 8:
      local_28 = (char *)0x574fa7;
      FUN_00642c50(0x1dc,&local_7c);
      local_28 = (char *)0x574fb1;
      FUN_004e14d4(piVar4,local_7c);
    }
    local_28 = (char *)0x574fb8;
    FUN_00466468(piVar4);
    local_28 = (char *)0x574fc1;
    FUN_0045bc28(piVar4,1);
    local_28 = (char *)0x574fcf;
    FUN_0042a66c(piVar4[0x1a],DAT_00575130);
    local_28 = (char *)0x574fd8;
    FUN_0045bb70(piVar4,2);
    local_28 = (char *)0x574fe1;
    FUN_00466128(piVar4,1);
    local_28 = (char *)0x574fea;
    FUN_0045bbe4(piVar4,1);
    local_28 = (char *)0x574ff3;
    FUN_0045bbe4(piVar4,0);
    iVar5 = iVar5 + 1;
    piVar3 = piVar3 + 4;
    puVar6 = puVar6 + 1;
  } while (iVar5 != 9);
  local_28 = (char *)0x575016;
  DAT_006d2144 = (int *)FUN_0045b76c(PTR_PTR_004df4e4,1,DAT_006d2070);
  local_28 = (char *)0x57502a;
  (**(code **)(*DAT_006d2144 + 0x18))(DAT_006d2144,"labdivisaoe4");
  local_28 = (char *)0x57503a;
  (**(code **)(*DAT_006d2144 + 0x68))(DAT_006d2144,DAT_006d2070);
  local_28 = (char *)0x575046;
  (**(code **)(*DAT_006d2144 + 0x5c))(DAT_006d2144,1);
  local_28 = (char *)0x575058;
  FUN_00465978(DAT_006d2144,*(undefined4 *)(DAT_006d2074 + 0x40));
  local_28 = (char *)0x57506d;
  FUN_0046599c(DAT_006d2144,*(int *)(DAT_006d2074 + 0x44) + -0x12);
  local_28 = (char *)0x57507c;
  FUN_004659e8(DAT_006d2144,0x12);
  local_28 = (char *)0x57508e;
  FUN_0042a3a0(DAT_006d2144[0x1a],0xffffff);
  local_28 = (char *)0x57509a;
  FUN_0045bbe4(DAT_006d2144,1);
  local_28 = (char *)0x5750a9;
  FUN_004e1414(DAT_006d2144,L"Grupo A");
  local_28 = (char *)0x5750b3;
  FUN_00466468(DAT_006d2144);
  local_28 = (char *)0x5750bf;
  FUN_0045bc28(DAT_006d2144,1);
  local_28 = (char *)0x5750d2;
  FUN_0042a66c(DAT_006d2144[0x1a],DAT_00575130);
  local_28 = (char *)0x5750de;
  FUN_00466128(DAT_006d2144,1);
  puVar2 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_0057510d;
  local_20 = (undefined1 *)0x5750f8;
  FUN_00405008(&local_7c,0x10,puVar2);
  local_20 = (undefined1 *)0x575105;
  FUN_004048f8(&local_3c,0xb);
  return;
}

