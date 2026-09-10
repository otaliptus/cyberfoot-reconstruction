// Address: 005fcccc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm37_btpClick(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  int unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int *piVar7;
  int local_c;
  
  local_20 = &stack0xfffffffc;
  iVar5 = 7;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_24 = &LAB_005fd169;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  if (DAT_006d40f4 == 2) {
    if (*(int *)PTR_DAT_0066b134 == 1) {
      local_2c = 0x5fcd1f;
      local_20 = &stack0xfffffffc;
      iVar5 = FUN_0044e8c4(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x22c));
      if (-1 < iVar5 + -1) {
        local_c = 0;
        puVar6 = (undefined4 *)PTR_DAT_0066ac54;
        do {
          local_2c = 0x5fcd4b;
          iVar2 = FUN_0044e8f4(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x22c),local_c);
          local_2c = 0x5fcd5b;
          (**(code **)(**(int **)(iVar2 + 8) + 0xc))(*(int **)(iVar2 + 8),3,&stack0xffffffe8);
          local_2c = 0x5fcd63;
          uVar3 = FUN_00409ff8(unaff_ESI);
          *puVar6 = uVar3;
          local_c = local_c + 1;
          puVar6 = puVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *(int *)PTR_DAT_0066b134 = *(int *)PTR_DAT_0066b134 + 1;
      local_2c = 0x5fcd85;
      (**(code **)(**(int **)(param_1 + 0x338) + 100))(*(int **)(param_1 + 0x338),0);
      local_2c = 0x5fcd96;
      (**(code **)(**(int **)(param_1 + 0x324) + 0xd8))();
      local_2c = 0x5fcda7;
      (**(code **)(**(int **)(param_1 + 0x328) + 0xd8))();
      DAT_006d40f8 = *(undefined4 *)PTR_DAT_0066ae1c;
      local_2c = 0x5fcdc0;
      FUN_00645508(DAT_006d40f8,&stack0xffffffe4);
      if (unaff_EDI != 0) {
        local_2c = 0x5fcdd3;
        FUN_00645508(DAT_006d40f8,&local_20);
        local_2c = 0x5fcdea;
        FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 800) + 0x168),local_20);
      }
      iVar5 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 + *(int *)PTR_DAT_0066ae1c * 0x2f8);
      local_c = 0x19;
      piVar7 = (int *)PTR_DAT_0066ad68;
      do {
        iVar2 = 1;
        do {
          if ((*(int *)(*(int *)PTR_DAT_0066b238 + iVar5 * 0xf8 + 0x58 + iVar2 * 4) == *piVar7) &&
             (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 +
                       *(int *)(*(int *)PTR_DAT_0066b238 + iVar5 * 0xf8 + -4 + iVar2 * 4) * 0x130)
              != '\0')) {
            local_2c = 0x5fce6b;
            iVar4 = FUN_0044e868(*(undefined4 *)(*(int *)(param_1 + 0x324) + 0x22c));
            local_2c = 0x5fce8f;
            FUN_00404b6c(&local_24,
                         *(undefined4 *)
                          (PTR_DAT_0066b6bc +
                          *(int *)(*(int *)PTR_DAT_0066b238 + iVar5 * 0xf8 + 0x58 + iVar2 * 4) * 4 +
                          -4));
            local_2c = 0x5fce9a;
            FUN_0044e308(iVar4,local_24);
            local_2c = 0x5fcebd;
            FUN_00404b48(&local_28,
                         *(int *)PTR_DAT_0066b5b8 +
                         *(int *)(*(int *)PTR_DAT_0066b238 + iVar5 * 0xf8 + -4 + iVar2 * 4) * 0x130)
            ;
            local_2c = 0x5fcecb;
            (**(code **)(**(int **)(iVar4 + 8) + 0x38))(*(int **)(iVar4 + 8),local_28);
            if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 +
                         *(int *)(*(int *)PTR_DAT_0066b238 + iVar5 * 0xf8 + -4 + iVar2 * 4) * 0x130)
                == '\0') {
              local_2c = 0x5fcf06;
              FUN_0044e4c0(iVar4,0,0);
            }
            else {
              local_2c = 0x5fcef8;
              FUN_0044e4c0(iVar4,0,1);
            }
            local_2c = 0x5fcf29;
            FUN_00409dd8(*(undefined4 *)
                          (*(int *)PTR_DAT_0066b5b8 + 0x28 +
                          *(int *)(*(int *)PTR_DAT_0066b238 + iVar5 * 0xf8 + -4 + iVar2 * 4) * 0x130
                          ),&local_2c);
            uVar3 = local_2c;
            local_2c = 0x5fcf37;
            (**(code **)(**(int **)(iVar4 + 8) + 0x38))(*(int **)(iVar4 + 8),uVar3);
            local_2c = 0x5fcf5a;
            FUN_00409dd8(*(undefined4 *)
                          (*(int *)PTR_DAT_0066b5b8 + 0x78 +
                          *(int *)(*(int *)PTR_DAT_0066b238 + iVar5 * 0xf8 + -4 + iVar2 * 4) * 0x130
                          ),&local_30);
            local_2c = 0x5fcf67;
            FUN_00404bac(&local_30,&DAT_005fd180);
            local_2c = 0x5fcf75;
            (**(code **)(**(int **)(iVar4 + 8) + 0x38))(*(int **)(iVar4 + 8),local_30);
            local_2c = 0x5fcf8b;
            FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar5 * 0xf8 + -4 + iVar2 * 4),
                         &local_34);
            local_2c = 0x5fcf99;
            (**(code **)(**(int **)(iVar4 + 8) + 0x38))(*(int **)(iVar4 + 8),local_34);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 != 0xc);
        piVar7 = piVar7 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    else {
      local_2c = 0x5fcfc9;
      local_20 = &stack0xfffffffc;
      iVar5 = FUN_0044e8c4(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x22c));
      if (-1 < iVar5 + -1) {
        local_c = 0;
        puVar6 = (undefined4 *)PTR_DAT_0066accc;
        do {
          local_2c = 0x5fcff5;
          iVar2 = FUN_0044e8f4(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x22c),local_c);
          local_2c = 0x5fd005;
          (**(code **)(**(int **)(iVar2 + 8) + 0xc))(*(int **)(iVar2 + 8),3,&local_38);
          local_2c = 0x5fd00d;
          uVar3 = FUN_00409ff8(local_38);
          *puVar6 = uVar3;
          local_c = local_c + 1;
          puVar6 = puVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_2c = 0x5fd030;
      FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005fb2c4,PTR_DAT_0066b470);
      local_2c = 0x5fd03f;
      (**(code **)(**(int **)PTR_DAT_0066b470 + 0xec))();
    }
  }
  else {
    if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)PTR_DAT_0066adb0 * 0x2f8) == '\0') {
      local_2c = 0x5fd0d8;
      iVar5 = FUN_0044e8c4(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x22c));
      if (-1 < iVar5 + -1) {
        local_c = 0;
        puVar6 = (undefined4 *)PTR_DAT_0066accc;
        do {
          local_2c = 0x5fd104;
          iVar2 = FUN_0044e8f4(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x22c),local_c);
          local_2c = 0x5fd114;
          (**(code **)(**(int **)(iVar2 + 8) + 0xc))(*(int **)(iVar2 + 8),3,&local_40);
          local_2c = 0x5fd11c;
          uVar3 = FUN_00409ff8(local_40);
          *puVar6 = uVar3;
          local_c = local_c + 1;
          puVar6 = puVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else {
      local_2c = 0x5fd06f;
      local_20 = &stack0xfffffffc;
      iVar5 = FUN_0044e8c4(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x22c));
      if (-1 < iVar5 + -1) {
        local_c = 0;
        puVar6 = (undefined4 *)PTR_DAT_0066ac54;
        do {
          local_2c = 0x5fd09f;
          iVar2 = FUN_0044e8f4(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x22c),local_c);
          local_2c = 0x5fd0af;
          (**(code **)(**(int **)(iVar2 + 8) + 0xc))(*(int **)(iVar2 + 8),3,&local_3c);
          local_2c = 0x5fd0b7;
          uVar3 = FUN_00409ff8(local_3c);
          *puVar6 = uVar3;
          local_c = local_c + 1;
          puVar6 = puVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    local_2c = 0x5fd13f;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005fb2c4,PTR_DAT_0066b470);
    local_2c = 0x5fd14e;
    (**(code **)(**(int **)PTR_DAT_0066b470 + 0xec))();
  }
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_005fd170;
  local_24 = (undefined1 *)0x5fd168;
  FUN_004048f8(&local_40,0xb,puVar1);
  return;
}

