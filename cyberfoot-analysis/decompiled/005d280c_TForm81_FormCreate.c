// Address: 005d280c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm81_FormCreate(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar5;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54 [28];
  undefined1 local_38 [28];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_74 = &stack0xfffffffc;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  puStack_78 = &LAB_005d2aeb;
  puStack_7c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_7c;
  FUN_00642c50(0x2ac,&local_c);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x308),local_c);
  FUN_00642c50(0x2b3,&local_10);
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x324),local_10);
  FUN_00642c50(0x2b2,&local_14);
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x324),local_14);
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x324),0);
  FUN_00642c50(0x2b4,&local_18);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x31c),local_18);
  FUN_005d25a4();
  FUN_004030d4(local_38,&DAT_005d2afc);
  FUN_004030a4(local_38,*(int *)PTR_DAT_0066af70 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8,0x1a);
  FUN_004030d4(local_54,local_38);
  FUN_004030a4(local_54,&DAT_005d2b00,0x1b);
  FUN_00405194(&local_1c,local_54);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x30c),local_1c);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x328),DAT_006d3260);
  if (*PTR_DAT_0066b53c != '\0') {
    FUN_00642c50(0x2ad,&local_58);
    FUN_004e1414(*(undefined4 *)(param_1 + 0x308),local_58);
  }
  FUN_00642c50(0x2af,&local_5c);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_5c);
  FUN_00642c50(0x2b0,&local_60);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x314),local_60);
  FUN_00642c50(0x2b1,&local_64);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x318),local_64);
  local_8 = 0;
  FUN_00405eec(*(undefined4 *)PTR_DAT_0066af70);
  iVar4 = *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40);
  if (-1 < iVar4 + -1) {
    iVar3 = 0;
    do {
      if (iVar3 != *(int *)(PTR_DAT_0066ac78 + 8)) {
        local_8 = local_8 + 1;
        FUN_004060a8(&DAT_006d3254,PTR_DAT_005d249c,1,local_8);
        FUN_00404b48(DAT_006d3254 + -8 + local_8 * 8,*(int *)PTR_DAT_0066af70 + iVar3 * 0x2f8);
        *(int *)(DAT_006d3254 + -4 + local_8 * 8) = iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  DAT_006d3258 = FUN_00405eec(DAT_006d3254);
  puVar5 = &LAB_005d24dc;
  FUN_004bcdb0(DAT_006d3254,8,0,&LAB_005d24dc,DAT_006d3258 + -1);
  FUN_004060a8(&DAT_006d325c,PTR_DAT_005d24bc,1,local_8);
  if (-1 < local_8 + -1) {
    iVar3 = 0;
    iVar4 = local_8;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x2fc) + 0x23c);
      (**(code **)(*piVar1 + 0x38))(piVar1,*(undefined4 *)(DAT_006d3254 + iVar3 * 8));
      *(undefined4 *)(DAT_006d325c + iVar3 * 4) = *(undefined4 *)(DAT_006d3254 + 4 + iVar3 * 8);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_004060a8(&DAT_006d3254,PTR_DAT_005d249c,1,0);
  puVar2 = puStack_7c;
  *in_FS_OFFSET = puVar5;
  puStack_7c = &LAB_005d2af2;
  FUN_00405008(&local_64,4,puVar2);
  FUN_00405008(&local_1c,5);
  return;
}

