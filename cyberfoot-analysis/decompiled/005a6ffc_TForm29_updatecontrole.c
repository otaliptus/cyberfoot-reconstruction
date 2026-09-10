// Address: 005a6ffc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm29_updatecontrole(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int iVar5;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar6;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
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
  int local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  int local_8;
  
  puVar2 = PTR_DAT_0066ac78;
  local_1c = &stack0xfffffffc;
  iVar4 = 0xb;
  do {
    local_8 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_20 = &LAB_005a7544;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  DAT_006d2598 = -1;
  local_28 = 0x5a7044;
  iVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0x328) + 0x23c) + 0x14))();
  if (0 < iVar4) {
    local_28 = 0x5a7052;
    local_28 = FUN_00405eec(DAT_006d2594);
    local_2c = 0x5a705e;
    iVar4 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x328));
    if (iVar4 + 1 <= local_28) {
      local_28 = 0x5a706f;
      iVar4 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x328));
      DAT_006d2598 = *(int *)(DAT_006d2594 + 4 + iVar4 * 0x10);
    }
  }
  local_28 = 0;
  local_2c = 0x5a7097;
  FUN_004060a8(&DAT_006d2594,PTR_DAT_005a5bd4,1);
  local_28 = 0x5a70a8;
  (**(code **)(**(int **)(param_1 + 0x328) + 0xd8))();
  local_28 = 0x5a70b5;
  FUN_00642c50(0x23,&local_c);
  local_28 = 0x5a70c3;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),local_c);
  local_28 = 1;
  local_2c = 0x5a70d3;
  FUN_005a6f98(param_1,1,DAT_006d2590);
  if (1 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d2590 * 0x294)) {
    local_28 = 0x5a70f8;
    FUN_00642c50(0x24,&stack0xfffffff0);
    local_28 = 0x5a7106;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),unaff_EBX);
    local_28 = 2;
    local_2c = 0x5a7116;
    FUN_005a6f98(param_1,1,DAT_006d2590);
  }
  if (2 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d2590 * 0x294)) {
    local_28 = 0x5a713b;
    FUN_00642c50(0x25,&stack0xffffffec);
    local_28 = 0x5a7149;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),unaff_ESI);
    local_28 = 3;
    local_2c = 0x5a7159;
    FUN_005a6f98(param_1,1,DAT_006d2590);
  }
  if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d2590 * 0x294) < 4) {
    if ((*(int *)(puVar2 + 0x168) == 2) &&
       (0x51 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x148 + DAT_006d2590 * 0x294))) {
      local_28 = 0x5a71cc;
      FUN_00642c50(0x26,&local_1c);
      local_28 = 0x5a71da;
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),local_1c);
      local_28 = 4;
      local_2c = 0x5a71ea;
      FUN_005a6f98(param_1,1,DAT_006d2590);
    }
  }
  else {
    local_28 = 0x5a717e;
    FUN_00642c50(0x26,&stack0xffffffe8);
    local_28 = 0x5a718c;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),unaff_EDI);
    local_28 = 4;
    local_2c = 0x5a719c;
    FUN_005a6f98(param_1,1,DAT_006d2590);
  }
  if (puVar2[0x10e] != '\0') {
    local_28 = 0x5a7200;
    FUN_00642c50(0x156,&local_20);
    local_28 = 0x5a720e;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),local_20);
    local_28 = -1;
    local_2c = 0x5a721e;
    FUN_005a6f98(param_1,2,DAT_006d2590);
  }
  if (puVar2[0x171] != '\0') {
    local_28 = 0x5a7238;
    FUN_00642c50(0xde,&local_24);
    local_28 = 0x5a7246;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),local_24);
    local_28 = -1;
    local_2c = 0x5a7259;
    FUN_005a6f98(param_1,4,0x1d);
    local_28 = 0x5a7266;
    FUN_00642c50(0xdc,&local_28);
    iVar4 = local_28;
    local_28 = 0x5a7274;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),iVar4);
    local_28 = -1;
    local_2c = 0x5a7287;
    FUN_005a6f98(param_1,4,3);
    local_28 = 0x5a7294;
    FUN_00642c50(0x3e2,&local_2c);
    local_28 = 0x5a72a2;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),local_2c);
    local_28 = -1;
    local_2c = 0x5a72b5;
    FUN_005a6f98(param_1,4,1);
    local_28 = 0x5a72c2;
    FUN_00642c50(0x3e3,&local_30);
    local_28 = 0x5a72d0;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),local_30);
    local_28 = -1;
    local_2c = 0x5a72e3;
    FUN_005a6f98(param_1,4,0x31);
  }
  if (puVar2[0x172] != '\0') {
    local_28 = 0x5a72f9;
    FUN_00642c50(0xdf,&local_34);
    local_28 = 0x5a7307;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),local_34);
    local_28 = -1;
    local_2c = 0x5a731a;
    FUN_005a6f98(param_1,6,0x1d);
    local_28 = 0x5a7327;
    FUN_00642c50(0xdd,&local_38);
    local_28 = 0x5a7335;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),local_38);
    local_28 = -1;
    local_2c = 0x5a7348;
    FUN_005a6f98(param_1,6,3);
  }
  if (((puVar2[0x171] != '\0') && (puVar2[0x172] != '\0')) && (2 < *(int *)(puVar2 + 0xc0))) {
    local_28 = 0x5a7370;
    FUN_00642c50(0x3e5,&local_3c);
    local_28 = 0x5a737e;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),local_3c);
    local_28 = -1;
    local_2c = 0x5a7391;
    FUN_005a6f98(param_1,10,0x1d);
    local_28 = 0x5a739e;
    FUN_00642c50(0x3e4,&local_40);
    local_28 = 0x5a73ac;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),local_40);
    local_28 = -1;
    local_2c = 0x5a73bf;
    FUN_005a6f98(param_1,10,3);
  }
  if (puVar2[0x171] != '\0') {
    local_28 = 0x5a73d5;
    FUN_00642c50(0xe0,&local_44);
    local_28 = 0x5a73e3;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),local_44);
    local_28 = -1;
    local_2c = 0x5a73f4;
    FUN_005a6f98(param_1,5,0xffffffff);
  }
  if (puVar2[0x17f] != '\0') {
    local_28 = 0x5a740a;
    FUN_00642c50(0x146,&local_48);
    local_28 = 0x5a7418;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),local_48);
    local_28 = -1;
    local_2c = 0x5a7429;
    FUN_005a6f98(param_1,7,0xffffffff);
  }
  if (puVar2[0x181] != '\0') {
    local_28 = 0x5a743f;
    FUN_00642c50(0x147,&local_4c);
    local_28 = 0x5a744d;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),local_4c);
    local_28 = -1;
    local_2c = 0x5a745e;
    FUN_005a6f98(param_1,8,0xffffffff);
  }
  if (puVar2[0x180] != '\0') {
    local_28 = 0x5a7474;
    FUN_00642c50(0x148,&local_50);
    local_28 = 0x5a7482;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x328),local_50);
    local_28 = -1;
    local_2c = 0x5a7493;
    FUN_005a6f98(param_1,9,0xffffffff);
  }
  if (DAT_006d2598 == 2) {
    local_28 = 0x5a74ad;
    iVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0x328) + 0x23c) + 0x14))();
    if (-1 < iVar4 + -1) {
      iVar5 = 0;
      uVar6 = true;
      local_8 = iVar4;
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0x328) + 0x23c);
        local_28 = 0x5a74ce;
        (**(code **)(*piVar1 + 0xc))(piVar1,iVar5,&local_58);
        local_28 = 0x5a74d9;
        FUN_004051d4(&local_54,local_58);
        local_28 = local_54;
        local_2c = 0x5a74ea;
        FUN_00642c50(0x156,&local_5c);
        iVar4 = local_28;
        local_28 = 0x5a74f3;
        FUN_00405378(iVar4,local_5c);
        if ((bool)uVar6) {
          local_28 = 0x5a7502;
          FUN_0054c10c(*(undefined4 *)(param_1 + 0x328),iVar5);
          break;
        }
        iVar5 = iVar5 + 1;
        local_8 = local_8 + -1;
        uVar6 = local_8 == 0;
      } while (!(bool)uVar6);
    }
  }
  else {
    local_28 = 0x5a7519;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x328),0);
  }
  puVar3 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_005a754b;
  local_20 = (undefined1 *)0x5a752e;
  FUN_00404ff0(&local_5c,local_24,puVar3);
  local_20 = (undefined1 *)0x5a7536;
  FUN_004048d4(&local_58);
  local_20 = (undefined1 *)0x5a7543;
  FUN_00405008(&local_54,0x13);
  return;
}

