// Address: 0056a720
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_Image10Click(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 extraout_var;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0056a7ca;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (DAT_006d1f04 == '\0') {
    iVar3 = 0x19;
    FUN_0040496c(&local_8,"Limit: 25 players");
  }
  else {
    iVar3 = 0xf;
    puStack_14 = &stack0xfffffffc;
    FUN_0040496c(&local_8,"Limit: 15 youth players");
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
  if (iVar2 < iVar3) {
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_0056207c,PTR_DAT_0066b4d8);
    (**(code **)(**(int **)PTR_DAT_0066b4d8 + 0xec))();
  }
  else {
    FUN_00437ef0(local_8,1,CONCAT22(extraout_var,DAT_0056a814),0);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0056a7d1;
  puStack_18 = (undefined1 *)0x56a7c9;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

