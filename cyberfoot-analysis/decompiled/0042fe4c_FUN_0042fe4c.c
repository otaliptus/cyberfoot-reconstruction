// Address: 0042fe4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042fe4c(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined4 local_60 [21];
  int local_c;
  undefined4 local_8;
  
  puVar2 = local_60;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  puStack_70 = (undefined1 *)0x42fe71;
  FUN_0043051c(param_1);
  local_8 = 0;
  local_c = 0;
  puStack_74 = &LAB_0042fedb;
  uStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_78;
  puStack_70 = &stack0xfffffffc;
  iVar1 = param_3;
  if (param_3 != DAT_0066c894) {
    puStack_70 = &stack0xfffffffc;
    iVar1 = FUN_0042fa48(param_3);
  }
  local_c = iVar1;
  local_8 = FUN_0042f3e4(param_2,param_3,local_c,*(undefined4 *)(param_1 + 0x2c),local_60);
  uVar3 = 0;
  FUN_004307ec(param_1,local_8,local_c,0,
               CONCAT31((int3)((uint)*(int *)(param_1 + 0x28) >> 8),
                        *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x70)),local_60);
  *in_FS_OFFSET = uVar3;
  return;
}

