// Address: 00641638
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_Disponibilizarparaemprstimo1Click(int param_1)

{
  int *piVar1;
  undefined1 **ppuVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 local_2c [4];
  undefined4 uStack_28;
  undefined1 **ppuStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  iVar5 = 5;
  do {
    local_8 = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_1c = &LAB_00641712;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  ppuStack_24 = (undefined1 **)0x641666;
  iVar5 = FUN_00650184(*(undefined4 *)(PTR_DAT_0066ac78 + 8));
  ppuStack_24 = (undefined1 **)0x641675;
  iVar3 = FUN_006501cc(*(undefined4 *)(PTR_DAT_0066ac78 + 8));
  if (iVar5 + iVar3 < 2) {
    ppuStack_24 = (undefined1 **)&local_c;
    piVar1 = *(int **)(param_1 + 0x334);
    uStack_28 = 0x641690;
    uVar4 = (**(code **)(*piVar1 + 0x138))();
    ppuStack_24 = (undefined1 **)0x64169c;
    FUN_00416244(&local_1c,uVar4,0xfc);
    ppuStack_24 = &local_1c;
    uStack_28 = 0x6416ad;
    FUN_00416478(local_2c,&DAT_00641728);
    ppuVar2 = ppuStack_24;
    ppuStack_24 = (undefined1 **)0x6416b8;
    FUN_0050e448(piVar1,local_2c,ppuVar2);
    ppuStack_24 = (undefined1 **)0x6416c3;
    FUN_00404b6c(&local_8,local_c);
    ppuStack_24 = (undefined1 **)0x6416cb;
    iVar5 = FUN_00409ff8(local_8);
    *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar5 * 0x130) = 1;
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00641719;
  local_1c = (undefined1 *)0x641701;
  FUN_00405744(local_2c,PTR_DAT_004010f8,2);
  local_1c = (undefined1 *)0x641709;
  FUN_00404ff0(&local_c);
  local_1c = (undefined1 *)0x641711;
  FUN_004048d4(&local_8);
  return;
}

