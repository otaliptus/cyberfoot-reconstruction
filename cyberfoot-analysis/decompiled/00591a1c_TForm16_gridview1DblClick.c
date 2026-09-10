// Address: 00591a1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm16_gridview1DblClick(int param_1)

{
  int *piVar1;
  undefined1 **ppuVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined1 **ppuStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
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
  local_1c = &LAB_00591b23;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined4 *)0x591a4b;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x308) + 0x11c))();
  if (iVar4 != 0) {
    puStack_24 = (undefined4 *)0x591a61;
    iVar4 = (**(code **)(**(int **)(param_1 + 0x308) + 0x138))();
    if (-1 < iVar4) {
      *(undefined4 *)PTR_DAT_0066b5ec = 1;
      puStack_24 = &local_c;
      piVar1 = *(int **)(param_1 + 0x308);
      ppuStack_28 = (undefined1 **)0x591a88;
      uVar3 = (**(code **)(*piVar1 + 0x138))();
      ppuStack_28 = (undefined1 **)0x591a94;
      FUN_00416244(&local_1c,uVar3,0xfc);
      ppuStack_28 = &local_1c;
      local_2c = 0x591aa5;
      FUN_00416478(&local_2c,&DAT_00591b38);
      ppuVar2 = ppuStack_28;
      ppuStack_28 = (undefined1 **)0x591ab0;
      FUN_0050e448(piVar1,&local_2c,ppuVar2);
      ppuStack_28 = (undefined1 **)0x591abb;
      FUN_00404b6c(&local_8,local_c);
      ppuStack_28 = (undefined1 **)0x591ac3;
      uVar3 = FUN_00409ff8(local_8);
      *(undefined4 *)PTR_DAT_0066b27c = uVar3;
      ppuStack_28 = (undefined1 **)0x591ae3;
      FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00570e7c,PTR_DAT_0066b2f0);
      ppuStack_28 = (undefined1 **)0x591af2;
      (**(code **)(**(int **)PTR_DAT_0066b2f0 + 0xec))();
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00591b2a;
  local_1c = (undefined1 *)0x591b12;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  local_1c = (undefined1 *)0x591b1a;
  FUN_00404ff0(&local_c);
  local_1c = (undefined1 *)0x591b22;
  FUN_004048d4(&local_8);
  return;
}

