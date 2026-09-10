// Address: 005ec02c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm87_Button2Click(int param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 unaff_ESI;
  int iVar7;
  undefined1 **ppuVar8;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 *local_2c;
  undefined1 **local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  
  local_1c = &stack0xfffffffc;
  iVar4 = 5;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_20 = &LAB_005ec423;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  bVar1 = true;
  iVar4 = 0xb;
  piVar5 = &DAT_006d3684;
  do {
    if (*piVar5 < 1) {
      local_28 = (undefined1 **)0x5ec06d;
      FUN_00642c50(0x12d,&stack0xffffffec);
      local_28 = (undefined1 **)0x5ec07e;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x3d8),unaff_ESI);
      local_28 = (undefined1 **)0x5ec08e;
      FUN_00466128(*(undefined4 *)(param_1 + 0x3d8),1);
      bVar1 = false;
      puVar2 = local_1c;
      break;
    }
    piVar5 = piVar5 + 4;
    iVar4 = iVar4 + -1;
    puVar2 = &stack0xfffffffc;
  } while (iVar4 != 0);
  local_1c = puVar2;
  if (bVar1) {
    local_28 = (undefined1 **)0x5ec0b1;
    iVar4 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
    if (-1 < iVar4 + -1) {
      iVar7 = 0;
      do {
        local_28 = &local_1c;
        local_2c = (undefined4 *)0x5ec0d8;
        (**(code **)(**(int **)(param_1 + 0x304) + 0x100))(*(int **)(param_1 + 0x304),0,iVar7);
        local_2c = (undefined4 *)0x5ec0e3;
        FUN_00404b6c(&stack0xffffffe8,local_1c);
        local_2c = (undefined4 *)0x5ec0eb;
        iVar3 = FUN_00409ff8(unaff_EDI);
        *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + iVar3 * 0x130) = 0;
        local_2c = &local_24;
        (**(code **)(**(int **)(param_1 + 0x304) + 0x100))(*(int **)(param_1 + 0x304),0,iVar7);
        FUN_00404b6c(&local_20,local_24);
        iVar3 = FUN_00409ff8(local_20);
        *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x50 + iVar3 * 0x130) = 0;
        (**(code **)(**(int **)(param_1 + 0x304) + 0x100))
                  (*(int **)(param_1 + 0x304),0,iVar7,&local_2c);
        local_28 = (undefined1 **)0x5ec15f;
        FUN_00404b6c(&local_28,local_2c);
        ppuVar8 = local_28;
        local_28 = (undefined1 **)0x5ec167;
        iVar3 = FUN_00409ff8(ppuVar8);
        *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x85 + iVar3 * 0x130) = 0;
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_28 = (undefined1 **)0x5ec18e;
    iVar7 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b238);
    local_28 = (undefined1 **)(iVar7 + 1);
    local_2c = (undefined4 *)0x5ec1a7;
    FUN_004060a8(PTR_DAT_0066b238,PTR_DAT_00488c00,1);
    *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) = iVar7;
    iVar4 = 0;
    ppuVar8 = (undefined1 **)0x1;
    puVar6 = &DAT_006d3678;
    do {
      if (ppuVar8 == (undefined1 **)0x1) {
        *(undefined4 *)(*(int *)PTR_DAT_0066b238 + 0x84 + iVar7 * 0xf8) = *puVar6;
      }
      else {
        *(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + 0x54 + (int)ppuVar8 * 4) = *puVar6
        ;
      }
      local_2c = (undefined4 *)0x5ec227;
      local_28 = ppuVar8;
      FUN_005e6b70(param_1,*(undefined4 *)(PTR_DAT_0066ac78 + 8),puVar6[3]);
      iVar3 = puVar6[3];
      if ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + iVar3 * 0x130) < 0xf) &&
         (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar3 * 0x130) != 0xc)) {
        *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + iVar3 * 0x130) = 1;
        *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0xf5 + puVar6[3] * 0x130) = 1;
        local_28 = (undefined1 **)puVar6[3];
        local_2c = (undefined4 *)0x0;
        FUN_0064cbf0(*(undefined4 *)(PTR_DAT_0066ac78 + 8),2,6,0);
      }
      if (*(double *)(*(int *)PTR_DAT_0066b5b8 + 0x70 + puVar6[3] * 0x130) <
          *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10)) {
        piVar5 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + puVar6[3] * 0x130);
        *piVar5 = *piVar5 + -10;
        if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + puVar6[3] * 0x130) < 0) {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + puVar6[3] * 0x130) = 5;
        }
      }
      ppuVar8 = (undefined1 **)((int)ppuVar8 + 1);
      puVar6 = puVar6 + 4;
    } while (ppuVar8 != (undefined1 **)0xc);
    iVar3 = 7;
    piVar5 = &DAT_006d3734;
    do {
      if (0 < *piVar5) {
        *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + *piVar5 * 0x130) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x50 + *piVar5 * 0x130) = 2;
        iVar4 = iVar4 + 1;
        *(int *)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + 0x3c + iVar4 * 4) = *piVar5;
      }
      piVar5 = piVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xa0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) = 0;
    local_28 = (undefined1 **)0x5ec37e;
    FUN_0064fbb8(0,*(undefined4 *)(PTR_DAT_0066ac78 + 8));
    local_28 = (undefined1 **)0x5ec386;
    FUN_00642c6c(iVar7);
    *(undefined4 *)PTR_DAT_0066b484 = 0;
    local_28 = (undefined1 **)0x5ec39b;
    iVar4 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
    if (-1 < iVar4) {
      iVar4 = iVar4 + 1;
      iVar7 = 0;
      do {
        local_28 = (undefined1 **)0x5ec3ab;
        FUN_004e24d0(iVar7);
        local_28 = (undefined1 **)0x5ec3b2;
        FUN_004e2a64(iVar7);
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_28 = (undefined1 **)0x5ec3ce;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00606ce4,PTR_DAT_0066b5c0);
    local_28 = (undefined1 **)0x5ec3dd;
    (**(code **)(**(int **)PTR_DAT_0066b5c0 + 0xec))();
  }
  puVar2 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_005ec42a;
  local_20 = (undefined1 *)0x5ec3f2;
  FUN_00404ff0(&local_2c,local_24,puVar2);
  local_20 = (undefined1 *)0x5ec3fa;
  FUN_004048d4(&local_28);
  local_20 = (undefined1 *)0x5ec402;
  FUN_00404ff0(&local_24);
  local_20 = (undefined1 *)0x5ec40a;
  FUN_004048d4(&local_20);
  local_20 = (undefined1 *)0x5ec412;
  FUN_00404ff0(&local_1c);
  local_20 = (undefined1 *)0x5ec41a;
  FUN_004048d4(&stack0xffffffe8);
  local_20 = (undefined1 *)0x5ec422;
  FUN_00404ff0(&stack0xffffffec);
  return;
}

