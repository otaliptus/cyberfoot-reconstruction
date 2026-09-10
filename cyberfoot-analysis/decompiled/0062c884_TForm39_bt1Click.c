// Address: 0062c884
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm39_bt1Click(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar9;
  byte bVar10;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar10 = 0;
  puStack_34 = &stack0xfffffffc;
  local_20 = 0;
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  puStack_38 = &LAB_0062cb30;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  iVar4 = 0;
  local_8 = param_1;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x32c) + 0x11c))();
  if (-1 < iVar2 + -1) {
    uVar9 = iVar2 == 0;
    local_c = 0;
    local_18 = iVar2;
    do {
      (**(code **)(**(int **)(local_8 + 0x32c) + 0x100))
                (*(int **)(local_8 + 0x32c),1,local_c,&local_1c);
      FUN_00405378(local_1c,&DAT_0062cb44);
      if ((bool)uVar9) {
        iVar4 = iVar4 + 1;
        FUN_004060a8(&local_14,PTR_LAB_0062c864,1,iVar4);
        (**(code **)(**(int **)(local_8 + 0x32c) + 0x100))
                  (*(int **)(local_8 + 0x32c),4,local_c,&local_24);
        FUN_00404b6c(&local_20,local_24);
        uVar3 = FUN_00409ff8(local_20);
        *(undefined4 *)(local_14 + -4 + iVar4 * 4) = uVar3;
      }
      local_c = local_c + 1;
      local_18 = local_18 + -1;
      uVar9 = local_18 == 0;
    } while (!(bool)uVar9);
  }
  local_10 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b164);
  iVar2 = FUN_00405ef4(local_14);
  if (-1 < iVar2) {
    local_18 = iVar2 + 1;
    local_c = 0;
    do {
      if (-1 < local_10 + -1) {
        iVar4 = 0;
        iVar2 = local_10;
        do {
          if ((uint)*(byte *)(*(int *)PTR_DAT_0066b164 + iVar4 * 200) ==
              *(uint *)(local_14 + local_c * 4)) {
            *(undefined1 *)(*(int *)PTR_DAT_0066b164 + iVar4 * 200) = 0xca;
          }
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_c = local_c + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  PTR_DAT_0066ac78[0x17f] = 0;
  PTR_DAT_0066ac78[0x181] = 0;
  PTR_DAT_0066ac78[0x180] = 0;
  PTR_DAT_0066ac78[0x170] = 0;
  PTR_DAT_0066ac78[0x171] = 0;
  PTR_DAT_0066ac78[0x172] = 0;
  uVar9 = (**(code **)(**(int **)(local_8 + 0x330) + 200))();
  PTR_DAT_0066ac78[0x10e] = uVar9;
  puVar7 = (undefined4 *)(PTR_DAT_0066ac78 + (uint)bVar10 * -8 + 0x120);
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x11c) = _DAT_0062cb48;
  puVar8 = puVar7 + (uint)bVar10 * -2 + 1;
  pcVar5 = "Copa Internacional" + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 7;
  *puVar7 = *(undefined4 *)("Copa Internacional" + (uint)bVar10 * -8 + 3);
  puVar7 = puVar8 + (uint)bVar10 * -2 + 1;
  pcVar6 = pcVar5 + ((uint)bVar10 * -2 + 1) * 4;
  *puVar8 = *(undefined4 *)pcVar5;
  *puVar7 = *(undefined4 *)pcVar6;
  *(undefined2 *)(puVar7 + (uint)bVar10 * -2 + 1) =
       *(undefined2 *)(pcVar6 + ((uint)bVar10 * -2 + 1) * 4);
  *(char *)((int)(puVar7 + (uint)bVar10 * -2 + 1) + (uint)bVar10 * -4 + 2) =
       (pcVar6 + ((uint)bVar10 * -2 + 1) * 4)[(uint)bVar10 * -4 + 2];
  iVar2 = (**(code **)(**(int **)(local_8 + 0x334) + 0xcc))();
  if (iVar2 == 0) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 0x168) = 4;
  }
  else {
    *(undefined4 *)(PTR_DAT_0066ac78 + 0x168) = 2;
  }
  *(undefined4 *)(PTR_DAT_0066ac78 + 0xc4) = 0xca;
  FUN_004060a8(PTR_DAT_0066aca0,PTR_DAT_00488b60,1,1);
  *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140) = 0xca;
  *(undefined1 *)(*(int *)PTR_DAT_0066aca0 + 0x14c) = 1;
  *(undefined4 *)PTR_DAT_0066b2e4 = 0;
  FUN_00631634(0,0xca);
  FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_006298a0,PTR_DAT_0066b3d4);
  FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b3d4);
  FUN_00483bc4(DAT_006d4b70);
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0062cb37;
  puStack_38 = (undefined1 *)0x62cb11;
  FUN_00404ff0(&local_24,uStack_3c,puVar1);
  puStack_38 = (undefined1 *)0x62cb19;
  FUN_004048d4(&local_20);
  puStack_38 = (undefined1 *)0x62cb21;
  FUN_00404ff0(&local_1c);
  puStack_38 = (undefined1 *)0x62cb2f;
  FUN_004061c8(&local_14,PTR_LAB_0062c864);
  return;
}

