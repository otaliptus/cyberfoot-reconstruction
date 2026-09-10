// Address: 005ebb84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm87_bt_irprojogoClick(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 unaff_ESI;
  int iVar10;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 *local_2c;
  undefined1 **local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  
  local_1c = &stack0xfffffffc;
  iVar7 = 5;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_20 = &LAB_005ebfb4;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  puVar4 = &stack0xfffffffc;
  if (PTR_DAT_0066ac78[0xde] != '\0') {
    local_28 = (undefined1 **)0x5ebbc6;
    FUN_005e9970(param_1,*(undefined4 *)(PTR_DAT_0066ac78 + 8));
    puVar4 = local_1c;
  }
  local_1c = puVar4;
  bVar2 = true;
  iVar7 = 0xb;
  piVar8 = &DAT_006d3684;
  do {
    if (*piVar8 < 1) {
      local_28 = (undefined1 **)0x5ebbe4;
      FUN_00642c50(0x12d,&stack0xffffffec);
      local_28 = (undefined1 **)0x5ebbf5;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x3d8),unaff_ESI);
      local_28 = (undefined1 **)0x5ebc05;
      FUN_00466128(*(undefined4 *)(param_1 + 0x3d8),1);
      bVar2 = false;
      break;
    }
    piVar8 = piVar8 + 4;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (bVar2) {
    local_28 = (undefined1 **)0x5ebc28;
    iVar7 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
    if (-1 < iVar7 + -1) {
      iVar10 = 0;
      do {
        local_28 = &local_1c;
        local_2c = (undefined4 *)0x5ebc4f;
        (**(code **)(**(int **)(param_1 + 0x304) + 0x100))(*(int **)(param_1 + 0x304),0,iVar10);
        local_2c = (undefined4 *)0x5ebc5a;
        FUN_00404b6c(&stack0xffffffe8,local_1c);
        local_2c = (undefined4 *)0x5ebc62;
        iVar5 = FUN_00409ff8(unaff_EDI);
        *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + iVar5 * 0x130) = 0;
        local_2c = &local_24;
        (**(code **)(**(int **)(param_1 + 0x304) + 0x100))(*(int **)(param_1 + 0x304),0,iVar10);
        FUN_00404b6c(&local_20,local_24);
        iVar5 = FUN_00409ff8(local_20);
        *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x50 + iVar5 * 0x130) = 0;
        (**(code **)(**(int **)(param_1 + 0x304) + 0x100))
                  (*(int **)(param_1 + 0x304),0,iVar10,&local_2c);
        local_28 = (undefined1 **)0x5ebcd6;
        FUN_00404b6c(&local_28,local_2c);
        ppuVar3 = local_28;
        local_28 = (undefined1 **)0x5ebcde;
        iVar5 = FUN_00409ff8(ppuVar3);
        *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x85 + iVar5 * 0x130) = 0;
        iVar10 = iVar10 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    local_28 = (undefined1 **)0x5ebd05;
    iVar10 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b238);
    local_28 = (undefined1 **)(iVar10 + 1);
    local_2c = (undefined4 *)0x5ebd1e;
    FUN_004060a8(PTR_DAT_0066b238,PTR_DAT_00488c00,1);
    *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) = iVar10;
    iVar7 = 0;
    iVar5 = 1;
    puVar9 = &DAT_006d3678;
    do {
      if (iVar5 == 1) {
        *(undefined4 *)(*(int *)PTR_DAT_0066b238 + 0x84 + iVar10 * 0xf8) = *puVar9;
        local_28 = (undefined1 **)0xb;
      }
      else {
        *(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar10 * 0xf8 + 0x54 + iVar5 * 4) = *puVar9;
        local_28 = (undefined1 **)(iVar5 + -1);
      }
      local_2c = (undefined4 *)0x5ebda6;
      FUN_005e6b70(param_1,*(undefined4 *)(PTR_DAT_0066ac78 + 8),puVar9[3]);
      if (*PTR_DAT_0066ae3c != '\0') {
        local_28 = (undefined1 **)0x5ebdc3;
        uVar6 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x304),&DAT_005ebfcc);
        local_28 = (undefined1 **)0x5ebdca;
        FUN_0050a804(uVar6,0);
      }
      if (*PTR_DAT_0066ae3c == '\0') {
        iVar1 = puVar9[3];
        if ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + iVar1 * 0x130) < 0xf) &&
           (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar1 * 0x130) != 0xc)) {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + iVar1 * 0x130) = 1;
          *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0xf5 + puVar9[3] * 0x130) = 1;
          local_28 = (undefined1 **)puVar9[3];
          local_2c = (undefined4 *)0x0;
          FUN_0064cbf0(*(undefined4 *)(PTR_DAT_0066ac78 + 8),2,6,0);
        }
        if (*(double *)(*(int *)PTR_DAT_0066b5b8 + 0x70 + puVar9[3] * 0x130) <
            *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10)) {
          piVar8 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + puVar9[3] * 0x130);
          *piVar8 = *piVar8 + -10;
          if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + puVar9[3] * 0x130) < 0) {
            *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + puVar9[3] * 0x130) = 5;
          }
        }
      }
      iVar5 = iVar5 + 1;
      puVar9 = puVar9 + 4;
    } while (iVar5 != 0xc);
    iVar5 = 7;
    piVar8 = &DAT_006d3734;
    do {
      if (0 < *piVar8) {
        *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + *piVar8 * 0x130) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x50 + *piVar8 * 0x130) = 2;
        iVar7 = iVar7 + 1;
        *(int *)(*(int *)PTR_DAT_0066b238 + iVar10 * 0xf8 + 0x3c + iVar7 * 4) = *piVar8;
      }
      piVar8 = piVar8 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xa0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) = 0;
    local_28 = (undefined1 **)0x5ebf2f;
    FUN_0064fbb8(0,*(undefined4 *)(PTR_DAT_0066ac78 + 8));
    local_28 = (undefined1 **)0x5ebf37;
    FUN_00642c6c(iVar10);
    *(undefined4 *)PTR_DAT_0066b484 = 0;
    local_28 = (undefined1 **)0x5ebf4a;
    FUN_00483d64(DAT_006d34e8);
    if (*PTR_DAT_0066ae3c == '\0') {
      local_28 = (undefined1 **)0x5ebf60;
      FUN_00636068(*(undefined4 *)PTR_DAT_0066b054);
    }
    else {
      local_28 = (undefined1 **)0x5ebf6e;
      FUN_005d0b34(*(undefined4 *)PTR_DAT_0066b5d0);
    }
  }
  puVar4 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_005ebfbb;
  local_20 = (undefined1 *)0x5ebf83;
  FUN_00404ff0(&local_2c,local_24,puVar4);
  local_20 = (undefined1 *)0x5ebf8b;
  FUN_004048d4(&local_28);
  local_20 = (undefined1 *)0x5ebf93;
  FUN_00404ff0(&local_24);
  local_20 = (undefined1 *)0x5ebf9b;
  FUN_004048d4(&local_20);
  local_20 = (undefined1 *)0x5ebfa3;
  FUN_00404ff0(&local_1c);
  local_20 = (undefined1 *)0x5ebfab;
  FUN_004048d4(&stack0xffffffe8);
  local_20 = (undefined1 *)0x5ebfb3;
  FUN_00404ff0(&stack0xffffffec);
  return;
}

