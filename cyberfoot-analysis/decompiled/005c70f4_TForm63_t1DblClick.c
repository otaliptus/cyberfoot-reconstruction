// Address: 005c70f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm63_t1DblClick(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_FS_OFFSET;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_005c71aa;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  piVar1 = *(int **)(param_1 + 0x2f8);
  uVar3 = (**(code **)(*piVar1 + 0x138))();
  (**(code **)(*piVar1 + 0x100))(piVar1,9,uVar3);
  FUN_00404b6c(&local_8,local_c);
  iVar4 = FUN_00409ff8(local_8);
  if (-1 < iVar4) {
    iVar4 = FUN_00657604();
    if (-1 < iVar4) {
      *(int *)PTR_DAT_0066b27c = iVar4;
      *(undefined4 *)PTR_DAT_0066b5ec = 1;
      FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00570e7c,PTR_DAT_0066b2f0);
      (**(code **)(**(int **)PTR_DAT_0066b2f0 + 0xec))();
    }
  }
  puVar2 = puStack_1c;
  *in_FS_OFFSET = (int)&local_c;
  puStack_1c = &LAB_005c71b1;
  iStack_20 = 0x5c71a1;
  FUN_00404ff0(&local_c,&local_c,puVar2);
  iStack_20 = 0x5c71a9;
  FUN_004048d4(&local_8);
  return;
}

