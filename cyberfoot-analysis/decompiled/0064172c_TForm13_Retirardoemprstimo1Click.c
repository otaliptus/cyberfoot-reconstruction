// Address: 0064172c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_Retirardoemprstimo1Click(int param_1)

{
  int *piVar1;
  undefined1 **ppuVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_FS_OFFSET;
  undefined4 local_2c;
  undefined1 **ppuStack_28;
  undefined4 *puStack_24;
  int iStack_20;
  undefined1 *local_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  iVar4 = 5;
  do {
    local_8 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_1c = &LAB_006417e1;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  puStack_24 = &local_c;
  piVar1 = *(int **)(param_1 + 0x334);
  ppuStack_28 = (undefined1 **)0x641761;
  uVar3 = (**(code **)(*piVar1 + 0x138))();
  ppuStack_28 = (undefined1 **)0x64176d;
  FUN_00416244(&local_1c,uVar3,0xfc);
  ppuStack_28 = &local_1c;
  local_2c = 0x64177e;
  FUN_00416478(&local_2c,&DAT_006417f8);
  ppuVar2 = ppuStack_28;
  ppuStack_28 = (undefined1 **)0x641789;
  FUN_0050e448(piVar1,&local_2c,ppuVar2);
  ppuStack_28 = (undefined1 **)0x641794;
  FUN_00404b6c(&local_8,local_c);
  ppuStack_28 = (undefined1 **)0x64179c;
  iVar4 = FUN_00409ff8(local_8);
  *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar4 * 0x130) = 0;
  *in_FS_OFFSET = (int)puStack_24;
  local_1c = &LAB_006417e8;
  iStack_20 = 0x6417d0;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  iStack_20 = 0x6417d8;
  FUN_00404ff0(&local_c);
  iStack_20 = 0x6417e0;
  FUN_004048d4(&local_8);
  return;
}

