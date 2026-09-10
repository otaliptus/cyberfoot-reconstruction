// Address: 0050108c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050108c(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  byte bVar4;
  int aiStackY_182c [1520];
  undefined4 uVar5;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  tagRECT local_50;
  int local_40;
  int local_3c [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  bVar4 = 0;
  local_60 = *param_3;
  local_5c = param_3[1];
  local_58 = param_3[2];
  local_54 = param_3[3];
  local_50.left = local_60;
  local_50.top = local_5c;
  local_50.right = local_58;
  local_50.bottom = local_54;
  InflateRect(&local_50,-1,0);
  iVar2 = *(int *)(param_1 + 8);
  FUN_0042a88c(*(undefined4 *)(iVar2 + 0x10),0xffffff);
  FUN_0041c968(local_60,local_5c,&local_20);
  local_3c[3] = local_20;
  local_2c = local_1c;
  FUN_0041c968(local_60,local_54,&local_18);
  local_28 = local_18;
  local_24 = local_14;
  FUN_0042b120(iVar2,local_3c + 3,1);
  FUN_0042a88c(*(undefined4 *)(iVar2 + 0x10),0xff00000f);
  FUN_0041c968(local_58 + -1,local_5c,&local_20);
  local_3c[3] = local_20;
  local_2c = local_1c;
  FUN_0041c968(local_58 + -1,local_54,&local_18);
  local_28 = local_18;
  local_24 = local_14;
  FUN_0042b120(iVar2,local_3c + 3,1);
  if (*(char *)(param_2 + 0x99) == '\0') {
    uVar1 = FUN_004080a4(0xf0,0xf0,0xf0);
    FUN_0042ab6c(*(undefined4 *)(iVar2 + 0x14),uVar1);
    FUN_0042af8c(iVar2,&local_50);
  }
  else {
    local_40 = local_50.left;
    piVar3 = (int *)((int)&local_50 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    local_3c[(uint)bVar4 * -2] = *(int *)((int)&local_50 + (uint)bVar4 * -8 + 4);
    local_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] = *piVar3;
    (local_3c + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
         piVar3[(uint)bVar4 * -2 + 1];
    uVar5 = 0xffffff;
    local_3c[2] = local_3c[0] + 6;
    uVar1 = FUN_004080a4(0xaf,0xdc,0xf0,0xffffff);
    FUN_004e697c(*(undefined4 *)(param_1 + 8),&local_40,uVar1,uVar5);
    local_50.top = local_3c[0] + 6;
    FUN_0042ab6c(*(undefined4 *)(iVar2 + 0x14),0xffffff);
    FUN_0042af8c(iVar2,&local_50);
    iVar2 = local_58 - local_60 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((local_58 - local_60 & 1U) != 0);
    }
    iVar2 = iVar2 + local_60 + -3;
    FUN_00500f2c(param_1,iVar2,0,
                 CONCAT31((int3)((uint)iVar2 >> 8),*(char *)(param_2 + 0x9a) == '\0'));
  }
  return;
}

