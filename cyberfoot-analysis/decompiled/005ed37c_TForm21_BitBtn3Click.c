// Address: 005ed37c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm21_BitBtn3Click(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_005ed40c;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar3 = (**(code **)(**(int **)(param_1 + 800) + 0x134))();
  if (iVar3 != 0) {
    iVar3 = FUN_00437ef0("Delete file?",3,CONCAT22(extraout_var,DAT_005ed418),0);
    if (iVar3 == 6) {
      FUN_00404bf0(&local_8,&DAT_005ed43c,*(undefined4 *)(param_1 + 0x334));
      FUN_0040a564(local_8);
      piVar1 = *(int **)(param_1 + 800);
      uVar4 = (**(code **)(*piVar1 + 0x138))();
      (**(code **)(*piVar1 + 0x1e4))(piVar1,uVar4);
    }
  }
  puVar2 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005ed413;
  puStack_18 = (undefined1 *)0x5ed40b;
  FUN_004048d4(&local_8,uStack_1c,puVar2);
  return;
}

