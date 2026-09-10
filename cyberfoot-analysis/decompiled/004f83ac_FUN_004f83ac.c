// Address: 004f83ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f83ac(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  puStack_30 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_004f849f;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_34 = &LAB_004f845c;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puVar4 = &stack0xfffffffc;
  puVar1 = &stack0xfffffffc;
  local_8 = param_3;
  if (-1 < param_3) {
    iVar2 = (**(code **)(*param_1 + 0x11c))();
    puVar4 = puStack_30;
    puVar1 = puStack_24;
    if ((local_8 <= iVar2 + -1) && (-1 < param_2)) {
      iVar2 = FUN_0050ae9c(param_1[0x135]);
      puVar4 = puStack_30;
      puVar1 = puStack_24;
      if (param_2 <= iVar2 + -1) goto LAB_004f8452;
    }
  }
  puStack_24 = puVar1;
  puStack_30 = puVar4;
  pcVar8 = "Cell out of bounds (";
  FUN_00409dd8(param_2,&local_10);
  puVar6 = &DAT_004f84d8;
  uVar7 = local_10;
  FUN_00409dd8(local_8,&local_14);
  puVar4 = &LAB_004f84e4;
  uVar5 = local_14;
  FUN_00404c64(&local_c,5);
  FUN_0040e370(PTR_DAT_00408738,1,local_c,puVar4,uVar5,puVar6,uVar7,pcVar8);
  FUN_00404250();
LAB_004f8452:
  *in_FS_OFFSET = uStack_38;
  puStack_30 = (undefined1 *)0x4f847c;
  piVar3 = (int *)(**(code **)(*param_1 + 0x23c))(param_1,param_2,local_8);
  puStack_30 = (undefined1 *)0x4f8484;
  (**(code **)(*piVar3 + 0x30))(piVar3,param_4);
  puVar4 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004f84a6;
  puStack_28 = (undefined1 *)0x4f849e;
  FUN_004048f8(&local_14,3,puVar4);
  return;
}

