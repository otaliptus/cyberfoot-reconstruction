// Address: 006419f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_Image4Click(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int *in_FS_OFFSET;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_00641a96;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  *(undefined4 *)PTR_DAT_0066b7c0 = 1;
  piVar1 = *(int **)(param_1 + 0x334);
  uVar3 = (**(code **)(*piVar1 + 0x138))();
  (**(code **)(*piVar1 + 0x100))(piVar1,0,uVar3);
  FUN_00404b6c(&local_8,local_c);
  uVar3 = FUN_00409ff8(local_8);
  *(undefined4 *)PTR_DAT_0066b394 = uVar3;
  FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00590c9c,PTR_DAT_0066b158);
  (**(code **)(**(int **)PTR_DAT_0066b158 + 0xec))();
  puVar2 = puStack_1c;
  *in_FS_OFFSET = (int)&local_c;
  puStack_1c = &LAB_00641a9d;
  iStack_20 = 0x641a8d;
  FUN_00404ff0(&local_c,&local_c,puVar2);
  iStack_20 = 0x641a95;
  FUN_004048d4(&local_8);
  return;
}

