// Address: 005be8cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005be8cc(int param_1,undefined4 param_2,undefined2 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 local_24 [32];
  
  puStack_34 = (undefined1 *)0x5be8e9;
  FUN_00405628(local_24,PTR_DAT_0041ad38);
  puStack_38 = &LAB_005be94e;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  FUN_005bdf60(param_1);
  *param_3 = 0;
  uVar8 = 0;
  puVar7 = local_24;
  puVar6 = &DAT_0066a154;
  uVar5 = 2;
  uVar4 = 0;
  piVar1 = *(int **)(param_1 + 0x224);
  puVar3 = PTR_DAT_0066ad5c;
  iVar2 = (**(code **)(*piVar1 + 0x18))();
  if (iVar2 != 0) {
    FUN_004ad394(iVar2,local_24);
  }
  *in_FS_OFFSET = piVar1;
  FUN_004056f8(local_24,PTR_DAT_0041ad38,puVar3,&LAB_005be955,uVar4,uVar5,puVar6,param_3,puVar7,
               uVar8);
  return;
}

