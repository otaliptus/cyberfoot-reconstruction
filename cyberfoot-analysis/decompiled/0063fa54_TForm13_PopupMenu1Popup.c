// Address: 0063fa54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_PopupMenu1Popup(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *in_FS_OFFSET;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 **ppuStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *local_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = &stack0xfffffffc;
  iVar7 = 10;
  do {
    local_8 = 0;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puStack_20 = &LAB_0063fe5c;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  puVar4 = &stack0xfffffffc;
  if ((0xb < *(int *)(*(int *)PTR_DAT_0066af70 + 100 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)) &&
     (puVar4 = &stack0xfffffffc,
     10 < *(int *)(*(int *)PTR_DAT_0066af70 + 0xa0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8))) {
    ppuStack_28 = (undefined4 **)&local_c;
    piVar1 = *(int **)(param_1 + 0x334);
    local_2c = (undefined4 *)0x63fab7;
    uVar5 = (**(code **)(*piVar1 + 0x138))();
    ppuStack_28 = (undefined4 **)0x63fac3;
    FUN_00416244(&local_1c,uVar5,0xfc);
    ppuStack_28 = (undefined4 **)&local_1c;
    local_2c = (undefined4 *)0x63fad4;
    FUN_00416478(&local_2c,&DAT_0063fe74);
    ppuVar3 = ppuStack_28;
    ppuStack_28 = (undefined4 **)0x63fadf;
    FUN_0050e448(piVar1,&local_2c,ppuVar3);
    ppuStack_28 = (undefined4 **)0x63faea;
    FUN_00404b6c(&local_8,local_c);
    ppuStack_28 = (undefined4 **)0x63faf2;
    iVar7 = FUN_00409ff8(local_8);
    puVar4 = local_1c;
    if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar7 * 0x130) != 2) {
      ppuStack_28 = (undefined4 **)0x63fb23;
      FUN_00478a78(*(undefined4 *)(param_1 + 0x47c),
                   CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b5b8 >> 8),1));
      goto LAB_0063fb23;
    }
  }
  local_1c = puVar4;
  ppuStack_28 = (undefined4 **)0x63fb14;
  FUN_00478a78(*(undefined4 *)(param_1 + 0x47c),0);
