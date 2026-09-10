// Address: 00450030
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00450030(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_14;
  
  local_14 = param_3;
  if (*(int *)(param_1 + 0x24c) == 0) {
    uVar2 = FUN_00403a54(PTR_PTR_0041c090,1);
    *(undefined4 *)(param_1 + 0x24c) = uVar2;
  }
  else {
    FUN_00420958();
  }
  iVar3 = FUN_0044e8c4(*(undefined4 *)(param_1 + 0x22c));
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      FUN_0044e8f4(*(undefined4 *)(param_1 + 0x22c),iVar4);
      uVar1 = FUN_0044e25c();
      local_14 = CONCAT31(local_14._1_3_,uVar1);
      (**(code **)(**(int **)(param_1 + 0x24c) + 0x10))(*(int **)(param_1 + 0x24c),&local_14,1);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004208f4(*(undefined4 *)(param_1 + 0x24c));
  return;
}

