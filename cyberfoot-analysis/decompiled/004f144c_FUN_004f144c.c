// Address: 004f144c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f144c(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  puStack_24 = &LAB_004f15ed;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_004f00b4(param_1);
  iVar2 = FUN_00403c34(param_1[0x9c],PTR_PTR_004e9bc4);
  (**(code **)(**(int **)(iVar2 + 0x68) + 8))(*(int **)(iVar2 + 0x68),param_1[0x1a]);
  FUN_00404b6c(&local_10,param_1[0xa9]);
  FUN_00466238(*(undefined4 *)(iVar2 + 0x280),local_10);
  (**(code **)(*param_1 + 0xec))();
  if (in_ST0 == (float10)_DAT_004f15fc) {
    FUN_004bc42c();
    *(double *)(iVar2 + 0x298) = (double)in_ST1;
  }
  else {
    (**(code **)(*param_1 + 0xec))();
    *(double *)(iVar2 + 0x298) = (double)in_ST1;
  }
  FUN_0040c388(&local_6,&local_8,&local_a,*(undefined4 *)(iVar2 + 0x298),
               *(undefined4 *)(iVar2 + 0x29c));
  FUN_004ec024(iVar2,param_1[0xa6]);
  FUN_004eb51c(iVar2,CONCAT22(extraout_var,local_6));
  FUN_004eb4e0(iVar2,CONCAT22(extraout_var_00,local_8));
  FUN_004eb420(iVar2,CONCAT22(extraout_var_01,local_a));
  *(undefined1 *)(iVar2 + 0x2a0) = *(undefined1 *)((int)param_1 + 0x2a9);
  FUN_00404b6c(&local_14,param_1[0xab]);
  FUN_00466238(*(undefined4 *)(iVar2 + 0x2a4),local_14);
  FUN_004659e8(iVar2,0xa3);
  FUN_004659c4(iVar2,0x97);
  FUN_004ebf54(iVar2,param_1[0xa8]);
  FUN_00466128(*(undefined4 *)(iVar2 + 0x280),(char)param_1[0xaa]);
  if (*(char *)(*(int *)(iVar2 + 0x280) + 0x57) == '\0') {
    uVar3 = FUN_00465c0c(iVar2);
    iVar5 = (int)uVar3 >> 1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((uVar3 & 1) != 0);
    }
    uVar3 = *(uint *)(*(int *)(iVar2 + 0x2a4) + 0x48);
    iVar4 = (int)uVar3 >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((uVar3 & 1) != 0);
    }
    FUN_00465978(*(undefined4 *)(iVar2 + 0x2a4),iVar5 - iVar4);
  }
  else {
    FUN_00465978(*(undefined4 *)(iVar2 + 0x2a4),0x14);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004f15f4;
  puStack_24 = (undefined1 *)0x4f15ec;
  FUN_004048f8(&local_14,2,puVar1);
  return;
}

