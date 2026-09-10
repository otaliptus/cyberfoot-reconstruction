// Address: 005b9428
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm44_ck1Click(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_005b94d9;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  cVar2 = (**(code **)(**(int **)(param_1 + 0x304) + 200))();
  if (cVar2 == '\0') {
    (**(code **)(**(int **)(param_1 + 0x30c) + 100))(*(int **)(param_1 + 0x30c),1);
    (**(code **)(**(int **)(param_1 + 0x300) + 100))(*(int **)(param_1 + 0x300),0);
    FUN_00642c50(500,&local_c);
    FUN_0054dcb8(*(undefined4 *)(param_1 + 0x344),local_c);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x300) + 100))(*(int **)(param_1 + 0x300),1);
    (**(code **)(**(int **)(param_1 + 0x30c) + 100))(*(int **)(param_1 + 0x30c),0);
    FUN_00642c50(0x1f2,&local_8);
    FUN_0054dcb8(*(undefined4 *)(param_1 + 0x344),local_8);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005b94e0;
  puStack_18 = (undefined1 *)0x5b94d8;
  FUN_00405008(&local_c,2,puVar1);
  return;
}

