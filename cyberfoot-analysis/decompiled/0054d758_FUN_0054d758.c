// Address: 0054d758
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void FUN_0054d758(undefined4 param_1,undefined4 param_2,int *param_3,char param_4,uint param_5,
                 LPRECT param_6,int *param_7,int param_8,int param_9,byte param_10,
                 undefined4 param_11,int *param_12)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte bVar8;
  LONG aLStackY_1828 [1521];
  LPRECT ptVar9;
  LONG local_4c;
  uint local_3c;
  int *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar8 = 0;
  local_c = param_2;
  local_8 = param_1;
  iVar2 = FUN_0054d28c(param_1);
  local_38 = *(int **)(iVar2 + 4);
  local_3c = (uint)*(byte *)(iVar2 + 0x20);
  if ((param_5 & 2) == 2) {
    if (param_10 == 0) {
      param_10 = 1;
    }
    else if (param_10 == 1) {
      param_10 = 0;
    }
  }
  FUN_0041c968(param_3[2] - *param_3,param_3[3] - param_3[1],&local_1c);
  if (local_38 == (int *)0x0) {
    FUN_0041c968(0,0,&local_24);
  }
  else {
    uVar3 = (**(code **)(*local_38 + 0x20))();
    iVar2 = (**(code **)(*local_38 + 0x2c))();
    FUN_0041c968(iVar2 / (int)local_3c,uVar3,&local_24);
  }
  iVar2 = FUN_00405260(param_11);
  if (iVar2 < 1) {
    FUN_0041c990(0,0,0,&stack0xffffffb4,0);
    puVar6 = (undefined4 *)((int)param_6 + (uint)bVar8 * -8 + 4);
    param_6->left = local_4c;
    puVar7 = puVar6 + (uint)bVar8 * -2 + 1;
    *puVar6 = *(undefined4 *)((int)&stack0xffffffb8 + (uint)bVar8 * 0xfffffffe * 4);
    *puVar7 = *(undefined4 *)(&stack0xffffffbc + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    puVar7[(uint)bVar8 * -2 + 1] =
         *(undefined4 *)
          ((int)(&stack0xffffffbc + (uint)bVar8 * -8 + (uint)bVar8 * -8) +
          ((uint)bVar8 * -2 + 1) * 4);
    FUN_0041c968(0,0,&local_2c);
  }
  else {
    FUN_0041c990(0,0,((param_3[2] - *param_3) - local_24) + -3,&stack0xffffffb4,0);
    puVar6 = (undefined4 *)((int)param_6 + (uint)bVar8 * -8 + 4);
    param_6->left = local_4c;
    puVar7 = puVar6 + (uint)bVar8 * -2 + 1;
    *puVar6 = *(undefined4 *)((int)&stack0xffffffb8 + (uint)bVar8 * 0xfffffffe * 4);
    *puVar7 = *(undefined4 *)(&stack0xffffffbc + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    puVar7[(uint)bVar8 * -2 + 1] =
         *(undefined4 *)
          ((int)(&stack0xffffffbc + (uint)bVar8 * -8 + (uint)bVar8 * -8) +
          ((uint)bVar8 * -2 + 1) * 4);
    if (param_4 == '\0') {
      param_5 = param_5 | 0x400;
      ptVar9 = param_6;
      uVar3 = FUN_00405260(param_11);
      uVar4 = FUN_00405250(param_11);
      FUN_004d4104(local_c,uVar4,uVar3,param_5,ptVar9);
    }
    else {
      param_5 = param_5 | 0x410;
      ptVar9 = param_6;
      uVar3 = FUN_00405260(param_11);
      uVar4 = FUN_00405250(param_11);
      FUN_004d4104(local_c,uVar4,uVar3,param_5,ptVar9);
    }
    FUN_0041c968(param_6->right - param_6->left,param_6->bottom - param_6->top,&local_2c);
  }
  if (param_10 < 2) {
    uVar5 = (local_18 - local_20) + 1;
    iVar2 = (int)uVar5 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((uVar5 & 1) != 0);
    }
    param_7[1] = iVar2;
    uVar5 = (local_18 - local_28) + 1;
    local_10 = (int)uVar5 >> 1;
    if (local_10 < 0) {
      local_10 = local_10 + (uint)((uVar5 & 1) != 0);
    }
  }
  else {
    uVar5 = (local_1c - local_24) + 1;
    iVar2 = (int)uVar5 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((uVar5 & 1) != 0);
    }
    *param_7 = iVar2;
    uVar5 = (local_1c - local_2c) + 1;
    local_14 = (int)uVar5 >> 1;
    if (local_14 < 0) {
      local_14 = local_14 + (uint)((uVar5 & 1) != 0);
    }
  }
  if ((local_2c == 0) || (local_24 == 0)) {
    param_8 = 0;
  }
  if (param_9 == -1) {
    if (param_8 == -1) {
      FUN_0041c968(local_24 + local_2c,local_20 + local_28,&local_34);
      if (param_10 < 2) {
        local_34 = local_1c - local_34;
      }
      else {
        local_34 = local_18 - local_30;
      }
      param_9 = local_34 / 3;
      param_8 = param_9;
    }
    else {
      FUN_0041c968(local_24 + param_8 + local_2c,local_20 + param_8 + local_28,&local_34);
      if (param_10 < 2) {
        uVar5 = (local_1c - local_34) + 1;
        param_9 = (int)uVar5 >> 1;
        if (param_9 < 0) {
          param_9 = param_9 + (uint)((uVar5 & 1) != 0);
        }
      }
      else {
        uVar5 = (local_18 - local_30) + 1;
        param_9 = (int)uVar5 >> 1;
        if (param_9 < 0) {
          param_9 = param_9 + (uint)((uVar5 & 1) != 0);
        }
      }
    }
  }
  else if (param_8 == -1) {
    FUN_0041c968(local_1c - (param_9 + local_24),local_18 - (param_9 + local_20),&local_34);
    if (param_10 < 2) {
      param_8 = local_34 - local_2c >> 1;
      if (param_8 < 0) {
        param_8 = param_8 + (uint)((local_34 - local_2c & 1U) != 0);
      }
    }
    else {
      param_8 = local_30 - local_28 >> 1;
      if (param_8 < 0) {
        param_8 = param_8 + (uint)((local_30 - local_28 & 1U) != 0);
      }
    }
  }
  if (param_10 == 0) {
    *param_7 = param_9;
    local_14 = param_9 + local_24 + param_8;
  }
  else if (param_10 == 1) {
    local_24 = (local_1c - param_9) - local_24;
    *param_7 = local_24;
    local_14 = (local_24 - param_8) - local_2c;
  }
  else if (param_10 == 2) {
    param_7[1] = param_9;
    local_10 = param_9 + local_20 + param_8;
  }
  else if (param_10 == 3) {
    local_20 = (local_18 - param_9) - local_20;
    param_7[1] = local_20;
    local_10 = (local_20 - param_8) - local_28;
  }
  *param_7 = *param_7 + *param_3 + *param_12;
  param_7[1] = param_7[1] + param_3[1] + param_12[1];
  FUN_00456c14();
  cVar1 = FUN_00456cf4();
  if (cVar1 == '\0') {
    OffsetRect(param_6,*param_3 + local_14 + *param_12,param_3[1] + local_10 + param_12[1]);
  }
  else {
    OffsetRect(param_6,*param_3 + local_14,param_3[1] + local_10);
  }
  return;
}

