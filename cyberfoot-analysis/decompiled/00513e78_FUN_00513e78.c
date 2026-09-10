// Address: 00513e78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void FUN_00513e78(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  int *apiStackY_1820 [1517];
  int *piVar4;
  undefined4 uStack_60;
  int *piStack_5c;
  undefined4 uStack_58;
  int *piStack_54;
  int local_50;
  int local_4c;
  undefined1 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 auStack_3c [2];
  int iStack_34;
  int aiStack_30 [3];
  int aiStack_24 [5];
  char cVar5;
  
  bVar3 = 0;
  local_50 = param_1[0x1c];
  if ((*(byte *)((int)param_1 + 0x271) & 2) != 0) {
    piStack_54 = (int *)0x513ea1;
    iVar2 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
    if (*(char *)(iVar2 + 0x99) != '\0') {
      piStack_54 = (int *)0xa;
      uStack_58 = (int **)0x513ebc;
      local_50 = FUN_004e53d0(PTR_DAT_004e5160,0,local_50);
    }
  }
  if (((char)param_1[0xa9] == '\x02') || ((char)param_1[0xa9] == '\x01')) {
    local_4c = local_50;
  }
  else {
    local_4c = param_1[0xa8];
  }
  uStack_48 = DAT_00514014;
  piStack_54 = &iStack_40;
  uStack_58 = (int **)0x513efc;
  (**(code **)(*param_1 + 0x1cc))(param_1,param_2,param_3);
  uStack_58 = (int **)param_2;
  iStack_34 = iStack_44;
  aiStack_30[(uint)bVar3 * 0xfffffffe] = (&iStack_40)[(uint)bVar3 * -2];
  aiStack_30[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       auStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2];
  (aiStack_30 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
       (auStack_3c + (uint)bVar3 * -2 + (uint)bVar3 * -2)[(uint)bVar3 * -2 + 1];
  uVar1 = uStack_58;
  uStack_58 = (int **)0x513f17;
  iVar2 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],uVar1);
  if (param_1[0xa4] <= *(int *)(iVar2 + 0x88)) {
    uStack_58 = (int **)0x513f30;
    FUN_0050f688(param_1,aiStack_24);
    if (iStack_34 < aiStack_24[0]) {
      uStack_58 = (int **)0x513f45;
      FUN_0050f688(param_1,aiStack_24);
      iStack_34 = aiStack_24[0];
    }
  }
  uStack_58 = (int **)0x513f58;
  FUN_00511048(param_1,&iStack_34);
  piStack_5c = &local_50;
  uStack_60 = CONCAT31((int3)((uint)piStack_5c >> 8),(undefined1)local_4c);
  uStack_58 = &piStack_54;
  FUN_00403c80(param_1,uVar1,param_3);
  if ((*(byte *)(param_1 + 0x124) & 0x20) != 0) {
    FUN_00510d0c(param_1,uVar1,param_3,piStack_5c,&local_50);
  }
  FUN_00511d38(param_1,&local_50);
  piStack_54 = (int *)param_1[0x82];
  uStack_58._0_2_ = CONCAT11(1,(undefined1)uStack_58);
  piVar4 = &local_50;
  iVar2 = (int)&uStack_58 + 1;
  FUN_00403c80(param_1,uVar1,param_3,iVar2,CONCAT31((int3)((uint)piVar4 >> 8),(undefined1)uStack_58)
              );
  cVar5 = (char)((uint)piVar4 >> 8);
  FUN_0042ab6c(*(undefined4 *)(param_1[0x82] + 0x14),iVar2);
  if (cVar5 != '\0') {
    FUN_0042af8c(uStack_60,&stack0xffffffa4);
  }
  (**(code **)(*param_1 + 0x44))(param_1,auStack_3c);
  FUN_004e55c0(PTR_DAT_004e5160,param_1[0x82],auStack_3c);
  return;
}

