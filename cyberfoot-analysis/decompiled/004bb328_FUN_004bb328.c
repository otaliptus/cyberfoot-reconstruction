// Address: 004bb328
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004bb328(int *param_1,char param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_c;
  undefined1 local_5;
  
  local_c = 0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStack_28 = (undefined1 *)0x4bb341;
    param_1 = (int *)FUN_00403de8();
    local_5 = extraout_DL;
  }
  puStack_2c = &LAB_004bb4b1;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_0045b76c(param_1,0);
  FUN_0045bbe4(param_1,1);
  *(undefined1 *)(param_1 + 0x65) = 0;
  iVar3 = FUN_00403a54(PTR_PTR_004b23cc,1);
  param_1[0x71] = iVar3;
  iVar3 = FUN_00403a54(PTR_PTR_0041bda0,1);
  param_1[0x66] = iVar3;
  *(int **)(iVar3 + 0x24) = param_1;
  *(undefined1 **)(iVar3 + 0x20) = &LAB_004bb550;
  iVar3 = FUN_00403a54(PTR_DAT_0047361c,1);
  param_1[0x91] = iVar3;
  *(int **)(iVar3 + 0xc) = param_1;
  *(code **)(iVar3 + 8) = FUN_004bb56c;
  FUN_00466238(param_1,0);
  (**(code **)(*param_1 + 0x5c))(param_1,0);
  param_1[0x72] = 0;
  param_1[0x73] = 0xff0000;
  param_1[0x79] = 0x808080;
  param_1[0x78] = 2;
  FUN_004bbc60(param_1,1);
  *(undefined1 *)(param_1 + 0x77) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  param_1[0x7b] = -1;
  param_1[0x7d] = 0x1fffffff;
  param_1[0x7e] = 0x1fffffff;
  param_1[0x94] = 0x1fffffff;
  param_1[0x8d] = 0;
  FUN_004659c4(param_1,0x78);
  param_1[0x8e] = 2;
  param_1[0x8f] = 0;
  if ((((*(byte *)(param_1 + 7) & 0x10) == 0) || ((*(byte *)(param_1[1] + 0x1c) & 2) != 0)) ||
     ((*(byte *)(param_1[1] + 0x1c) & 1) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_00404bf0(&local_c,"TMS <b>HTML</b> label ",param_1[2]);
    (**(code **)(*(int *)param_1[0x66] + 0x38))((int *)param_1[0x66],local_c);
  }
  puVar2 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004bb4b8;
  puStack_2c = (undefined1 *)0x4bb4b0;
  FUN_004048d4(&local_c,uStack_30,puVar2);
  return;
}

