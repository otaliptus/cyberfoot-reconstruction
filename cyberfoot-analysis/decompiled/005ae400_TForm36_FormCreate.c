// Address: 005ae400
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm36_FormCreate(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  int local_8;
  
  puVar1 = PTR_DAT_0066ac78;
  local_1c = &stack0xfffffffc;
  iVar6 = 6;
  do {
    local_8 = 0;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_20 = &LAB_005ae818;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = 0x5ae435;
  FUN_00642c50(0x3fa,&local_c);
  local_28 = 0x5ae443;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x358),local_c);
  local_28 = 0x5ae450;
  FUN_00642c50(0x3fb,&stack0xfffffff0);
  local_28 = 0x5ae45e;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x35c),unaff_EBX);
  local_28 = 0x5ae46b;
  FUN_00642c50(0x3fc,&stack0xffffffec);
  local_28 = 0x5ae479;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x360),unaff_ESI);
  local_28 = 0x5ae486;
  FUN_00642c50(0x3fd,&stack0xffffffe8);
  local_28 = 0x5ae494;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x364),unaff_EDI);
  local_28 = 0x5ae4a1;
  FUN_00642c50(0x3fe,&local_1c);
  local_28 = 0x5ae4af;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x368),local_1c);
  local_28 = 0x5ae4bc;
  FUN_00642c50(0x3ff,&local_20);
  local_28 = 0x5ae4ca;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x36c),local_20);
  local_28 = 0x5ae4d7;
  FUN_00642c50(0x24,&local_24);
  local_28 = 0x5ae4e5;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x374),local_24);
  local_28 = 0x5ae4f2;
  FUN_00642c50(0x25,&local_28);
  uVar2 = local_28;
  local_28 = 0x5ae500;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x378),uVar2);
  local_28 = 0x5ae50d;
  FUN_00642c50(0x26,&local_2c);
  local_28 = 0x5ae51b;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x37c),local_2c);
  DAT_006d265c = 0;
  DAT_006d2658 = 0;
  DAT_006d25e0 = *(int *)(puVar1 + 0x88);
  if (((DAT_006d25e0 != 1) && (DAT_006d25e0 != 3)) && (DAT_006d25e0 != 4)) {
    DAT_006d25e0 = 1;
  }
  if ((puVar1[0x170] != '\0') &&
     (DAT_006d25e4 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x40 + *(int *)(puVar1 + 8) * 0x2f8),
     PTR_DAT_0066ae98[DAT_006d25e4 * 0x568 + 0x52d] == '\0')) {
    iVar6 = 0;
    pcVar4 = PTR_DAT_0066ae98 + 0x52d;
    do {
      if (*pcVar4 != '\0') {
        DAT_006d25e4 = iVar6;
      }
      iVar6 = iVar6 + 1;
      pcVar4 = pcVar4 + 0x568;
    } while (iVar6 != 0x1b);
  }
  if (-1 < *(int *)PTR_DAT_0066ad88) {
    DAT_006d25e4 = *(int *)PTR_DAT_0066ad88;
  }
  local_28 = 0x5ae5c6;
  FUN_005b18a4(param_1);
  if ((puVar1[0x171] == '\0') || (*(int *)(puVar1 + 0xc4) == 0xca)) {
    local_28 = 0x5ae5e8;
    FUN_00466128(*(undefined4 *)(param_1 + 0x30c),0);
    local_28 = 0x5ae5f5;
    FUN_00466128(*(undefined4 *)(param_1 + 0x310),0);
    local_28 = 0x5ae602;
    FUN_00466128(*(undefined4 *)(param_1 + 0x314),0);
    local_28 = 0x5ae60f;
    FUN_00466128(*(undefined4 *)(param_1 + 0x318),0);
    local_28 = 0x5ae61c;
    FUN_00466128(*(undefined4 *)(param_1 + 0x35c),0);
    local_28 = 0x5ae629;
    FUN_00466128(*(undefined4 *)(param_1 + 0x360),0);
    local_28 = 0x5ae636;
    FUN_00466128(*(undefined4 *)(param_1 + 0x368),0);
    local_28 = 0x5ae643;
    FUN_00466128(*(undefined4 *)(param_1 + 0x36c),0);
  }
  if (((puVar1[0x172] == '\0') || (*(int *)(puVar1 + 0xc4) == 0xca)) ||
     (*(int *)(puVar1 + 0xc0) == 1)) {
    local_28 = 0x5ae66e;
    FUN_00466128(*(undefined4 *)(param_1 + 800),0);
    local_28 = 0x5ae67b;
    FUN_00466128(*(undefined4 *)(param_1 + 0x364),0);
  }
  if ((*(int *)(puVar1 + 0xc0) == 1) && (puVar1[0x75d] == '\0')) {
    local_28 = 0x5ae69a;
    FUN_00466128(*(undefined4 *)(param_1 + 0x30c),0);
    local_28 = 0x5ae6a7;
    FUN_00466128(*(undefined4 *)(param_1 + 0x310),0);
    local_28 = 0x5ae6b4;
    FUN_00466128(*(undefined4 *)(param_1 + 0x314),0);
    local_28 = 0x5ae6c1;
    FUN_00466128(*(undefined4 *)(param_1 + 0x318),0);
    local_28 = 0x5ae6ce;
    FUN_00466128(*(undefined4 *)(param_1 + 0x35c),0);
    local_28 = 0x5ae6db;
    FUN_00466128(*(undefined4 *)(param_1 + 0x360),0);
    local_28 = 0x5ae6e8;
    FUN_00466128(*(undefined4 *)(param_1 + 0x368),0);
    local_28 = 0x5ae6f5;
    FUN_00466128(*(undefined4 *)(param_1 + 0x36c),0);
  }
  if (puVar1[0x170] == '\0') {
    local_28 = 0x5ae70b;
    FUN_00466128(*(undefined4 *)(param_1 + 0x304),0);
  }
  local_8 = 8;
  iVar6 = 1;
  do {
    local_28 = 0x5ae721;
    FUN_00409dd8(iVar6,&local_34);
    local_28 = 0x5ae731;
    FUN_00404bf0(&local_30,"Image",local_34);
    local_28 = 0x5ae73e;
    iVar5 = FUN_00427360(DAT_006d25cc,local_30);
    if (*(char *)(iVar5 + 0x57) != '\0') {
      local_28 = 0x5ae750;
      FUN_00465978(iVar5,local_8);
      local_8 = local_8 + *(int *)(iVar5 + 0x48);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 8);
  if (DAT_006d25e0 == 3) {
    local_28 = 0x5ae76e;
    FUN_005b00e8(param_1,0);
  }
  else if (DAT_006d25e0 == 4) {
    local_28 = 0x5ae780;
    FUN_005b36e4(param_1);
  }
  else {
    local_28 = 0x5ae78c;
    FUN_005b2960(param_1,0xffffffff);
  }
  local_28 = 0x5ae7a0;
  FUN_00465978(*(undefined4 *)(param_1 + 0x35c),*(undefined4 *)(*(int *)(param_1 + 0x30c) + 0x40));
  local_28 = 0x5ae7b4;
  FUN_00465978(*(undefined4 *)(param_1 + 0x360),*(undefined4 *)(*(int *)(param_1 + 0x310) + 0x40));
  local_28 = 0x5ae7c8;
  FUN_00465978(*(undefined4 *)(param_1 + 0x364),*(undefined4 *)(*(int *)(param_1 + 800) + 0x40));
  local_28 = 0x5ae7dc;
  FUN_00465978(*(undefined4 *)(param_1 + 0x368),*(undefined4 *)(*(int *)(param_1 + 0x314) + 0x40));
  local_28 = 0x5ae7f0;
  FUN_00465978(*(undefined4 *)(param_1 + 0x36c),*(undefined4 *)(*(int *)(param_1 + 0x318) + 0x40));
  puVar3 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_005ae81f;
  local_20 = (undefined1 *)0x5ae80a;
  FUN_004048f8(&local_34,2,puVar3);
  local_20 = (undefined1 *)0x5ae817;
  FUN_00405008(&local_2c,9);
  return;
}

