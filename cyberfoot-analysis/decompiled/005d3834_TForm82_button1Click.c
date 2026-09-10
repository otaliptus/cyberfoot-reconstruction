// Address: 005d3834
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm82_button1Click(int param_1)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *in_FS_OFFSET;
  undefined1 uVar7;
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined1 **ppuStack_28;
  undefined4 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *local_1c;
  undefined4 local_c;
  int local_8;
  
  local_1c = &stack0xfffffffc;
  iVar5 = 0xb;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puStack_20 = &LAB_005d3a65;
  puStack_24 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_24;
  ppuStack_28 = (undefined1 **)0x5d3863;
  local_8 = param_1;
  iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  iVar5 = iVar5 + -1;
  if (0 < iVar5) {
    iVar6 = 1;
    do {
      if (((-1 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar6 * 0x130)) &&
          (0 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + iVar6 * 0x130))) &&
         (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar6 * 0x130) ==
          *(int *)(PTR_DAT_0066ac78 + 8))) {
        ppuStack_28 = (undefined1 **)0x5d38b7;
        iVar3 = FUN_0054c0f0(*(undefined4 *)(local_8 + 0x300));
        if (iVar3 == *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + iVar6 * 0x130)) {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + iVar6 * 0x130) = 0;
        }
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  ppuStack_28 = (undefined1 **)0x5d38e4;
  uVar4 = FUN_0054c0f0(*(undefined4 *)(local_8 + 0x300));
  *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + *(int *)PTR_DAT_0066b1e8 * 0x130) = uVar4;
  if (0 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + *(int *)PTR_DAT_0066b1e8 * 0x130)) {
    ppuStack_28 = (undefined1 **)0x5d3929;
    iVar5 = (**(code **)(**(int **)(*(int *)PTR_DAT_0066b054 + 0x334) + 0x11c))();
    if (-1 < iVar5 + -1) {
      iVar6 = 0;
      uVar7 = true;
      do {
        puStack_24 = &local_c;
        ppuStack_28 = (undefined1 **)0x5d3947;
        FUN_00416244(&local_1c,iVar6,0xfc);
        ppuStack_28 = &local_1c;
        local_2c = (undefined1 *)0x5d3958;
        FUN_00416478(&local_2c,&DAT_005d3a7c);
        ppuVar2 = ppuStack_28;
        ppuStack_28 = (undefined1 **)0x5d396e;
        FUN_0050e448(*(undefined4 *)(*(int *)PTR_DAT_0066b054 + 0x334),&local_2c,ppuVar2);
        ppuStack_28 = (undefined1 **)local_c;
        local_2c = (undefined1 *)0x5d3981;
        FUN_00409dd8(*(undefined4 *)PTR_DAT_0066b1e8,&local_34);
        local_2c = (undefined1 *)0x5d398c;
        FUN_004051d4(&local_30,local_34);
        ppuVar2 = ppuStack_28;
        ppuStack_28 = (undefined1 **)0x5d3995;
        FUN_00405378(ppuVar2,local_30);
        if ((bool)uVar7) {
          ppuStack_28 = (undefined1 **)0x5d39b3;
          FUN_00409dd8(*(undefined4 *)
                        (*(int *)PTR_DAT_0066b5b8 + 0x54 + *(int *)PTR_DAT_0066b1e8 * 0x130),
                       &local_3c);
          ppuStack_28 = (undefined1 **)0x5d39be;
          FUN_004051d4(&local_38,local_3c);
          puStack_24 = local_38;
          local_2c = (undefined1 *)0x5d39ce;
          FUN_00416244(local_4c,iVar6,0xfc);
          local_2c = local_4c;
          local_30 = 0x5d39df;
          FUN_00416478(local_5c,"status");
          puVar1 = local_2c;
          local_2c = (undefined1 *)0x5d39f5;
          FUN_0050e9b8(*(undefined4 *)(*(int *)PTR_DAT_0066b054 + 0x334),local_5c,puVar1);
          break;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
        uVar7 = iVar5 == 0;
      } while (!(bool)uVar7);
    }
  }
  ppuStack_28 = (undefined1 **)0x5d3a09;
  FUN_00483bc4(DAT_006d326c);
  *in_FS_OFFSET = (int)puStack_24;
  local_1c = &LAB_005d3a6c;
  puStack_20 = (undefined1 *)0x5d3a29;
  FUN_00405744(local_5c,PTR_DAT_004010f8,2);
  puStack_20 = (undefined1 *)0x5d3a31;
  FUN_004048d4(&local_3c);
  puStack_20 = (undefined1 *)0x5d3a39;
  FUN_00404ff0(&local_38);
  puStack_20 = (undefined1 *)0x5d3a41;
  FUN_004048d4(&local_34);
  puStack_20 = (undefined1 *)0x5d3a49;
  FUN_00404ff0(&local_30);
  puStack_20 = (undefined1 *)0x5d3a5c;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  puStack_20 = (undefined1 *)0x5d3a64;
  FUN_00404ff0(&local_c);
  return;
}

