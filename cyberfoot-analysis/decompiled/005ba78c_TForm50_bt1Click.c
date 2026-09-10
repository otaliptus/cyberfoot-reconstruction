// Address: 005ba78c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm50_bt1Click(int param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int *piVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 **ppuStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = 6;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  puStack_24 = &LAB_005ba927;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  ppuStack_2c = (undefined1 **)0x5ba7c1;
  local_8 = param_1;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x304) + 0x134))();
  if (0 < iVar3) {
    ppuStack_2c = (undefined1 **)&local_10;
    piVar5 = *(int **)(DAT_006d2b30 + 0x304);
    local_30 = 0x5ba7e2;
    uVar4 = (**(code **)(*piVar5 + 0x138))();
    ppuStack_2c = (undefined1 **)0x5ba7ee;
    FUN_00416244(&local_20,uVar4,0xfc);
    ppuStack_2c = &local_20;
    local_30 = 0x5ba7ff;
    FUN_00416478(&local_30,&DAT_005ba940);
    ppuVar1 = ppuStack_2c;
    ppuStack_2c = (undefined1 **)0x5ba80a;
    FUN_0050e448(piVar5,&local_30,ppuVar1);
    ppuStack_2c = (undefined1 **)0x5ba815;
    FUN_00404b6c(&local_c,local_10);
    ppuStack_2c = (undefined1 **)0x5ba81d;
    iVar3 = FUN_00409ff8(local_c);
    if (*(int *)(*(int *)PTR_DAT_0066b718 + 0x1c + iVar3 * 0x80) < 0) {
      iVar6 = *(int *)PTR_DAT_0066b57c;
      if (0 < iVar6) {
        piVar5 = (int *)(PTR_DAT_0066ac78 + 0x14);
        do {
          if (iVar3 == *piVar5) {
            *piVar5 = -1;
            *(undefined1 *)(*(int *)PTR_DAT_0066b718 + iVar3 * 0x80) = 0;
            *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x1c + iVar3 * 0x80) = 0xffffffff;
            *(undefined1 *)(*(int *)PTR_DAT_0066b718 + 0x40 + iVar3 * 0x80) = 0;
          }
          piVar5 = piVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      ppuStack_2c = (undefined1 **)0x5ba8e6;
      FUN_005bac10(local_8);
    }
    else if (*PTR_DAT_0066b700 == '\0') {
      ppuStack_2c = (undefined1 **)0x0;
      local_30 = 0x5ba84c;
      FUN_00642c50(0x215,&local_38);
      local_30 = 0x5ba857;
      FUN_00404b6c(&local_34,local_38);
      local_30 = 0x5ba868;
      FUN_00437ef0(local_34,2,CONCAT22(extraout_var_00,DAT_005ba944));
    }
    else {
      ppuStack_2c = (undefined1 **)0x0;
      local_30 = 0x5ba87f;
      FUN_00437ef0("First need to resign from current job",
                   CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b718 >> 8),2),
                   CONCAT22(extraout_var,DAT_005ba944));
    }
  }
  puVar2 = local_20;
  *in_FS_OFFSET = uStack_28;
  local_20 = &LAB_005ba92e;
  puStack_24 = (undefined1 *)0x5ba8fb;
  FUN_00404ff0(&local_38,uStack_28,puVar2);
  puStack_24 = (undefined1 *)0x5ba903;
  FUN_004048d4(&local_34);
  puStack_24 = (undefined1 *)0x5ba916;
  FUN_00405744(&local_30,PTR_DAT_004010f8,2);
  puStack_24 = (undefined1 *)0x5ba91e;
  FUN_00404ff0(&local_10);
  puStack_24 = (undefined1 *)0x5ba926;
  FUN_004048d4(&local_c);
  return;
}

