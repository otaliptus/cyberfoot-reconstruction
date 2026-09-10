// Address: 004787a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004787a0(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint *in_FS_OFFSET;
  bool bVar7;
  undefined1 uVar8;
  int *piVar9;
  uint uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_28;
  int local_24 [2];
  int local_1c;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_38 = &stack0xfffffffc;
  local_28 = 0;
  local_14 = 0;
  puStack_3c = &LAB_00478982;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_40;
  local_c = param_2;
  local_8 = param_3;
  uVar3 = FUN_00403c80(param_1);
  cVar2 = FUN_00403c10(uVar3,PTR_PTR_00475ac4);
  bVar7 = cVar2 == '\0';
  if (bVar7) {
    uVar8 = 1;
  }
  else {
    uVar8 = bVar7;
    FUN_00478754();
  }
  bVar7 = !bVar7;
  iVar4 = thunk_FUN_0047910c(param_1);
  local_10 = FUN_00478724(param_1);
  FUN_00404cf0(*(undefined4 *)(param_1 + 0x30),&LAB_0047899c);
  if ((bool)uVar8) {
    *param_4 = 5;
    *local_8 = -2;
    bVar1 = false;
  }
  else if ((local_10 == 0) || ((0x7fffffff < *(uint *)(param_1 + 0x40) && (bVar7)))) {
    if ((*(int *)(param_1 + 0x4c) == 0) ||
       (cVar2 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x1c))(), cVar2 != '\0')) {
      *local_8 = -7;
      bVar1 = false;
    }
    else {
      *local_8 = 0x10;
      if (!bVar7) {
        *param_4 = 0x10;
      }
      bVar1 = true;
    }
  }
  else {
    *local_8 = *(int *)(local_10 + 0x34);
    if (!bVar7) {
      *param_4 = *(int *)(local_10 + 0x30);
    }
    bVar1 = true;
  }
  if ((bVar1) && (!bVar7)) {
    *local_8 = *local_8 + 0xf;
  }
  if (!bVar7) {
    *param_4 = *param_4 + 3;
  }
  FUN_004032a8(local_24,0x10,0);
  if (iVar4 == 0) {
    cVar2 = FUN_00403c10(0,PTR_PTR_00475da8);
    bVar6 = bRam00000060;
    if (cVar2 == '\0') {
      bVar6 = 0;
    }
  }
  else {
    bVar6 = 0;
  }
  if (*(short *)(param_1 + 0x60) == 0) {
    FUN_0040496c(&local_14,*(undefined4 *)(param_1 + 0x30));
  }
  else {
    FUN_00476234(*(short *)(param_1 + 0x60),&local_28);
    FUN_00404bf0(&local_14,*(undefined4 *)(param_1 + 0x30),local_28);
  }
  uVar5 = (uint)(*(ushort *)(&DAT_006631c8 + (uint)bVar6 * 2) | 0x560);
  piVar9 = local_24;
  FUN_00477170(param_1,local_c,local_14,uVar5,0);
  *local_8 = *local_8 + (local_1c - local_24[0]) + 7;
  if (*(short *)(param_1 + 0xa2) != 0) {
    (**(code **)(param_1 + 0xa0))(*(undefined4 *)(param_1 + 0xa4),param_1,local_c,param_4,local_8);
  }
  *in_FS_OFFSET = uVar5;
  FUN_004048d4(&local_28,uVar5,piVar9,&LAB_00478989);
  FUN_004048d4(&local_14);
  return;
}

