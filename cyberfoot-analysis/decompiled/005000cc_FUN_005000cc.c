// Address: 005000cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005000cc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char param_5
                 ,char param_6,char param_7,char param_8,int param_9,int param_10,uint param_11,
                 int param_12,int param_13,undefined4 param_14,undefined4 param_15,char param_16,
                 undefined4 param_17,undefined4 param_18)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  LONG LVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 *in_FS_OFFSET;
  byte bVar12;
  float10 in_ST0;
  float10 fVar13;
  int aiStackY_1814 [1504];
  undefined2 uVar14;
  undefined2 uVar15;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64 [16];
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  LONG local_44;
  int local_40;
  LONG local_3c;
  tagRECT local_38;
  tagRECT local_28;
  int local_18;
  double local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar12 = 0;
  puStack_7c = &stack0xfffffffc;
  local_68 = 0;
  local_6c = 0;
  local_50 = 0;
  local_54 = 0;
  puStack_80 = &LAB_005003e7;
  uStack_84 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_84;
  iVar2 = param_1[8];
  local_18 = param_1[0xd];
  local_c = param_3;
  local_8 = param_2;
  FUN_004e5278(PTR_DAT_004e5104,param_2,param_3,(double)param_13,param_14,(short)param_15);
  local_14 = (double)in_ST0;
  uVar14 = (undefined2)iVar2;
  uVar15 = (undefined2)((uint)iVar2 >> 0x10);
  piVar7 = param_1 + (uint)bVar12 * -2 + 10;
  local_28.left = param_1[9];
  piVar9 = (int *)((int)&local_28 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
  *(int *)((int)&local_28 + (uint)bVar12 * -8 + 4) = *piVar7;
  *piVar9 = piVar7[(uint)bVar12 * -2 + 1];
  piVar9[(uint)bVar12 * -2 + 1] = (piVar7 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
  iVar2 = CONCAT22(uVar15,uVar14);
  InflateRect(&local_28,-param_12,-param_12);
  if (0 < (int)param_11) {
    cVar1 = *(char *)(local_18 + 0xa8);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        local_28.top = local_28.bottom - param_11;
      }
      else if (cVar1 == '\x02') {
        iVar6 = local_28.bottom - local_28.top >> 1;
        if (iVar6 < 0) {
          iVar6 = iVar6 + (uint)((local_28.bottom - local_28.top & 1U) != 0);
        }
        iVar5 = (int)param_11 >> 1;
        if (iVar5 < 0) {
          iVar5 = iVar5 + (uint)((param_11 & 1) != 0);
        }
        local_28.top = (iVar6 + local_28.top) - iVar5;
      }
    }
    local_28.bottom = local_28.top + param_11;
  }
  if ((param_8 != '\0') && (param_5 == '\x01')) {
    local_28.left = local_28.left + 0x1e;
  }
  FUN_0042ab6c(*(undefined4 *)(iVar2 + 0x14),param_17);
  if (param_7 == '\0') {
    FUN_0042ab6c(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(local_18 + 0x34));
    FUN_0042a88c(*(undefined4 *)(iVar2 + 0x10),param_17);
    if (param_6 == '\0') {
      FUN_0042b1a0(iVar2,&local_28);
    }
    else {
      FUN_0042b1bc(iVar2,local_28.left,local_28.top,4,4,local_28.bottom,(short)local_28.right);
    }
  }
  else {
    FUN_0042afc8(iVar2,&local_28);
  }
  local_38.left = local_28.left;
  puVar10 = (undefined4 *)((int)&local_38 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
  puVar8 = (undefined4 *)((int)&local_28 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
  *(undefined4 *)((int)&local_38 + (uint)bVar12 * -8 + 4) =
       *(undefined4 *)((int)&local_28 + (uint)bVar12 * -8 + 4);
  *puVar10 = *puVar8;
  puVar10[(uint)bVar12 * -2 + 1] = puVar8[(uint)bVar12 * -2 + 1];
  InflateRect(&local_38,-2,-2);
  LVar4 = local_38.left;
  local_4c = local_38.right - local_38.left;
  local_40 = FUN_00402c38();
  local_48 = LVar4;
  local_40 = LVar4 + local_40;
  if (local_28.right + -2 <= local_40) {
    local_40 = local_28.right + -2;
  }
  local_44 = local_38.top;
  local_3c = local_38.bottom;
  uVar11 = local_c;
  if (((double)CONCAT44(param_15,param_14) < (double)param_10) &&
     (uVar11 = local_8, (double)CONCAT44(param_15,param_14) <= (double)param_9)) {
    uVar11 = param_18;
  }
  FUN_0042ab6c(*(undefined4 *)(CONCAT22(uVar15,uVar14) + 0x14),uVar11);
  if (param_16 == '\0') {
    FUN_0042af8c(CONCAT22(uVar15,uVar14),&local_48);
  }
  else if (param_16 == '\x01') {
    FUN_00500040(param_1,&local_48,uVar11);
  }
  else if (param_16 == '\x02') {
    FUN_004e5a84(PTR_DAT_004e5160,param_1[8],&local_48,uVar11,
                 (short)*(undefined4 *)(local_18 + 0x34));
  }
  else if (param_16 == '\x03') {
    FUN_004e5708(PTR_DAT_004e5160,param_1[8],&local_48,uVar11,
                 (short)*(undefined4 *)(local_18 + 0x34));
  }
  if (param_8 != '\0') {
    if (param_5 == '\0') {
      FUN_0042a3a0(*(undefined4 *)(param_1[8] + 0xc),
                   *(undefined4 *)(*(int *)(param_1[0xd] + 0x58) + 0x18));
      fVar13 = (float10)local_14;
      FUN_0040be20(CONCAT31((int3)((uint)&local_6c >> 8),2),0x12,param_4,&local_6c,SUB104(fVar13,0),
                   (int)((unkuint10)fVar13 >> 0x20),(short)((unkuint10)fVar13 >> 0x40));
      FUN_00404bac(&local_6c,&DAT_00500404);
      FUN_004051d4(&local_68,local_6c);
      uVar14 = (undefined2)local_68;
      uVar15 = (undefined2)((uint)local_68 >> 0x10);
      (**(code **)(*param_1 + 0x10))(param_1,local_64);
      (**(code **)(*param_1 + 0x14))(param_1,CONCAT22(uVar15,uVar14),local_64);
    }
    else if (param_5 == '\x01') {
      fVar13 = (float10)local_14;
      FUN_0040be20(CONCAT31((int3)((uint)&local_54 >> 8),2),0x12,param_4,&local_54,SUB104(fVar13,0),
                   (int)((unkuint10)fVar13 >> 0x20),(short)((unkuint10)fVar13 >> 0x40));
      FUN_00404bac(&local_54,&DAT_00500404);
      FUN_004051d4(&local_50,local_54);
      uVar14 = (undefined2)local_50;
      uVar15 = (undefined2)((uint)local_50 >> 0x10);
      (**(code **)(*param_1 + 0x10))(param_1,local_64);
      (**(code **)(*param_1 + 0x14))(param_1,CONCAT22(uVar15,uVar14),local_64);
    }
  }
  puVar3 = puStack_7c;
  *in_FS_OFFSET = uStack_84;
  puStack_7c = &LAB_005003ee;
  puStack_80 = (undefined1 *)0x5003ce;
  FUN_004048d4(&local_6c,uStack_84,puVar3);
  puStack_80 = (undefined1 *)0x5003d6;
  FUN_00404ff0(&local_68);
  puStack_80 = (undefined1 *)0x5003de;
  FUN_004048d4(&local_54);
  puStack_80 = (undefined1 *)0x5003e6;
  FUN_00404ff0(&local_50);
  return;
}

