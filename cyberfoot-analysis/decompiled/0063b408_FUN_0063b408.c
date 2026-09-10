// Address: 0063b408
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0063b408(int param_1)

{
  int iVar1;
  undefined1 **ppuVar2;
  int iVar3;
  int *in_FS_OFFSET;
  undefined1 **local_30;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined1 *puStack_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = 5;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  puStack_24 = &LAB_0063b639;
  piStack_28 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&piStack_28;
  uStack_2c = 0x63b43d;
  local_8 = param_1;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      piStack_28 = &local_10;
      local_30 = (undefined1 **)0x63b45b;
      FUN_00416244(&local_20,iVar3,0xfc);
      local_30 = &local_20;
      FUN_00416478(&local_30,&DAT_0063b650);
      ppuVar2 = local_30;
      local_30 = (undefined1 **)0x63b47e;
      FUN_0050e448(*(undefined4 *)(local_8 + 0x334),&local_30,ppuVar2);
      local_30 = (undefined1 **)0x63b489;
      FUN_00404b6c(&local_c,local_10);
      local_30 = (undefined1 **)0x63b491;
      ppuVar2 = (undefined1 **)FUN_00409ff8(local_c);
      if ((PTR_DAT_0066ac78[0x10d] != '\0') &&
         (*(double *)(*(int *)PTR_DAT_0066b5b8 + 0x70 + (int)ppuVar2 * 0x130) <
          *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10))) {
        local_30 = (undefined1 **)0x63b4d9;
        FUN_00647c48(0xc,ppuVar2);
      }
      if ((*(int *)(PTR_DAT_0066ac78 + 0xe0) < 3) &&
         (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0xfc + (int)ppuVar2 * 0x130) < 2)) {
        if ((*(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10) <=
             *(double *)(*(int *)PTR_DAT_0066b5b8 + 0x70 + (int)ppuVar2 * 0x130)) ||
           (1 < *(int *)(PTR_DAT_0066ac78 + 0xe0))) {
          if (((*(double *)(*(int *)PTR_DAT_0066b5b8 + 0x70 + (int)ppuVar2 * 0x130) -
                *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10) <
                (double)_DAT_0063b654) &&
              (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0xfc + (int)ppuVar2 * 0x130) == 0)) &&
             ((*(int *)(PTR_DAT_0066ac78 + 0xe0) == 0 || (*(int *)(PTR_DAT_0066ac78 + 0xe0) == 2))))
          {
            local_30 = ppuVar2;
            FUN_0064cbf0(*(undefined4 *)(PTR_DAT_0066ac78 + 8),0xd,0,0,0);
            *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xfc + (int)ppuVar2 * 0x130) = 1;
          }
        }
        else {
          local_30 = ppuVar2;
          FUN_0064cbf0(*(undefined4 *)(PTR_DAT_0066ac78 + 8),0xd,1,0,0);
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xfc + (int)ppuVar2 * 0x130) = 2;
        }
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *in_FS_OFFSET = (int)piStack_28;
  local_20 = &LAB_0063b640;
  puStack_24 = (undefined1 *)0x63b628;
  FUN_00405744(&local_30,PTR_DAT_004010f8,2);
  puStack_24 = (undefined1 *)0x63b630;
  FUN_00404ff0(&local_10);
  puStack_24 = (undefined1 *)0x63b638;
  FUN_004048d4(&local_c);
  return;
}

