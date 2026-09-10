// Address: 0058a198
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm18_list1DblClick(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar5;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_0058a275;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x11c))();
  if (0 < iVar3) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x138))();
    if (-1 < iVar3) {
      *(undefined4 *)PTR_DAT_0066b5ec = 1;
      puVar5 = &local_c;
      piVar1 = *(int **)(param_1 + 0x2fc);
      uVar4 = (**(code **)(*piVar1 + 0x138))();
      (**(code **)(*piVar1 + 0x100))(piVar1,8,uVar4,puVar5);
      FUN_00404b6c(&local_8,local_c);
      iVar3 = FUN_00409ff8(local_8);
      if (-1 < iVar3) {
        iVar3 = FUN_00657604();
        if (-1 < iVar3) {
          *(int *)PTR_DAT_0066b27c = iVar3;
          FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00570e7c,PTR_DAT_0066b2f0);
          (**(code **)(**(int **)PTR_DAT_0066b2f0 + 0xec))();
        }
      }
    }
  }
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0058a27c;
  puStack_1c = (undefined1 *)0x58a26c;
  FUN_00404ff0(&local_c,uStack_20,puVar2);
  puStack_1c = (undefined1 *)0x58a274;
  FUN_004048d4(&local_8);
  return;
}

