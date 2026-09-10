// Address: 004fdc4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004fdc4c(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar4 = param_2[3];
  iVar5 = *(int *)(param_1 + 8);
  FUN_0042a88c(*(undefined4 *)(iVar5 + 0x10),param_3);
  FUN_0041c968(uVar1,iVar4 + -1,&local_1c);
  local_2c = local_1c;
  local_28 = local_18;
  FUN_0041c968(iVar3 + -1,iVar4 + -1,&local_14);
  local_24 = local_14;
  local_20 = local_10;
  FUN_0042b120(iVar5,&local_2c,1);
  FUN_0041c968(iVar3 + -1,uVar2,&local_1c);
  local_2c = local_1c;
  local_28 = local_18;
  FUN_0041c968(iVar3 + -1,iVar4 + 1,&local_14);
  local_24 = local_14;
  local_20 = local_10;
  FUN_0042b120(iVar5,&local_2c,1);
  return;
}

