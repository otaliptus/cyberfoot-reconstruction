// Address: 004e6724
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e6724(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int in_stack_00000004;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  int local_24;
  int *local_20;
  int *local_1c;
  byte local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
  uVar1 = (**(code **)(**(int **)(in_stack_00000004 + 8) + 0x2c))();
  (**(code **)(*local_1c + 0x40))(local_1c,uVar1);
  uVar1 = (**(code **)(**(int **)(in_stack_00000004 + 8) + 0x20))();
  (**(code **)(*local_1c + 0x34))(local_1c,uVar1);
  (**(code **)(*local_1c + 8))(local_1c,*(undefined4 *)(in_stack_00000004 + 8));
  local_20 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
  uVar1 = (**(code **)(**(int **)(in_stack_00000004 + 8) + 0x2c))();
  (**(code **)(*local_20 + 0x40))(local_20,uVar1);
  uVar1 = (**(code **)(**(int **)(in_stack_00000004 + 8) + 0x20))();
  (**(code **)(*local_20 + 0x34))(local_20,uVar1);
  iVar2 = (**(code **)(**(int **)(in_stack_00000004 + 8) + 0x20))();
  iVar2 = iVar2 + *(int *)(in_stack_00000004 + -0xc);
  puVar8 = local_34;
  iVar3 = (**(code **)(**(int **)(in_stack_00000004 + 8) + 0x2c))();
  FUN_0040709c(*(undefined4 *)(in_stack_00000004 + -8),*(undefined4 *)(in_stack_00000004 + -0xc),
               iVar3 + *(int *)(in_stack_00000004 + -8),puVar8,iVar2);
  puVar8 = local_34;
  uVar1 = (**(code **)(**(int **)(in_stack_00000004 + 8) + 0x20))();
  puVar7 = local_44;
  uVar4 = (**(code **)(**(int **)(in_stack_00000004 + 8) + 0x2c))();
  FUN_0040709c(0,0,uVar4,puVar7,uVar1);
  puVar7 = local_44;
  uVar1 = FUN_00430280(local_20);
  FUN_0042addc(uVar1,puVar7,*(undefined4 *)(in_stack_00000004 + -4),puVar8);
  iVar2 = (**(code **)(**(int **)(in_stack_00000004 + 8) + 0x20))();
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    local_24 = iVar2;
    do {
      local_8 = FUN_004303f0(*(undefined4 *)(in_stack_00000004 + 8),iVar3);
      local_c = FUN_004303f0(local_1c,iVar3);
      local_10 = FUN_004303f0(local_20,iVar3);
      iVar2 = (**(code **)(**(int **)(in_stack_00000004 + 8) + 0x2c))();
      if (-1 < iVar2 + -1) {
        do {
          FUN_004e6b34(&local_8,&local_11,&local_12,&local_17,&local_13);
          FUN_004e6b68(&local_10,&local_14,&local_15,&local_16);
          uVar5 = (uint)local_17;
          uVar1 = FUN_004080a4(local_14,local_15,local_16,uVar5);
          uVar4 = FUN_004080a4(local_11,local_12,local_13);
          uVar1 = FUN_004e5b14(PTR_DAT_004e51c0,uVar4,uVar1,uVar5);
          uVar4 = FUN_004080c8(uVar1);
          uVar6 = FUN_004080c4(uVar1);
          uVar1 = FUN_004080c0(uVar1);
          FUN_004e6b10(&local_c,uVar1,uVar6,uVar4);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar3 = iVar3 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  FUN_0042ae64(*(undefined4 *)(in_stack_00000004 + -4),*(undefined4 *)(in_stack_00000004 + -8),
               *(undefined4 *)(in_stack_00000004 + -0xc),local_1c);
  FUN_00403a84(local_1c);
  FUN_00403a84(local_20);
  return;
}