LAB_0063fb23:
  ppuStack_28 = &local_34;
  piVar1 = *(int **)(param_1 + 0x334);
  local_2c = (undefined4 *)0x63fb37;
  uVar5 = (**(code **)(*piVar1 + 0x138))();
  local_2c = (undefined4 *)0x63fb45;
  (**(code **)(*piVar1 + 0x100))(piVar1,0,uVar5);
  local_2c = (undefined4 *)0x63fb50;
  FUN_00404b6c(&local_30,local_34);
  local_2c = (undefined4 *)0x63fb58;
  iVar7 = FUN_00409ff8(local_30);
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + iVar7 * 0x130) < 0x20) {
    local_2c = (undefined4 *)0x63fb86;
    FUN_00478a78(*(undefined4 *)(param_1 + 0x478),0);
  }
  else {
    local_2c = (undefined4 *)0x63fb77;
    FUN_00478a78(*(undefined4 *)(param_1 + 0x478),
                 CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b5b8 >> 8),1));
  }
  local_2c = &local_3c;
  piVar1 = *(int **)(param_1 + 0x334);
  local_30 = (undefined4 *)0x63fb9a;
  uVar5 = (**(code **)(*piVar1 + 0x138))();
  local_30 = (undefined4 *)0x63fba8;
  (**(code **)(*piVar1 + 0x100))(piVar1,0,uVar5);
  local_30 = (undefined4 *)0x63fbb3;
  FUN_00404b6c(&local_38,local_3c);
  local_30 = (undefined4 *)0x63fbbb;
  iVar7 = FUN_00409ff8(local_38);
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar7 * 0x130) == 2) {
    local_30 = (undefined4 *)0x63fbe1;
    FUN_00478a78(*(undefined4 *)(param_1 + 0x484),0);
    local_30 = (undefined4 *)0x63fbee;
    FUN_00478a78(*(undefined4 *)(param_1 + 0x47c),0);
    local_30 = (undefined4 *)0x63fbfb;
    FUN_00478a78(*(undefined4 *)(param_1 + 0x478),0);
    local_30 = (undefined4 *)0x63fc08;
    FUN_00478b94(*(undefined4 *)(param_1 + 0x460),1);
    local_30 = (undefined4 *)0x63fc15;
    FUN_00478b94(*(undefined4 *)(param_1 + 0x45c),1);
    local_30 = &local_44;
    piVar1 = *(int **)(param_1 + 0x334);
    local_34 = (undefined4 *)0x63fc29;
    uVar5 = (**(code **)(*piVar1 + 0x138))();
    local_34 = (undefined4 *)0x63fc37;
    (**(code **)(*piVar1 + 0x100))(piVar1,0,uVar5);
    local_30 = (undefined4 *)0x63fc42;
    FUN_00404b6c(&local_40,local_44);
    local_30 = (undefined4 *)0x63fc4a;
    iVar7 = FUN_00409ff8(local_40);
    if ((float10)*(longlong *)
                  (*(int *)PTR_DAT_0066af70 + 0x48 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) <
        (float10)*(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x48 + iVar7 * 0x130)) {
      local_30 = (undefined4 *)0x63fc82;
      FUN_00478a78(*(undefined4 *)(param_1 + 0x45c),0);
    }
    local_30 = (undefined4 *)0x63fc8f;
    FUN_00478a78(*(undefined4 *)(param_1 + 0x454),0);
  }
  else {
    local_30 = (undefined4 *)0x63fc9e;
    FUN_00478b94(*(undefined4 *)(param_1 + 0x460),0);
    local_30 = (undefined4 *)0x63fcab;
    FUN_00478b94(*(undefined4 *)(param_1 + 0x45c),0);
  }
  local_30 = (undefined4 *)0x63fcb8;
  FUN_00478b94(*(undefined4 *)(param_1 + 0x450),0);
  local_30 = (undefined4 *)0x63fcc5;
  FUN_00478a78(*(undefined4 *)(param_1 + 0x450),1);
  local_30 = &local_4c;
  piVar1 = *(int **)(param_1 + 0x334);
  local_34 = (undefined4 *)0x63fcd9;
  uVar5 = (**(code **)(*piVar1 + 0x138))();
  local_34 = (undefined4 *)0x63fce7;
  (**(code **)(*piVar1 + 0x100))(piVar1,0,uVar5);
  local_34 = (undefined4 *)0x63fcf2;
  FUN_00404b6c(&local_48,local_4c);
  local_34 = (undefined4 *)0x63fcfa;
  iVar7 = FUN_00409ff8(local_48);
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar7 * 0x130) == 1) {
    local_34 = (undefined4 *)0x63fd1c;
    FUN_00478a78(*(undefined4 *)(param_1 + 0x454),0);
    local_34 = (undefined4 *)0x63fd29;
    FUN_00478b94(*(undefined4 *)(param_1 + 0x454),0);
    local_34 = (undefined4 *)0x63fd36;
    FUN_00478b94(*(undefined4 *)(param_1 + 0x450),1);
  }
  else {
    local_34 = (undefined4 *)0x63fd45;
    iVar7 = FUN_00650184(*(undefined4 *)(PTR_DAT_0066ac78 + 8));
    local_34 = (undefined4 *)0x63fd54;
    iVar6 = FUN_006501cc(*(undefined4 *)(PTR_DAT_0066ac78 + 8));
    if (iVar7 + iVar6 < 2) {
      local_34 = (undefined4 *)0x63fd77;
      FUN_00478a78(*(undefined4 *)(param_1 + 0x454),1);
      local_34 = (undefined4 *)0x63fd84;
      FUN_00478b94(*(undefined4 *)(param_1 + 0x454),1);
    }
    else {
      local_34 = (undefined4 *)0x63fd68;
      FUN_00478a78(*(undefined4 *)(param_1 + 0x454),0);
    }
  }
  local_34 = &local_54;
  piVar1 = *(int **)(param_1 + 0x334);
  local_38 = 0x63fd98;
  uVar5 = (**(code **)(*piVar1 + 0x138))();
  local_38 = 0x63fda6;
  (**(code **)(*piVar1 + 0x100))(piVar1,0,uVar5);
  local_38 = 0x63fdb1;
  FUN_00404b6c(&local_50,local_54);
  local_38 = 0x63fdb9;
  iVar7 = FUN_00409ff8(local_50);
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar7 * 0x130) == 2) {
    local_38 = 0x63fddb;
    FUN_00478b94(*(undefined4 *)(param_1 + 0x454),0);
  }
  puVar2 = local_2c;
  *in_FS_OFFSET = (int)local_34;
  local_2c = (undefined4 *)&LAB_0063fe63;
  local_30 = (undefined4 *)0x63fdf0;
  FUN_00404ff0(&local_54,local_34,puVar2);
  local_30 = (undefined4 *)0x63fdf8;
  FUN_004048d4(&local_50);
  local_30 = (undefined4 *)0x63fe00;
  FUN_00404ff0(&local_4c);
  local_30 = (undefined4 *)0x63fe08;
  FUN_004048d4(&local_48);
  local_30 = (undefined4 *)0x63fe10;
  FUN_00404ff0(&local_44);
  local_30 = (undefined4 *)0x63fe18;
  FUN_004048d4(&local_40);
  local_30 = (undefined4 *)0x63fe20;
  FUN_00404ff0(&local_3c);
  local_30 = (undefined4 *)0x63fe28;
  FUN_004048d4(&local_38);
  local_30 = (undefined4 *)0x63fe30;
  FUN_00404ff0(&local_34);
  local_30 = (undefined4 *)0x63fe38;
  FUN_004048d4(&local_30);
  local_30 = (undefined4 *)0x63fe4b;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  local_30 = (undefined4 *)0x63fe53;
  FUN_00404ff0(&local_c);
  local_30 = (undefined4 *)0x63fe5b;
  FUN_004048d4(&local_8);
  return;
}

