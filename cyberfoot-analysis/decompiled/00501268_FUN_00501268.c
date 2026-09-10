// Address: 00501268
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00501268(int param_1,LONG *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  tagRECT local_24;
  LONG local_14;
  LONG local_10;
  int local_c;
  LONG local_8;
  
  local_24.left = *param_2;
  local_24.top = param_2[1];
  local_24.right = param_2[2];
  local_24.bottom = param_2[3];
  local_14 = local_24.left;
  local_10 = local_24.top;
  local_c = local_24.right;
  local_8 = local_24.bottom;
  InflateRect(&local_24,-1,0);
  iVar1 = *(int *)(param_1 + 8);
  FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0xffffff);
  FUN_0041c968(local_14,local_10,&local_3c);
  local_34 = local_3c;
  local_30 = local_38;
  FUN_0041c968(local_14,local_8,&local_44);
  local_2c = local_44;
  local_28 = local_40;
  FUN_0042b120(iVar1,&local_34,1);
  FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0xff00000f);
  FUN_0041c968(local_c + -1,local_10,&local_3c);
  local_34 = local_3c;
  local_30 = local_38;
  FUN_0041c968(local_c + -1,local_8,&local_44);
  local_2c = local_44;
  local_28 = local_40;
  FUN_0042b120(iVar1,&local_34,1);
  uVar2 = FUN_004080a4(0xf0,0xf0,0xf0);
  FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),uVar2);
  FUN_0042af8c(iVar1,&local_24);
  return;
}

