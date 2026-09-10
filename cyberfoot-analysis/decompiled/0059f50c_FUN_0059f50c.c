// Address: 0059f50c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0059f50c(int param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 unaff_EBX;
  int unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  int local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  int local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  int local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = 0xe;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_0059fb28;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  bVar1 = false;
  if ((PTR_DAT_0066ac78[0x171] != '\0') &&
     ((1 < *(int *)(PTR_DAT_0066ac78 + 0xc0) || (PTR_DAT_0066ac78[0x75d] != '\0')))) {
    bVar1 = true;
  }
  local_2c = (undefined1 *)0x59f570;
  (**(code **)(**(int **)(param_1 + 0x334) + 0xd8))();
  local_2c = (undefined1 *)0x59f57d;
  FUN_00642c50(0x155,&local_c);
  local_2c = local_c;
  local_30 = &LAB_0059fb3c;
  local_34 = 0x59f592;
  FUN_00642c50(0x23,&local_10);
  local_34 = local_10;
  local_38 = (undefined1 *)0x59f5a2;
  FUN_00405330(&local_8,3);
  local_38 = (undefined1 *)0x59f5b0;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x334),local_8);
  local_38 = (undefined1 *)0x1;
  local_3c = (undefined1 *)0x59f5c4;
  FUN_004060a8(&DAT_006d2480,PTR_LAB_0059e2f0,1);
  *DAT_006d2480 = 1;
  if ((*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) &&
     (1 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d247c * 0x294))) {
    local_38 = (undefined1 *)0x59f606;
    FUN_00642c50(0x155,&stack0xffffffe8);
    local_3c = &LAB_0059fb3c;
    local_40 = 0x59f61b;
    FUN_00642c50(0x24,&stack0xffffffe4);
    local_44 = (undefined1 *)0x59f62b;
    local_40 = unaff_EDI;
    FUN_00405330(&stack0xffffffec,3);
    local_38 = (undefined1 *)0x59f639;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x334),unaff_EBX);
    local_38 = (undefined1 *)0x2;
    local_3c = (undefined1 *)0x59f64d;
    FUN_004060a8(&DAT_006d2480,PTR_LAB_0059e2f0,1);
    DAT_006d2480[1] = 2;
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
    local_38 = (undefined1 *)0x59f678;
    FUN_00642c50(0x155,&local_24);
    local_38 = local_24;
    local_3c = &LAB_0059fb3c;
    local_40 = 0x59f68d;
    FUN_00642c50(0x24,&local_28);
    local_40 = local_28;
    local_44 = (undefined1 *)0x59f69d;
    FUN_00405330(&local_20,3);
    local_44 = (undefined1 *)0x59f6ab;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x334),local_20);
    local_44 = (undefined1 *)0x59f6b8;
    FUN_00642c50(0x155,&local_30);
    local_44 = local_30;
    local_48 = &LAB_0059fb3c;
    local_4c = 0x59f6cd;
    FUN_00642c50(0x25,&local_34);
    local_4c = local_34;
    local_50 = (undefined1 *)0x59f6dd;
    FUN_00405330(&local_2c,3);
    local_50 = (undefined1 *)0x59f6eb;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x334),local_2c);
    local_50 = (undefined1 *)0x59f6f8;
    FUN_00642c50(0x155,&local_3c);
    local_50 = local_3c;
    local_54 = &LAB_0059fb3c;
    local_58 = 0x59f70d;
    FUN_00642c50(0x26,&local_40);
    local_58 = local_40;
    local_5c = 0x59f71d;
    FUN_00405330(&local_38,3);
    puVar2 = local_38;
    local_38 = (undefined1 *)0x59f72b;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x334),puVar2);
    local_38 = (undefined1 *)0x4;
    local_3c = (undefined1 *)0x59f73f;
    FUN_004060a8(&DAT_006d2480,PTR_LAB_0059e2f0,1);
    DAT_006d2480[1] = 2;
    DAT_006d2480[2] = 3;
    DAT_006d2480[3] = 4;
  }
  if ((*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) &&
     (2 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d247c * 0x294))) {
    local_38 = (undefined1 *)0x59f794;
    FUN_00642c50(0x155,&local_48);
    local_38 = local_48;
    local_3c = &LAB_0059fb3c;
    local_40 = 0x59f7a9;
    FUN_00642c50(0x25,&local_4c);
    local_40 = local_4c;
    local_44 = (undefined1 *)0x59f7b9;
    FUN_00405330(&local_44,3);
    local_38 = (undefined1 *)0x59f7c7;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x334),local_44);
    local_38 = (undefined1 *)0x3;
    local_3c = (undefined1 *)0x59f7db;
    FUN_004060a8(&DAT_006d2480,PTR_LAB_0059e2f0,1);
    DAT_006d2480[2] = 3;
  }
  if ((*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) &&
     (3 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d247c * 0x294))) {
    local_38 = (undefined1 *)0x59f81e;
    FUN_00642c50(0x155,&local_54);
    local_38 = local_54;
    local_3c = &LAB_0059fb3c;
    local_40 = 0x59f833;
    FUN_00642c50(0x26,&local_58);
    local_40 = local_58;
    local_44 = (undefined1 *)0x59f843;
    FUN_00405330(&local_50,3);
    local_38 = (undefined1 *)0x59f851;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x334),local_50);
    local_38 = (undefined1 *)0x4;
    local_3c = (undefined1 *)0x59f865;
    FUN_004060a8(&DAT_006d2480,PTR_LAB_0059e2f0,1);
    DAT_006d2480[3] = 4;
  }
  if (PTR_DAT_0066ac78[0x10e] != '\0') {
    local_38 = (undefined1 *)0x59f88c;
    FUN_00642c50(0x156,&local_5c);
    local_38 = (undefined1 *)0x59f89a;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x334),local_5c);
    local_38 = (undefined1 *)0x59f8a1;
    iVar3 = FUN_00405eec(DAT_006d2480);
    local_38 = (undefined1 *)(iVar3 + 1);
    local_3c = (undefined1 *)0x59f8b5;
    FUN_004060a8(&DAT_006d2480,PTR_LAB_0059e2f0,1);
    local_38 = (undefined1 *)0x59f8bf;
    iVar3 = FUN_00405ef4(DAT_006d2480);
    DAT_006d2480[iVar3] = 0x16;
  }
  if (bVar1) {
    local_38 = (undefined1 *)0x59f8dd;
    FUN_00642c50(0xde,&local_60);
    local_38 = (undefined1 *)0x59f8eb;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x334),local_60);
    local_38 = (undefined1 *)0x59f8f2;
    iVar3 = FUN_00405eec(DAT_006d2480);
    local_38 = (undefined1 *)(iVar3 + 1);
    local_3c = (undefined1 *)0x59f906;
    FUN_004060a8(&DAT_006d2480,PTR_LAB_0059e2f0,1);
    local_38 = (undefined1 *)0x59f910;
    iVar3 = FUN_00405ef4(DAT_006d2480);
    DAT_006d2480[iVar3] = 0x17;
    local_38 = (undefined1 *)0x59f926;
    FUN_00642c50(0xdc,&local_64);
    local_38 = (undefined1 *)0x59f934;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x334),local_64);
    local_38 = (undefined1 *)0x59f93b;
    iVar3 = FUN_00405eec(DAT_006d2480);
    local_38 = (undefined1 *)(iVar3 + 1);
    local_3c = (undefined1 *)0x59f94f;
    FUN_004060a8(&DAT_006d2480,PTR_LAB_0059e2f0,1);
    local_38 = (undefined1 *)0x59f959;
    iVar3 = FUN_00405ef4(DAT_006d2480);
    DAT_006d2480[iVar3] = 0x18;
    local_38 = (undefined1 *)0x59f96f;
    FUN_00642c50(0x3e2,&local_68);
    local_38 = (undefined1 *)0x59f97d;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x334),local_68);
    local_38 = (undefined1 *)0x59f984;
    iVar3 = FUN_00405eec(DAT_006d2480);
    local_38 = (undefined1 *)(iVar3 + 1);
    local_3c = (undefined1 *)0x59f998;
    FUN_004060a8(&DAT_006d2480,PTR_LAB_0059e2f0,1);
    local_38 = (undefined1 *)0x59f9a2;
    iVar3 = FUN_00405ef4(DAT_006d2480);
    DAT_006d2480[iVar3] = 0x1c;
    local_38 = (undefined1 *)0x59f9b8;
    FUN_00642c50(0x3e3,&local_6c);
    local_38 = (undefined1 *)0x59f9c6;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x334),local_6c);
    local_38 = (undefined1 *)0x59f9cd;
    iVar3 = FUN_00405eec(DAT_006d2480);
    local_38 = (undefined1 *)(iVar3 + 1);
    local_3c = (undefined1 *)0x59f9e1;
    FUN_004060a8(&DAT_006d2480,PTR_LAB_0059e2f0,1);
    local_38 = (undefined1 *)0x59f9eb;
    iVar3 = FUN_00405ef4(DAT_006d2480);
    DAT_006d2480[iVar3] = 0x1d;
  }
  if ((PTR_DAT_0066ac78[0x172] != '\0') && (1 < *(int *)(PTR_DAT_0066ac78 + 0xc0))) {
    local_38 = (undefined1 *)0x59fa25;
    FUN_00642c50(0xdf,&local_70);
    local_38 = (undefined1 *)0x59fa33;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x334),local_70);
    local_38 = (undefined1 *)0x59fa3a;
    iVar3 = FUN_00405eec(DAT_006d2480);
    local_38 = (undefined1 *)(iVar3 + 1);
    local_3c = (undefined1 *)0x59fa4e;
    FUN_004060a8(&DAT_006d2480,PTR_LAB_0059e2f0,1);
    local_38 = (undefined1 *)0x59fa58;
    iVar3 = FUN_00405ef4(DAT_006d2480);
    DAT_006d2480[iVar3] = 0x19;
    local_38 = (undefined1 *)0x59fa6e;
    FUN_00642c50(0xdd,&local_74);
    local_38 = (undefined1 *)0x59fa7c;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x334),local_74);
    local_38 = (undefined1 *)0x59fa83;
    iVar3 = FUN_00405eec(DAT_006d2480);
    local_38 = (undefined1 *)(iVar3 + 1);
    local_3c = (undefined1 *)0x59fa97;
    FUN_004060a8(&DAT_006d2480,PTR_LAB_0059e2f0,1);
    local_38 = (undefined1 *)0x59faa1;
    iVar3 = FUN_00405ef4(DAT_006d2480);
    DAT_006d2480[iVar3] = 0x1a;
  }
  local_38 = (undefined1 *)0x59fab7;
  FUN_00642c50(0x157,&local_78);
  local_38 = (undefined1 *)0x59fac5;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x334),local_78);
  local_38 = (undefined1 *)0x59facc;
  iVar3 = FUN_00405eec(DAT_006d2480);
  local_38 = (undefined1 *)(iVar3 + 1);
  local_3c = (undefined1 *)0x59fae0;
  FUN_004060a8(&DAT_006d2480,PTR_LAB_0059e2f0,1);
  local_38 = (undefined1 *)0x59faea;
  iVar3 = FUN_00405ef4(DAT_006d2480);
  DAT_006d2480[iVar3] = 0x1b;
  local_38 = (undefined1 *)0x59fb00;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x334),0);
  local_38 = (undefined1 *)0x59fb0d;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x334),0);
  puVar2 = local_2c;
  *in_FS_OFFSET = local_34;
  local_2c = &LAB_0059fb2f;
  local_30 = (undefined1 *)0x59fb27;
  FUN_00405008(&local_78,0x1d,puVar2);
  return;
}

