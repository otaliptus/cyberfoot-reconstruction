// Address: 005d61ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005d61ac(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined *local_44;
  undefined1 local_40 [8];
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int iVar6;
  int local_10;
  int local_c;
  
  local_20 = &stack0xfffffffc;
  iVar5 = 0xd;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_24 = &LAB_005d6550;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x5d61e3;
  (**(code **)(**(int **)(param_1 + 0x2fc) + 0xd8))();
  if (-1 < *(int *)(PTR_DAT_0066adf4 + param_2 * 4 + -4)) {
    puStack_2c = (undefined1 *)0x5d620f;
    FUN_004030d4(local_40,*(int *)PTR_DAT_0066af70 +
                          *(int *)(PTR_DAT_0066adf4 + param_2 * 4 + -4) * 0x2f8);
    puStack_2c = (undefined1 *)0x5d621e;
    FUN_004030a4(local_40,&DAT_005d6560,0x1a);
    puStack_2c = (undefined1 *)0x5d6229;
    FUN_00405194(&local_24,local_40);
    puStack_2c = local_24;
    puStack_30 = (undefined *)0x5d6239;
    FUN_00642c50(0x226,&local_44);
    puStack_30 = local_44;
    puStack_34 = &DAT_005d6568;
    uStack_38 = 0x5d624e;
    FUN_00405330(&local_20,3);
    puStack_2c = (undefined1 *)0x5d625f;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x328),local_20);
    local_c = 0;
    puStack_2c = (undefined1 *)0x5d6270;
    iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
    if (0 < iVar5) {
      local_10 = 1;
      do {
        if (((-1 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + local_10 * 0x130)) &&
            (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x120 + local_10 * 0x130) == '\0')) &&
           (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + local_10 * 0x130) ==
            *(int *)(PTR_DAT_0066adf4 + param_2 * 4 + -4))) {
          local_c = local_c + 1;
          puStack_30 = (undefined *)0x5d62d9;
          puStack_2c = (undefined1 *)local_c;
          FUN_004060a8(&stack0xffffffe8,PTR_DAT_005d618c,1);
          *(int *)(unaff_ESI + -4 + local_c * 4) = local_10;
        }
        local_10 = local_10 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    local_10 = 0;
    do {
      if (-1 < local_c + -1) {
        iVar5 = 0;
        iVar6 = local_c;
        do {
          iVar1 = *(int *)(unaff_ESI + iVar5 * 4);
          if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar1 * 0x130) == local_10) {
            puStack_2c = (undefined1 *)0x5d6344;
            iVar3 = FUN_0044e868(*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x22c));
            puStack_2c = (undefined1 *)0x5d6366;
            FUN_00404b6c(&local_48,
                         *(undefined4 *)
                          (PTR_DAT_0066b660 +
                          *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar1 * 0x130) * 4));
            puStack_2c = (undefined1 *)0x5d6370;
            FUN_0044e308(iVar3,local_48);
            puStack_2c = (undefined1 *)0x5d6383;
            FUN_00404b48(&local_4c,*(int *)PTR_DAT_0066b5b8 + iVar1 * 0x130);
            puStack_2c = (undefined1 *)0x5d638e;
            (**(code **)(**(int **)(iVar3 + 8) + 0x38))(*(int **)(iVar3 + 8),local_4c);
            puStack_2c = (undefined1 *)0x5d63a1;
            FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar1 * 0x130),&local_50)
            ;
            puStack_2c = (undefined1 *)0x5d63ac;
            (**(code **)(**(int **)(iVar3 + 8) + 0x38))(*(int **)(iVar3 + 8),local_50);
            puStack_2c = (undefined1 *)0x5d63bf;
            FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + iVar1 * 0x130),&local_54)
            ;
            puStack_2c = (undefined1 *)0x5d63cc;
            FUN_00404bac(&local_54,&DAT_005d6574);
            puStack_2c = (undefined1 *)0x5d63d7;
            (**(code **)(**(int **)(iVar3 + 8) + 0x38))(*(int **)(iVar3 + 8),local_54);
            puStack_2c = (undefined1 *)0x5d63ed;
            uVar4 = FUN_00402c38();
            puStack_2c = (undefined1 *)0x5d63f5;
            FUN_00651ebc(uVar4,&local_5c);
            puStack_2c = (undefined1 *)0x5d6400;
            FUN_00404b6c(&local_58,local_5c);
            puStack_2c = (undefined1 *)0x5d640b;
            (**(code **)(**(int **)(iVar3 + 8) + 0x38))(*(int **)(iVar3 + 8),local_58);
            puStack_2c = (undefined1 *)0x5d6421;
            uVar4 = FUN_00402c38();
            puStack_2c = (undefined1 *)0x5d6429;
            FUN_00651ebc(uVar4,&local_64);
            puStack_2c = (undefined1 *)0x5d6434;
            FUN_00404b6c(&local_60,local_64);
            puStack_2c = (undefined1 *)0x5d643f;
            (**(code **)(**(int **)(iVar3 + 8) + 0x38))(*(int **)(iVar3 + 8),local_60);
            puStack_2c = *(undefined1 **)
                          (PTR_DAT_0066b1c8 +
                          *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar1 * 0x130) * 4);
            puStack_30 = &DAT_005d6580;
            puStack_34 = *(undefined **)
                          (PTR_DAT_0066b1c8 +
                          *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar1 * 0x130) * 4);
            uStack_38 = 0x5d6479;
            FUN_00405330(&local_6c,3);
            uStack_38 = 0x5d6484;
            FUN_00404b6c(&local_68,local_6c);
            uStack_38 = 0x5d648f;
            (**(code **)(**(int **)(iVar3 + 8) + 0x38))(*(int **)(iVar3 + 8),local_68);
            uStack_38 = 0x5d64a2;
            FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + iVar1 * 0x130),&local_70)
            ;
            uStack_38 = 0x5d64ad;
            (**(code **)(**(int **)(iVar3 + 8) + 0x38))(*(int **)(iVar3 + 8),local_70);
            if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + iVar1 * 0x130) != '\0') {
              puStack_2c = (undefined1 *)0x5d64c9;
              FUN_0044e4c0(iVar3,0,1);
            }
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_10 = local_10 + 1;
    } while (local_10 != 5);
  }
  puVar2 = local_20;
  *in_FS_OFFSET = uStack_28;
  local_20 = &LAB_005d6557;
  local_24 = (undefined1 *)0x5d64f7;
  FUN_004048d4(&local_70,uStack_28,puVar2);
  local_24 = (undefined1 *)0x5d64ff;
  FUN_00404ff0(&local_6c);
  local_24 = (undefined1 *)0x5d6507;
  FUN_004048d4(&local_68);
  local_24 = (undefined1 *)0x5d650f;
  FUN_00404ff0(&local_64);
  local_24 = (undefined1 *)0x5d6517;
  FUN_004048d4(&local_60);
  local_24 = (undefined1 *)0x5d651f;
  FUN_00404ff0(&local_5c);
  local_24 = (undefined1 *)0x5d652c;
  FUN_004048f8(&local_58,5);
  local_24 = (undefined1 *)0x5d6534;
  FUN_00404ff0(&local_44);
  local_24 = (undefined1 *)0x5d6541;
  FUN_00405008(&local_24,2);
  local_24 = (undefined1 *)0x5d654f;
  FUN_004061c8(&stack0xffffffe8,PTR_DAT_005d618c);
  return;
}

