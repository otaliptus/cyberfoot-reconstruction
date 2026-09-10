// Address: 0043e8c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void FUN_0043e8c8(int param_1,undefined4 param_2,int *param_3,uint param_4,LPRECT param_5,
                 int *param_6,int param_7,int param_8,byte param_9,undefined4 param_10,int *param_11
                 )

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  LPCSTR lpchText;
  HDC hdc;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  LONG aLStackY_1820 [1519];
  LPRECT lprc;
  LONG local_44;
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
  int local_8;
  
  bVar7 = 0;
  if ((param_4 & 2) == 2) {
    if (param_9 == 0) {
      param_9 = 1;
    }
    else if (param_9 == 1) {
      param_9 = 0;
    }
  }
  local_c = param_2;
  local_8 = param_1;
  FUN_0041c968(param_3[2] - *param_3,param_3[3] - param_3[1],&local_1c);
  if (*(int *)(local_8 + 4) == 0) {
    FUN_0041c968(0,0,&local_24);
  }
  else {
    uVar2 = (**(code **)(**(int **)(local_8 + 4) + 0x20))();
    iVar3 = (**(code **)(**(int **)(local_8 + 4) + 0x2c))();
    FUN_0041c968(iVar3 / (int)(uint)*(byte *)(local_8 + 0x20),uVar2,&local_24);
  }
  iVar3 = FUN_00404ba4(param_10);
  if (iVar3 < 1) {
    FUN_0041c990(0,0,0,&stack0xffffffbc,0);
    puVar5 = (undefined4 *)((int)param_5 + (uint)bVar7 * -8 + 4);
    param_5->left = local_44;
    puVar6 = puVar5 + (uint)bVar7 * -2 + 1;
    *puVar5 = *(undefined4 *)((int)&stack0xffffffc0 + (uint)bVar7 * 0xfffffffe * 4);
    *puVar6 = *(undefined4 *)(&stack0xffffffc4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    puVar6[(uint)bVar7 * -2 + 1] =
         *(undefined4 *)
          ((int)(&stack0xffffffc4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
          ((uint)bVar7 * -2 + 1) * 4);
    FUN_0041c968(0,0,&local_2c);
  }
  else {
    FUN_0041c990(0,0,param_3[2] - *param_3,&stack0xffffffbc,0);
    puVar5 = (undefined4 *)((int)param_5 + (uint)bVar7 * -8 + 4);
    param_5->left = local_44;
    puVar6 = puVar5 + (uint)bVar7 * -2 + 1;
    *puVar5 = *(undefined4 *)((int)&stack0xffffffc0 + (uint)bVar7 * 0xfffffffe * 4);
    *puVar6 = *(undefined4 *)(&stack0xffffffc4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    puVar6[(uint)bVar7 * -2 + 1] =
         *(undefined4 *)
          ((int)(&stack0xffffffc4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
          ((uint)bVar7 * -2 + 1) * 4);
    param_4 = param_4 | 0x400;
    lprc = param_5;
    iVar3 = FUN_00404ba4(param_10);
    lpchText = (LPCSTR)FUN_00404da4(param_10);
    hdc = (HDC)FUN_0042b5a8(local_c);
    DrawTextA(hdc,lpchText,iVar3,lprc,param_4);
    FUN_0041c968(param_5->right - param_5->left,param_5->bottom - param_5->top,&local_2c);
  }
  if (param_9 < 2) {
    uVar4 = (local_18 - local_20) + 1;
    iVar3 = (int)uVar4 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar4 & 1) != 0);
    }
    param_6[1] = iVar3;
    uVar4 = (local_18 - local_28) + 1;
    local_10 = (int)uVar4 >> 1;
    if (local_10 < 0) {
      local_10 = local_10 + (uint)((uVar4 & 1) != 0);
    }
  }
  else {
    uVar4 = (local_1c - local_24) + 1;
    iVar3 = (int)uVar4 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar4 & 1) != 0);
    }
    *param_6 = iVar3;
    uVar4 = (local_1c - local_2c) + 1;
    local_14 = (int)uVar4 >> 1;
    if (local_14 < 0) {
      local_14 = local_14 + (uint)((uVar4 & 1) != 0);
    }
  }
  if ((local_2c == 0) || (local_24 == 0)) {
    param_7 = 0;
  }
  if (param_8 == -1) {
    if (param_7 == -1) {
      FUN_0041c968(local_24 + local_2c,local_20 + local_28,&local_34);
      if (param_9 < 2) {
        local_34 = local_1c - local_34;
      }
      else {
        local_34 = local_18 - local_30;
      }
      param_8 = local_34 / 3;
      param_7 = param_8;
    }
    else {
      FUN_0041c968(local_24 + param_7 + local_2c,local_20 + param_7 + local_28,&local_34);
      if (param_9 < 2) {
        uVar4 = (local_1c - local_34) + 1;
        param_8 = (int)uVar4 >> 1;
        if (param_8 < 0) {
          param_8 = param_8 + (uint)((uVar4 & 1) != 0);
        }
      }
      else {
        uVar4 = (local_18 - local_30) + 1;
        param_8 = (int)uVar4 >> 1;
        if (param_8 < 0) {
          param_8 = param_8 + (uint)((uVar4 & 1) != 0);
        }
      }
    }
  }
  else if (param_7 == -1) {
    FUN_0041c968(local_1c - (param_8 + local_24),local_18 - (param_8 + local_20),&local_34);
    if (param_9 < 2) {
      param_7 = local_34 - local_2c >> 1;
      if (param_7 < 0) {
        param_7 = param_7 + (uint)((local_34 - local_2c & 1U) != 0);
      }
    }
    else {
      param_7 = local_30 - local_28 >> 1;
      if (param_7 < 0) {
        param_7 = param_7 + (uint)((local_30 - local_28 & 1U) != 0);
      }
    }
  }
  if (param_9 == 0) {
    *param_6 = param_8;
    local_14 = param_8 + local_24 + param_7;
  }
  else if (param_9 == 1) {
    local_24 = (local_1c - param_8) - local_24;
    *param_6 = local_24;
    local_14 = (local_24 - param_7) - local_2c;
  }
  else if (param_9 == 2) {
    param_6[1] = param_8;
    local_10 = param_8 + local_20 + param_7;
  }
  else if (param_9 == 3) {
    local_20 = (local_18 - param_8) - local_20;
    param_6[1] = local_20;
    local_10 = (local_20 - param_7) - local_28;
  }
  *param_6 = *param_6 + *param_3 + *param_11;
  param_6[1] = param_6[1] + param_3[1] + param_11[1];
  FUN_00456c14();
  cVar1 = FUN_00456cf4();
  if (cVar1 == '\0') {
    OffsetRect(param_5,*param_3 + local_14 + *param_11,param_3[1] + local_10 + param_11[1]);
  }
  else {
    OffsetRect(param_5,*param_3 + local_14,param_3[1] + local_10);
  }
  return;
}

