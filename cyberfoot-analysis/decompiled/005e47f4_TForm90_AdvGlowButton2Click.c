// Address: 005e47f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm90_AdvGlowButton2Click(int param_1)

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
  local_1c = &LAB_005e48e8;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined4 *)0x5e4823;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x134))();
  if (0 < iVar4) {
    puStack_24 = &local_c;
    piVar1 = *(int **)(param_1 + 0x2f8);
    ppuStack_28 = (undefined1 **)0x5e483f;
    uVar3 = (**(code **)(*piVar1 + 0x138))();
    ppuStack_28 = (undefined1 **)0x5e484b;
    FUN_00416244(&local_1c,uVar3,0xfc);
    ppuStack_28 = &local_1c;
    local_2c = 0x5e485c;
    FUN_00416478(&local_2c,&DAT_005e4900);
    ppuVar2 = ppuStack_28;
    ppuStack_28 = (undefined1 **)0x5e4867;
    FUN_0050e448(piVar1,&local_2c,ppuVar2);
    ppuStack_28 = (undefined1 **)0x5e4872;
    FUN_00404b6c(&local_8,local_c);
    ppuStack_28 = (undefined1 **)0x5e487a;
    iVar4 = FUN_00409ff8(local_8);
    *(undefined4 *)(*(int *)PTR_DAT_0066b540 + iVar4 * 0x9c) = 0xffffffff;
    *(undefined4 *)(*(int *)PTR_DAT_0066b540 + 4 + iVar4 * 0x9c) = 0xffffffff;
    piVar1 = *(int **)(param_1 + 0x2f8);
    ppuStack_28 = (undefined1 **)0x5e48ab;
    uVar3 = (**(code **)(*piVar1 + 0x138))();
    ppuStack_28 = (undefined1 **)0x5e48b7;
    (**(code **)(*piVar1 + 0x1e4))(piVar1,uVar3);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005e48ef;
  local_1c = (undefined1 *)0x5e48d7;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  local_1c = (undefined1 *)0x5e48df;
  FUN_00404ff0(&local_c);
  local_1c = (undefined1 *)0x5e48e7;
  FUN_004048d4(&local_8);
  return;
}

