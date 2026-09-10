// Address: 005fbbdc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005fbbdc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uStack_168;
  undefined1 *puStack_164;
  undefined1 *puStack_160;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_148 [24];
  undefined1 local_130 [20];
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_114 [256];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_160 = &stack0xfffffffc;
  local_118 = 0;
  local_11c = 0;
  local_14c = 0;
  local_150 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_164 = &LAB_005fbf5f;
  uStack_168 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_168;
  iVar2 = DAT_006d408c;
  iVar1 = DAT_006d4088;
  if (param_2 == 1) {
    local_8 = DAT_006d408c;
    *(undefined4 *)PTR_DAT_0066b780 = 1;
    iVar2 = iVar1;
  }
  else {
    local_8 = DAT_006d4088;
    *(undefined4 *)PTR_DAT_0066b780 = 2;
  }
  FUN_00642c50(0x1e7,&local_10);
  uVar4 = local_10;
  FUN_00405194(&local_14,*(int *)PTR_DAT_0066af70 + iVar2 * 0x2f8,*(int *)PTR_DAT_0066af70,
               &DAT_005fbf74);
  uVar3 = local_14;
  FUN_00405330(&local_c,3);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x314),local_c);
  if (0 < DAT_006d40e8) {
    *(undefined1 *)(*(int *)PTR_DAT_0066b3b8 + 0x170 + DAT_006d40e8 * 0x1bc) = 1;
    *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x174 + DAT_006d40e8 * 0x1bc) = DAT_006d407c;
    *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x178 + DAT_006d40e8 * 0x1bc) = DAT_006d4080;
  }
  iVar1 = *(int *)(PTR_DAT_0066ac78 + 0x88);
  if ((((iVar1 == 4) || (iVar1 == 6)) || (iVar1 == 2)) || (iVar1 == 3)) {
    *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x10 + *(int *)PTR_DAT_0066b648 * 0x48) =
         DAT_006d407c;
    *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x14 + *(int *)PTR_DAT_0066b648 * 0x48) =
         DAT_006d4080;
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 5) {
    *(int *)(PTR_DAT_0066af90 + *(int *)PTR_DAT_0066b648 * 0x30 + -0x18) = iVar2;
    if (*(int *)(PTR_DAT_0066ac78 + 0x62c) < 3) {
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + local_8 * 0x2f8 + 0x21b) = 0;
    }
  }
  else if (6 < *(int *)(PTR_DAT_0066ac78 + 0x88)) {
    iVar1 = *(int *)PTR_DAT_0066b648;
    *(int *)(PTR_DAT_0066ad60 + iVar1 * 0x30 + -0x18) = iVar2;
    FUN_004030d4(local_130,PTR_DAT_0066ad60 + iVar1 * 0x30 + -0x14);
    FUN_004030a4(local_130,&DAT_005fbf78,0x12);
    FUN_004030d4(local_148,local_130);
    FUN_004030a4(local_148,&DAT_005fbf7c,0x14);
    FUN_00404b48(&local_11c,local_148);
    FUN_00409dd8(DAT_006d407c,&local_14c);
    FUN_00409dd8(DAT_006d4080,&local_150);
    FUN_00404c64(&local_118,4);
    FUN_00404b80(local_114,local_118,0xff);
    FUN_004030e0(PTR_DAT_0066ad60 + *(int *)PTR_DAT_0066b648 * 0x30 + -0x14,local_114,0x11);
    if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 7) && (*(int *)(PTR_DAT_0066ac78 + 0x62c) < 7)) {
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + local_8 * 0x2f8 + 0x215) = 0;
    }
    if ((7 < *(int *)(PTR_DAT_0066ac78 + 0x88)) && (*(int *)(PTR_DAT_0066ac78 + 0x62c) < 6)) {
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + local_8 * 0x2f8 + 0x215) = 0;
    }
  }
  FUN_0043b234(*(undefined4 *)(param_1 + 0x340),1);
  *in_FS_OFFSET = uVar3;
  FUN_004048f8(&local_150,2,uVar4,&LAB_005fbf66);
  FUN_004048f8(&local_11c,2);
  FUN_00405008(&local_14,3);
  return;
}

