// Address: 0059dd94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm15_bt3Click(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_0059dee9;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x31c) + 0xcc))();
  if (-1 < iVar3) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x318) + 0xcc))();
    if (-1 < iVar3) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x31c) + 0xcc))();
      iVar4 = (**(code **)(**(int **)(param_1 + 0x318) + 0xcc))();
      if (iVar3 != iVar4) {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x31c) + 0xcc))();
        FUN_00405194(&local_8,*(int *)PTR_DAT_0066af70 + *(int *)(DAT_006d23f8 + iVar3 * 4) * 0x2f8)
        ;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_8);
        iVar3 = (**(code **)(**(int **)(param_1 + 0x318) + 0xcc))();
        FUN_00405194(&local_c,*(int *)PTR_DAT_0066af70 + *(int *)(DAT_006d23f8 + iVar3 * 4) * 0x2f8)
        ;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x300),local_c);
        FUN_004e1414(*(undefined4 *)(param_1 + 0x310),0);
        FUN_004e1414(*(undefined4 *)(param_1 + 0x314),0);
        (**(code **)(**(int **)(param_1 + 800) + 0x1dc))();
        iVar3 = (**(code **)(**(int **)(param_1 + 0x318) + 0xcc))();
        uVar1 = *(undefined4 *)(DAT_006d23f8 + iVar3 * 4);
        iVar3 = (**(code **)(**(int **)(param_1 + 0x31c) + 0xcc))();
        FUN_0059ca68(param_1,*(undefined4 *)(DAT_006d23f8 + iVar3 * 4),uVar1);
      }
    }
  }
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0059def0;
  puStack_1c = (undefined1 *)0x59dee8;
  FUN_00405008(&local_c,2,puVar2);
  return;
}

