// Address: 004fefbc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004fefbc(int param_1,int param_2,LONG *param_3)

{
  int iVar1;
  char cVar2;
  LONG local_4c;
  int local_48;
  int local_44;
  int local_40;
  tagRECT local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_4c = *param_3;
  local_48 = param_3[1];
  local_44 = param_3[2];
  local_40 = param_3[3];
  local_3c.left = local_4c;
  local_3c.top = local_48;
  local_3c.right = local_44;
  local_3c.bottom = local_40;
  InflateRect(&local_3c,-1,-1);
  iVar1 = *(int *)(param_1 + 8);
  FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(*(int *)(param_2 + 0x60) + 8));
  FUN_0042af8c(iVar1,&local_3c);
  cVar2 = FUN_0050a2e8(param_2);
  if (cVar2 == '\0') {
    FUN_0043a3e0(*(undefined4 *)(param_1 + 8),&local_4c,0xff000014,1,0xff000010);
  }
  else {
    FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0xff000014);
    FUN_0041c968(local_4c,local_48,&local_1c);
    local_2c = local_1c;
    local_28 = local_18;
    FUN_0041c968(local_44,local_48,&local_14);
    local_24 = local_14;
    local_20 = local_10;
    FUN_0042b120(iVar1,&local_2c,1);
    cVar2 = FUN_0050a2e8(param_2);
    if (cVar2 == '\x01') {
      FUN_0041c968(local_4c,local_48 + 1,&local_1c);
      local_2c = local_1c;
      local_28 = local_18;
      FUN_0041c968(local_4c,local_40 + -1,&local_14);
      local_24 = local_14;
      local_20 = local_10;
      FUN_0042b120(iVar1,&local_2c,1);
    }
    else {
      FUN_0041c968(local_4c,local_48 + 2,&local_1c);
      local_2c = local_1c;
      local_28 = local_18;
      FUN_0041c968(local_4c,local_40 + -2,&local_14);
      local_24 = local_14;
      local_20 = local_10;
      FUN_0042b120(iVar1,&local_2c,1);
      FUN_0042b53c(iVar1,local_4c,local_48 + 1,*(undefined4 *)(*(int *)(param_2 + 0x60) + 8));
      FUN_0042b53c(iVar1,local_4c,local_40 + -2,*(undefined4 *)(*(int *)(param_2 + 0x60) + 8));
    }
    FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0xff000010);
    FUN_0041c968(local_4c,local_40 + -1,&local_1c);
    local_2c = local_1c;
    local_28 = local_18;
    FUN_0041c968(local_44,local_40 + -1,&local_14);
    local_24 = local_14;
    local_20 = local_10;
    FUN_0042b120(iVar1,&local_2c,1);
    cVar2 = FUN_0050a2e8(param_2);
    if (cVar2 == '\x03') {
      FUN_0041c968(local_44 + -1,local_48,&local_1c);
      local_2c = local_1c;
      local_28 = local_18;
      FUN_0041c968(local_44 + -1,local_40 + -1,&local_14);
      local_24 = local_14;
      local_20 = local_10;
      FUN_0042b120(iVar1,&local_2c,1);
    }
    else {
      FUN_0041c968(local_44 + -1,local_48 + 2,&local_1c);
      local_2c = local_1c;
      local_28 = local_18;
      FUN_0041c968(local_44 + -1,local_40 + -2,&local_14);
      local_24 = local_14;
      local_20 = local_10;
      FUN_0042b120(iVar1,&local_2c,1);
      FUN_0042b53c(iVar1,local_44 + -1,local_48 + 1,*(undefined4 *)(*(int *)(param_2 + 0x60) + 8));
      FUN_0042b53c(iVar1,local_44 + -1,local_40 + -2,*(undefined4 *)(*(int *)(param_2 + 0x60) + 8));
    }
  }
  return;
}

