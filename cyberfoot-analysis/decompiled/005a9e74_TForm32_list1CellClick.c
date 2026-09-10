// Address: 005a9e74
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm32_list1CellClick(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 *puStack_40;
  undefined4 *puVar3;
  int iStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  uVar2 = 1;
  puStack_30 = &LAB_005a9fe1;
  iStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_34;
  puVar3 = &local_8;
  (**(code **)(**(int **)(param_1 + 0x340) + 0x100))(*(int **)(param_1 + 0x340),1,param_4);
  FUN_00405378(local_8,&DAT_005a9ff8);
  if ((bool)uVar2) {
    (**(code **)(**(int **)(param_1 + 0x340) + 0x194))
              (*(int **)(param_1 + 0x340),1,param_4,&DAT_005aa000);
    puStack_40 = &local_10;
    (**(code **)(**(int **)(param_1 + 0x340) + 0x100))(*(int **)(param_1 + 0x340),3,param_4);
    FUN_00404b6c(&local_c,local_10);
    iVar1 = FUN_00409ff8(local_c);
    *(undefined1 *)(*(int *)PTR_DAT_0066aca0 + 0x290 + iVar1 * 0x294) = 1;
  }
  else {
    puStack_40 = (undefined4 *)0x5a9f3b;
    (**(code **)(**(int **)(param_1 + 0x340) + 0x100))
              (*(int **)(param_1 + 0x340),1,param_4,&local_14);
    FUN_00405378(local_14,&DAT_005aa000);
    if ((bool)uVar2) {
      (**(code **)(**(int **)(param_1 + 0x340) + 0x194))
                (*(int **)(param_1 + 0x340),1,param_4,&DAT_005a9ff8);
      (**(code **)(**(int **)(param_1 + 0x340) + 0x100))
                (*(int **)(param_1 + 0x340),3,param_4,&local_1c);
      FUN_00404b6c(&local_18,local_1c);
      iVar1 = FUN_00409ff8(local_18);
      *(undefined1 *)(*(int *)PTR_DAT_0066aca0 + 0x290 + iVar1 * 0x294) = 0;
    }
  }
  *in_FS_OFFSET = (int)puStack_40;
  FUN_00404ff0(&local_1c,puStack_40,puVar3,&LAB_005a9fe8);
  FUN_004048d4(&local_18);
  FUN_00405008(&local_14,2);
  FUN_004048d4(&local_c);
  FUN_00404ff0(&local_8);
  return;
}

