// Address: 00600370
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm53_bt1Click(int param_1)

{
  int *piVar1;
  undefined1 **ppuVar2;
  undefined4 uVar3;
  int iVar4;
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
  iVar4 = 5;
  do {
    local_8 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_1c = &LAB_00600453;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  ppuStack_24 = (undefined1 **)0x60039f;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x314) + 0x11c))();
  if (iVar4 == 0) {
    ppuStack_24 = (undefined1 **)0x6003ad;
    FUN_00483bc4(DAT_006d411c);
  }
  else {
    ppuStack_24 = (undefined1 **)0x6003bd;
    iVar4 = (**(code **)(**(int **)(param_1 + 0x314) + 0x134))();
    if (iVar4 != 0) {
      ppuStack_24 = (undefined1 **)&local_c;
      piVar1 = *(int **)(param_1 + 0x314);
      uStack_28 = 0x6003d5;
      uVar3 = (**(code **)(*piVar1 + 0x138))();
      ppuStack_24 = (undefined1 **)0x6003e1;
      FUN_00416244(&local_1c,uVar3,0xfc);
      ppuStack_24 = &local_1c;
      uStack_28 = 0x6003f2;
      FUN_00416478(local_2c,&LAB_00600468);
      ppuVar2 = ppuStack_24;
      ppuStack_24 = (undefined1 **)0x6003fd;
      FUN_0050e448(piVar1,local_2c,ppuVar2);
      ppuStack_24 = (undefined1 **)0x600408;
      FUN_00404b6c(&local_8,local_c);
      ppuStack_24 = (undefined1 **)0x600410;
      uVar3 = FUN_00409ff8(local_8);
      *(undefined4 *)PTR_DAT_0066b3a0 = uVar3;
      ppuStack_24 = (undefined1 **)0x600422;
      FUN_00483bc4(DAT_006d411c);
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0060045a;
  local_1c = (undefined1 *)0x600442;
  FUN_00405744(local_2c,PTR_DAT_004010f8,2);
  local_1c = (undefined1 *)0x60044a;
  FUN_00404ff0(&local_c);
  local_1c = (undefined1 *)0x600452;
  FUN_004048d4(&local_8);
  return;
}

