// Address: 0059acc0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm14_bt2Click(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_0059adc9;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (*(int *)(*(int *)PTR_DAT_0066af70 + 100 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) <
      *(int *)PTR_DAT_0066b610) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x318) + 0x134))();
    if (iVar3 == 0) {
      (**(code **)(**(int **)(param_1 + 0x3d0) + 100))(*(int **)(param_1 + 0x3d0),0);
    }
    else {
      cVar2 = FUN_00651f8c();
      if (cVar2 == '\0') {
        FUN_00642c50(0x30f,&local_8);
        FUN_004e1414(*(undefined4 *)(param_1 + 0x390),local_8);
        FUN_00466128(*(undefined4 *)(param_1 + 0x390),1);
      }
      else {
        FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_0058d518,PTR_DAT_0066b4f0);
        (**(code **)(**(int **)PTR_DAT_0066b4f0 + 0xec))();
        if (*(int *)PTR_DAT_0066b610 <=
            *(int *)(*(int *)PTR_DAT_0066af70 + 100 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)) {
          (**(code **)(**(int **)(param_1 + 0x3d0) + 100))(*(int **)(param_1 + 0x3d0),0);
        }
      }
    }
  }
  else {
    puStack_10 = &stack0xfffffffc;
    (**(code **)(**(int **)(param_1 + 0x3d0) + 100))(*(int **)(param_1 + 0x3d0),0);
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0059add0;
  puStack_14 = (undefined1 *)0x59adc8;
  FUN_00404ff0(&local_8,uStack_18,puVar1);
  return;
}

