// Address: 005fa3a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm67_grid1Click(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  bool bVar6;
  undefined4 *puVar7;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_005fa4a3;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x308) + 0x11c))();
  if (0 < iVar3) {
    puVar7 = &local_8;
    piVar1 = *(int **)(param_1 + 0x308);
    uVar4 = (**(code **)(*piVar1 + 0x138))();
    uVar5 = 1;
    (**(code **)(*piVar1 + 0x100))(piVar1,0,uVar4,puVar7);
    FUN_00405378(local_8,&DAT_005fa4b4);
    if (!(bool)uVar5) {
      puVar7 = &local_c;
      uVar4 = (**(code **)(**(int **)(param_1 + 0x308) + 0x138))();
      (**(code **)(**(int **)(param_1 + 0x308) + 0x100))(*(int **)(param_1 + 0x308),0,uVar4,puVar7);
      bVar6 = true;
      FUN_00405378(local_c);
      if (!bVar6) {
        puVar7 = &local_14;
        piVar1 = *(int **)(param_1 + 0x308);
        uVar4 = (**(code **)(*piVar1 + 0x138))();
        (**(code **)(*piVar1 + 0x100))(piVar1,0,uVar4,puVar7);
        FUN_00404b6c(&local_10,local_14);
        uVar4 = FUN_00409ff8(local_10);
        FUN_005f7c28(param_1,uVar4);
      }
    }
  }
  puVar2 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005fa4aa;
  puStack_24 = (undefined1 *)0x5fa48d;
  FUN_00404ff0(&local_14,uStack_28,puVar2);
  puStack_24 = (undefined1 *)0x5fa495;
  FUN_004048d4(&local_10);
  puStack_24 = (undefined1 *)0x5fa4a2;
  FUN_00405008(&local_c,2);
  return;
}

