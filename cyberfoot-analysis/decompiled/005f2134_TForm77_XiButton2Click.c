// Address: 005f2134
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm77_XiButton2Click(int param_1)

{
  int *piVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 **ppuStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  iVar5 = 6;
  do {
    local_8 = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_1c = &LAB_005f2298;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined4 *)0x5f2163;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x350) + 0x134))();
  if (0 < iVar5) {
    puStack_24 = &local_c;
    piVar1 = *(int **)(param_1 + 0x350);
    ppuStack_28 = (undefined1 **)0x5f217f;
    uVar4 = (**(code **)(*piVar1 + 0x138))();
    ppuStack_28 = (undefined1 **)0x5f218b;
    FUN_00416244(&local_1c,uVar4,0xfc);
    ppuStack_28 = &local_1c;
    local_2c = 0x5f219c;
    FUN_00416478(&local_2c,"nxid2");
    ppuVar2 = ppuStack_28;
    ppuStack_28 = (undefined1 **)0x5f21a7;
    FUN_0050e448(piVar1,&local_2c,ppuVar2);
    ppuStack_28 = (undefined1 **)0x5f21b2;
    FUN_00404b6c(&local_8,local_c);
    ppuStack_28 = (undefined1 **)0x5f21ba;
    iVar5 = FUN_00409ff8(local_8);
    if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar5 * 0x130) == 0) {
      DAT_006d3f2c = DAT_006d3f2c + -1;
    }
    else {
      DAT_006d3f30 = DAT_006d3f30 + -1;
    }
    piVar1 = *(int **)(param_1 + 0x350);
    ppuStack_28 = (undefined1 **)0x5f21ea;
    uVar4 = (**(code **)(*piVar1 + 0x138))();
    ppuStack_28 = (undefined1 **)0x5f21f6;
    (**(code **)(*piVar1 + 0x1e4))(piVar1,uVar4);
    ppuStack_28 = (undefined1 **)0x5f2203;
    FUN_00409dd8(DAT_006d3f2c,&local_30);
    ppuStack_28 = (undefined1 **)0x5f2211;
    FUN_00466238(*(undefined4 *)(param_1 + 0x300),local_30);
    ppuStack_28 = (undefined1 **)0x5f221e;
    FUN_00409dd8(DAT_006d3f30,&local_34);
    ppuStack_28 = (undefined1 **)0x5f222c;
    FUN_00466238(*(undefined4 *)(param_1 + 0x304),local_34);
    if ((DAT_006d3f2c < 2) || (DAT_006d3f30 < 0x14)) {
      ppuStack_28 = (undefined1 **)0x5f225a;
      (**(code **)(**(int **)(param_1 + 0x32c) + 100))(*(int **)(param_1 + 0x32c),0);
    }
    else {
      ppuStack_28 = (undefined1 **)0x5f224b;
      (**(code **)(**(int **)(param_1 + 0x32c) + 100))(*(int **)(param_1 + 0x32c),1);
    }
  }
  puVar3 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005f229f;
  local_1c = (undefined1 *)0x5f2274;
  FUN_004048f8(&local_34,2,puVar3);
  local_1c = (undefined1 *)0x5f2287;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  local_1c = (undefined1 *)0x5f228f;
  FUN_00404ff0(&local_c);
  local_1c = (undefined1 *)0x5f2297;
  FUN_004048d4(&local_8);
  return;
}

