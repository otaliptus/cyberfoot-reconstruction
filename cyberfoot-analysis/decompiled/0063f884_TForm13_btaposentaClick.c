// Address: 0063f884
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_btaposentaClick(int param_1)

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
  local_1c = &LAB_0063f951;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  puStack_24 = &local_c;
  piVar1 = *(int **)(param_1 + 0x334);
  ppuStack_28 = (undefined1 **)0x63f8b9;
  uVar3 = (**(code **)(*piVar1 + 0x138))();
  ppuStack_28 = (undefined1 **)0x63f8c5;
  FUN_00416244(&local_1c,uVar3,0xfc);
  ppuStack_28 = &local_1c;
  local_2c = 0x63f8d6;
  FUN_00416478(&local_2c,&DAT_0063f968);
  ppuVar2 = ppuStack_28;
  ppuStack_28 = (undefined1 **)0x63f8e1;
  FUN_0050e448(piVar1,&local_2c,ppuVar2);
  ppuStack_28 = (undefined1 **)0x63f8ec;
  FUN_00404b6c(&local_8,local_c);
  ppuStack_28 = (undefined1 **)0x63f8f4;
  DAT_006d52dc = FUN_00409ff8(local_8);
  ppuStack_28 = (undefined1 **)0x63f911;
  FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005b9994,PTR_DAT_0066b18c);
  ppuStack_28 = (undefined1 **)0x63f920;
  (**(code **)(**(int **)PTR_DAT_0066b18c + 0xec))();
  *in_FS_OFFSET = (int)puStack_24;
  local_1c = &LAB_0063f958;
  iStack_20 = 0x63f940;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  iStack_20 = 0x63f948;
  FUN_00404ff0(&local_c);
  iStack_20 = 0x63f950;
  FUN_004048d4(&local_8);
  return;
}

