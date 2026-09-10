// Address: 004e5c88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e5c88(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int in_stack_00000004;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  local_c = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
  uVar2 = (**(code **)(**(int **)(in_stack_00000004 + 8) + 0x2c))();
  (**(code **)(*local_c + 0x40))(local_c,uVar2);
  uVar2 = (**(code **)(**(int **)(in_stack_00000004 + 8) + 0x20))();
  (**(code **)(*local_c + 0x34))(local_c,uVar2);
  FUN_00431290(local_c,6);
  iVar3 = (**(code **)(**(int **)(in_stack_00000004 + 8) + 0x20))();
  iVar3 = iVar3 + *(int *)(in_stack_00000004 + 0xc);
  puVar9 = local_24;
  iVar4 = (**(code **)(**(int **)(in_stack_00000004 + 8) + 0x2c))();
  FUN_0041c990(*(undefined4 *)(in_stack_00000004 + -8),*(undefined4 *)(in_stack_00000004 + 0xc),
               iVar4 + *(int *)(in_stack_00000004 + -8),puVar9,iVar3);
  puVar9 = local_24;
  uVar2 = (**(code **)(**(int **)(in_stack_00000004 + 8) + 0x20))();
  puVar8 = local_34;
  uVar5 = (**(code **)(**(int **)(in_stack_00000004 + 8) + 0x2c))();
  FUN_0041c990(0,0,uVar5,puVar8,uVar2);
  puVar8 = local_34;
  uVar2 = FUN_00430280(local_c);
  FUN_0042addc(uVar2,puVar8,*(undefined4 *)(in_stack_00000004 + -4),puVar9);
  iVar3 = (**(code **)(**(int **)(in_stack_00000004 + 8) + 0x20))();
  if (-1 < iVar3 + -1) {
    local_8 = 0;
    local_10 = iVar3;
    do {
      iVar3 = FUN_004303f0(local_c,local_8);
      iVar4 = FUN_004303f0(*(undefined4 *)(in_stack_00000004 + 8),local_8);
      iVar6 = (**(code **)(**(int **)(in_stack_00000004 + 8) + 0x2c))();
      if (-1 < iVar6 + -1) {
        iVar7 = 0;
        local_14 = iVar6;
        do {
          uVar1 = FUN_004e5c08(CONCAT31((int3)((uint)(iVar7 * 3) >> 8),
                                        *(undefined1 *)(iVar4 + 2 + iVar7 * 4)),
                               *(undefined1 *)(iVar3 + 2 + iVar7 * 3),
                               *(undefined1 *)(iVar4 + 3 + iVar7 * 4));
          *(undefined1 *)(iVar3 + 2 + iVar7 * 3) = uVar1;
          uVar1 = FUN_004e5c08(CONCAT31((int3)((uint)(iVar7 * 3) >> 8),
                                        *(undefined1 *)(iVar4 + 1 + iVar7 * 4)),
                               CONCAT31((int3)((uint)(iVar7 * 3) >> 8),
                                        *(undefined1 *)(iVar3 + 1 + iVar7 * 3)),
                               *(undefined1 *)(iVar4 + 3 + iVar7 * 4));
          *(undefined1 *)(iVar3 + 1 + iVar7 * 3) = uVar1;
          uVar1 = FUN_004e5c08(CONCAT31((int3)((uint)(iVar7 * 3) >> 8),
                                        *(undefined1 *)(iVar4 + iVar7 * 4)),
                               CONCAT31((int3)((uint)(iVar7 * 3) >> 8),
                                        *(undefined1 *)(iVar3 + iVar7 * 3)),
                               *(undefined1 *)(iVar4 + 3 + iVar7 * 4));
          *(undefined1 *)(iVar3 + iVar7 * 3) = uVar1;
          iVar7 = iVar7 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      local_8 = local_8 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  FUN_0042ae64(*(undefined4 *)(in_stack_00000004 + -4),*(undefined4 *)(in_stack_00000004 + -8),
               *(undefined4 *)(in_stack_00000004 + 0xc),local_c);
  FUN_00403a84(local_c);
  return;
}

