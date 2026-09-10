// Address: 004317e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004317e8(int param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined4 uStack_70;
  undefined4 *puStack_6c;
  undefined4 local_5c [5];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_8;
  
  bVar6 = 0;
  *param_2 = 2;
  puStack_6c = (undefined4 *)0x431802;
  local_8 = param_3;
  FUN_0043052c(param_1);
  iVar1 = *(int *)(param_1 + 0x28);
  puVar4 = (undefined4 *)(iVar1 + 0x18);
  puVar5 = local_5c;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  local_44 = 0;
  local_48 = 0;
  puStack_6c = local_5c;
  uStack_70 = *(undefined4 *)(param_1 + 0x2c);
  puStack_74 = (undefined1 *)0x431835;
  uVar2 = FUN_0042f3e4(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x10),
                       *(undefined4 *)(iVar1 + 0x10));
  *local_8 = uVar2;
  puStack_78 = &LAB_00431862;
  uStack_7c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_7c;
  puStack_74 = &stack0xfffffffc;
  uVar2 = FUN_0042fa48(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10));
  *param_4 = uVar2;
  *in_FS_OFFSET = uStack_7c;
  return;
}

