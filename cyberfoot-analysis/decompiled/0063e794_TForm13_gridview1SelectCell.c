// Address: 0063e794
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_gridview1SelectCell(int param_1)

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
  puStack_1c = &LAB_0063e810;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  piVar1 = *(int **)(param_1 + 0x334);
  uVar3 = (**(code **)(*piVar1 + 0x138))();
  (**(code **)(*piVar1 + 0x100))(piVar1,0,uVar3);
  FUN_00404b6c(&local_8,local_c);
  uVar3 = FUN_00409ff8(local_8);
  FUN_006376c0(param_1,uVar3);
  FUN_0063e2f0(param_1);
  puVar2 = puStack_1c;
  *in_FS_OFFSET = (int)&local_c;
  puStack_1c = &LAB_0063e817;
  iStack_20 = 0x63e807;
  FUN_00404ff0(&local_c,&local_c,puVar2);
  iStack_20 = 0x63e80f;
  FUN_004048d4(&local_8);
  return;
}

