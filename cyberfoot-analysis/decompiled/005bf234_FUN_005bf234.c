// Address: 005bf234
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bf234(int param_1,undefined4 param_2,short *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined *puVar4;
  undefined4 uVar5;
  short **ppsVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined1 local_34 [32];
  short *local_14;
  undefined *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_44 = (undefined1 *)0x5bf251;
  FUN_00405628(local_34,PTR_DAT_0041ad38);
  puStack_48 = &LAB_005bf2db;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  FUN_005bdf60(param_1);
  local_10 = &DAT_0066a164;
  local_c = 1;
  local_8 = 1;
  if (*param_3 == 9) {
    uVar2 = 8;
  }
  else {
    uVar2 = 4;
  }
  uVar9 = 0;
  puVar8 = local_34;
  uVar7 = 0;
  ppsVar6 = &local_14;
  uVar5 = 0;
  piVar1 = *(int **)(param_1 + 0x224);
  puVar4 = PTR_DAT_0066ad5c;
  local_14 = param_3;
  iVar3 = (**(code **)(*piVar1 + 0x18))();
  if (iVar3 != 0) {
    FUN_004ad394(iVar3,local_34);
  }
  *in_FS_OFFSET = piVar1;
  FUN_004056f8(local_34,PTR_DAT_0041ad38,puVar4,&LAB_005bf2e2,uVar5,uVar2,ppsVar6,uVar7,puVar8,uVar9
              );
  return;
}

