// Address: 0050e208
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050e208(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  int aiStackY_17fc [1515];
  int *piVar8;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 local_28 [8];
  int local_20;
  int aiStack_1c [4];
  undefined1 local_9;
  undefined4 local_8;
  
  bVar7 = 0;
  puStack_38 = &stack0xfffffffc;
  aiStack_1c[3] = 0;
  puStack_3c = &LAB_0050e376;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  piVar8 = *(int **)(*(int *)(param_4 + -4) + 0x4d4);
  local_8 = param_2;
  iVar3 = (**(code **)(*piVar8 + 0x30))(piVar8,param_1);
  piVar1 = *(int **)(iVar3 + 0x48);
  piVar1[8] = *(int *)(*(int *)(param_4 + -4) + 0x208);
  iVar3 = (**(code **)(**(int **)(param_4 + -4) + 0x128))(*(int **)(param_4 + -4),local_8);
  piVar1[0x15] = iVar3;
  uVar6 = *(undefined4 *)(*(int *)(param_4 + -4) + 0x49c);
  piVar8 = &local_20;
  piVar2 = *(int **)(*(int *)(param_4 + -4) + 0x4d4);
  iVar3 = *piVar2;
  iVar3 = (**(code **)(iVar3 + 0x30))(piVar2,param_1,iVar3,piVar8,uVar6);
  iVar3 = *(int *)(iVar3 + 0xb0);
  iVar4 = FUN_0050f404(*(undefined4 *)(param_4 + -4),0);
  iVar5 = FUN_0050f404(*(undefined4 *)(param_4 + -4),2);
  FUN_0040709c(0,0,(iVar3 + iVar4) - iVar5,piVar8,uVar6);
  piVar8 = piVar1 + (uint)bVar7 * -2 + 10;
  piVar1[9] = local_20;
  *piVar8 = aiStack_1c[(uint)bVar7 * -2];
  piVar8[(uint)bVar7 * -2 + 1] = aiStack_1c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  (piVar8 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
       (aiStack_1c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  piVar8 = *(int **)(*(int *)(param_4 + -4) + 0x4d4);
  iVar3 = (**(code **)(*piVar8 + 0x30))(piVar8,param_1);
  piVar8 = *(int **)(*(int *)(*(int *)(param_4 + -4) + 0x208) + 0xc);
  (**(code **)(*piVar8 + 8))(piVar8,*(undefined4 *)(iVar3 + 0x58));
  local_9 = FUN_0050f22c(*(undefined4 *)(param_4 + -4),param_1,local_8);
  (**(code **)(**(int **)(param_4 + -4) + 0x108))
            (*(int **)(param_4 + -4),param_1,local_8,aiStack_1c + 3);
  piVar8 = aiStack_1c + 3;
  FUN_00403c80(*(undefined4 *)(param_4 + -4),param_1,local_8);
  FUN_0040502c(piVar1 + 7,aiStack_1c[3]);
  uVar6 = CONCAT31((int3)((uint)aiStack_1c[3] >> 8),local_9);
  (**(code **)(**(int **)(param_4 + -4) + 0x14c))
            (*(int **)(param_4 + -4),param_1,local_8,uVar6,aiStack_1c[3]);
  (**(code **)(*piVar1 + 0x24))(piVar1,local_28);
  *in_FS_OFFSET = uVar6;
  FUN_00404ff0(aiStack_1c + 3,uVar6,piVar8,&LAB_0050e37d);
  return;
}

