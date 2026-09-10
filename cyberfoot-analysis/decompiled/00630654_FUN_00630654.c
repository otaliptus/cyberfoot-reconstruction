// Address: 00630654
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00630654(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  local_20 = 0;
  local_18 = 0;
  puStack_30 = &LAB_006307bf;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_10 = 0;
  local_8 = param_1;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x308) + 0x11c))();
  if (-1 < iVar2 + -1) {
    uVar5 = iVar2 == 0;
    local_c = 0;
    local_14 = iVar2;
    do {
      (**(code **)(**(int **)(local_8 + 0x308) + 0x100))
                (*(int **)(local_8 + 0x308),1,local_c,&local_18);
      FUN_00405378(local_18,&DAT_006307d0);
      if ((bool)uVar5) {
        local_10 = local_10 + 1;
        FUN_004060a8(PTR_DAT_0066aca0,PTR_DAT_00488b60,1,local_10);
        (**(code **)(**(int **)(local_8 + 0x308) + 0x100))
                  (*(int **)(local_8 + 0x308),4,local_c,&local_20);
        FUN_00404b6c(&local_1c,local_20);
        uVar3 = FUN_00409ff8(local_1c);
        *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + -0x154 + local_10 * 0x294) = uVar3;
        iVar2 = 1;
        do {
          iVar4 = 1;
          do {
            *(undefined4 *)
             (*(int *)PTR_DAT_0066aca0 + local_10 * 0x294 + iVar2 * 0x50 + -0x2e8 + iVar4 * 4) =
                 0xffffffff;
            *(undefined4 *)
             (*(int *)PTR_DAT_0066aca0 + local_10 * 0x294 + iVar2 * 0x50 + -0x198 + iVar4 * 4) =
                 0xffffffff;
            iVar4 = iVar4 + 1;
          } while (iVar4 != 0x15);
          iVar2 = iVar2 + 1;
        } while (iVar2 != 5);
      }
      local_c = local_c + 1;
      local_14 = local_14 + -1;
      uVar5 = local_14 == 0;
    } while (!(bool)uVar5);
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_006307c6;
  puStack_30 = (undefined1 *)0x6307ae;
  FUN_00404ff0(&local_20,uStack_34,puVar1);
  puStack_30 = (undefined1 *)0x6307b6;
  FUN_004048d4(&local_1c);
  puStack_30 = (undefined1 *)0x6307be;
  FUN_00404ff0(&local_18);
  return;
}

