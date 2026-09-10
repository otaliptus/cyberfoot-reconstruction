// Address: 00500970
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00500970(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_3c;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  local_30 = iVar3 + -3;
  iVar4 = *(int *)(param_1 + 8);
  local_3c = uVar1;
  uStack_38 = uVar5;
  iStack_34 = iVar2;
  FUN_0042ab6c(*(undefined4 *)(iVar4 + 0x14),0xff00000f);
  FUN_0042af8c(iVar4,&local_3c);
  FUN_0042a88c(*(undefined4 *)(iVar4 + 0x10),0xff000010);
  FUN_0041c968(iVar2 + -1,uVar5,&local_1c);
  local_2c = local_1c;
  local_28 = local_18;
  FUN_0041c968(iVar2 + -1,iVar3 + -1,&local_14);
  local_24 = local_14;
  local_20 = local_10;
  FUN_0042b120(iVar4,&local_2c,1);
  uVar5 = FUN_004e6544(0xff000010,0xff00000f,0x32);
  FUN_0042a88c(*(undefined4 *)(iVar4 + 0x10),uVar5);
  FUN_0041c968(uVar1,iVar3 + -3,&local_1c);
  local_2c = local_1c;
  local_28 = local_18;
  FUN_0041c968(iVar2,iVar3 + -3,&local_14);
  local_24 = local_14;
  local_20 = local_10;
  FUN_0042b120(iVar4,&local_2c,1);
  uVar5 = FUN_004e6544(0xff000010,0xff00000f,100);
  FUN_0042a88c(*(undefined4 *)(iVar4 + 0x10),uVar5);
  FUN_0041c968(uVar1,iVar3 + -2,&local_1c);
  local_2c = local_1c;
  local_28 = local_18;
  FUN_0041c968(iVar2,iVar3 + -2,&local_14);
  local_24 = local_14;
  local_20 = local_10;
  FUN_0042b120(iVar4,&local_2c,1);
  uVar5 = FUN_004e6544(0xff000010,0xff00000f,0x96);
  FUN_0042a88c(*(undefined4 *)(iVar4 + 0x10),uVar5);
  FUN_0041c968(uVar1,iVar3 + -1,&local_1c);
  local_2c = local_1c;
  local_28 = local_18;
  FUN_0041c968(iVar2,iVar3 + -1,&local_14);
  local_24 = local_14;
  local_20 = local_10;
  FUN_0042b120(iVar4,&local_2c,1);
  return;
}

