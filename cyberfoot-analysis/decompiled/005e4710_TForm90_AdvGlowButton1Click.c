// Address: 005e4710
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm90_AdvGlowButton1Click(int param_1)

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
  local_1c = &LAB_005e47db;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  ppuStack_24 = (undefined1 **)0x5e473f;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x134))();
  if (0 < iVar4) {
    ppuStack_24 = (undefined1 **)&local_c;
    piVar1 = *(int **)(param_1 + 0x2f8);
    uStack_28 = 0x5e4757;
    uVar3 = (**(code **)(*piVar1 + 0x138))();
    ppuStack_24 = (undefined1 **)0x5e4763;
    FUN_00416244(&local_1c,uVar3,0xfc);
    ppuStack_24 = &local_1c;
    uStack_28 = 0x5e4774;
    FUN_00416478(local_2c,&DAT_005e47f0);
    ppuVar2 = ppuStack_24;
    ppuStack_24 = (undefined1 **)0x5e477f;
    FUN_0050e448(piVar1,local_2c,ppuVar2);
    ppuStack_24 = (undefined1 **)0x5e478a;
    FUN_00404b6c(&local_8,local_c);
    ppuStack_24 = (undefined1 **)0x5e4792;
    uVar3 = FUN_00409ff8(local_8);
    ppuStack_24 = (undefined1 **)0x5e47a0;
    FUN_005e92dc(*(undefined4 *)PTR_DAT_0066afdc,uVar3);
    ppuStack_24 = (undefined1 **)0x5e47aa;
    FUN_00483bc4(DAT_006d34e0);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005e47e2;
  local_1c = (undefined1 *)0x5e47ca;
  FUN_00405744(local_2c,PTR_DAT_004010f8,2);
  local_1c = (undefined1 *)0x5e47d2;
  FUN_00404ff0(&local_c);
  local_1c = (undefined1 *)0x5e47da;
  FUN_004048d4(&local_8);
  return;
}

