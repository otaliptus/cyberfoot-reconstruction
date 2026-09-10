// Address: 00642c6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00642c6c(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  int **ppiVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int *local_dc;
  int *local_d8 [10];
  int local_b0 [10];
  undefined4 local_88;
  int aiStack_78 [10];
  int local_50 [8];
  int local_30 [8];
  
  puVar3 = PTR_DAT_0066b238;
  local_ec = 0;
  iVar7 = -1;
  bVar2 = false;
  iVar8 = 0x19;
  piVar5 = aiStack_78;
  do {
    piVar5 = piVar5 + 1;
    *piVar5 = 0;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar8 = 0xb;
  while ((iVar1 = *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + iVar8 * 4), iVar1 < 1 ||
         (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar1 * 0x130) < 0))) {
    iVar8 = iVar8 + -1;
    if (iVar8 == 0) {
LAB_00642cf3:
      if ((-1 < iVar7) && (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar7 * 0x2f8) != '\0')) {
        bVar2 = true;
      }
      iVar7 = 1;
      ppiVar4 = local_d8;
      piVar5 = local_b0 + 3;
      do {
        ppiVar4 = ppiVar4 + 1;
        *ppiVar4 = (int *)0x0;
        *piVar5 = 0;
        *(undefined4 *)(*(int *)puVar3 + param_1 * 0xf8 + 0x84 + iVar7 * 4) = 0;
        *(undefined4 *)(*(int *)puVar3 + param_1 * 0xf8 + 0xb4 + iVar7 * 4) = 0;
        iVar7 = iVar7 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar7 != 0xd);
      iVar7 = 1;
      do {
        local_f8 = 3;
        puVar9 = PTR_DAT_0066b1ec;
        do {
          if ((0 < *(int *)(puVar9 + *(int *)(*(int *)puVar3 + param_1 * 0xf8 + 0x58 + iVar7 * 4) *
                                     0xc + -0xc)) &&
             (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 +
                       *(int *)(*(int *)puVar3 + param_1 * 0xf8 + -4 + iVar7 * 4) * 0x130) != '\0'))
          {
            if (*(int *)(PTR_DAT_0066b734 +
                        *(int *)(*(int *)puVar3 + param_1 * 0xf8 + 0x58 + iVar7 * 4) * 0xc + -0xc)
                != *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 +
                           *(int *)(*(int *)puVar3 + param_1 * 0xf8 + -4 + iVar7 * 4) * 0x130)) {
              FUN_00402c38();
            }
            iVar8 = FUN_00402c38();
            local_d8[*(int *)(puVar9 + *(int *)(*(int *)puVar3 + param_1 * 0xf8 + 0x58 + iVar7 * 4)
                                       * 0xc + -0xc)] =
                 (int *)((int)local_d8[*(int *)(puVar9 + *(int *)(*(int *)puVar3 + param_1 * 0xf8 +
                                                                  0x58 + iVar7 * 4) * 0xc + -0xc)] +
                        iVar8);
            if (*(int *)(PTR_DAT_0066b734 +
                        *(int *)(*(int *)puVar3 + param_1 * 0xf8 + 0x58 + iVar7 * 4) * 0xc + -0xc)
                != *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 +
                           *(int *)(*(int *)puVar3 + param_1 * 0xf8 + -4 + iVar7 * 4) * 0x130)) {
              FUN_00402c38();
            }
            iVar8 = FUN_00402c38();
            local_b0[*(int *)(puVar9 + *(int *)(*(int *)puVar3 + param_1 * 0xf8 + 0x58 + iVar7 * 4)
                                       * 0xc + -0xc) + 2] =
                 local_b0[*(int *)(puVar9 + *(int *)(*(int *)puVar3 + param_1 * 0xf8 + 0x58 +
                                                    iVar7 * 4) * 0xc + -0xc) + 2] + iVar8;
            aiStack_78[*(int *)(*(int *)puVar3 + param_1 * 0xf8 + 0x58 + iVar7 * 4)] =
                 aiStack_78[*(int *)(*(int *)puVar3 + param_1 * 0xf8 + 0x58 + iVar7 * 4)] + 1;
          }
          local_f8 = local_f8 + -1;
          puVar9 = puVar9 + 4;
        } while (local_f8 != 0);
        if (*(int *)(*(int *)puVar3 + param_1 * 0xf8 + 0x58 + iVar7 * 4) == 1) {
          iVar8 = FUN_00402c38();
          local_ec = local_ec + iVar8;
          if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 +
                      *(int *)(*(int *)puVar3 + param_1 * 0xf8 + -4 + iVar7 * 4) * 0x130) != 0) {
            local_ec = FUN_00402c38();
            local_b0[4] = FUN_00402c38();
            local_f4 = 10;
            piVar5 = local_b0 + 5;
            do {
              iVar8 = FUN_00402c38();
              *piVar5 = iVar8;
              piVar5 = piVar5 + 1;
              local_f4 = local_f4 + -1;
            } while (local_f4 != 0);
            *(undefined1 *)(*(int *)puVar3 + 0xf4 + param_1 * 0xf8) = 1;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 0xc);
      local_f0 = 0;
      iVar7 = 0;
      iVar8 = 6;
      local_dc = aiStack_78 + 3;
      do {
        if (0 < *local_dc) {
          local_f0 = local_f0 + 1;
        }
        local_dc = local_dc + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar8 = 8;
      local_d8[0] = aiStack_78 + 2;
      do {
        if (0 < *local_d8[0]) {
          iVar7 = iVar7 + 1;
        }
        local_d8[0] = local_d8[0] + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      if ((bVar2) && ((local_f0 == 1 || (iVar7 < 3)))) {
        iVar7 = 0xc;
        ppiVar4 = local_d8;
        do {
          ppiVar4 = ppiVar4 + 1;
          piVar5 = (int *)FUN_00402c38();
          *ppiVar4 = piVar5;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        iVar7 = 0xc;
        piVar5 = local_b0 + 3;
        do {
          iVar8 = FUN_00402c38();
          *piVar5 = iVar8;
          piVar5 = piVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        local_b0[4] = FUN_00402c38();
        local_ec = FUN_00402c38();
        *(undefined1 *)(*(int *)puVar3 + 0xf4 + param_1 * 0xf8) = 1;
      }
      if (local_f0 == 0) {
        local_ec = FUN_00402c38();
        iVar7 = 0xc;
        piVar5 = local_b0 + 3;
        do {
          iVar8 = FUN_00402c38();
          *piVar5 = iVar8;
          piVar5 = piVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        iVar7 = 0xc;
        ppiVar4 = local_d8;
        do {
          ppiVar4 = ppiVar4 + 1;
          piVar5 = (int *)FUN_00402c38();
          *ppiVar4 = piVar5;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        if (bVar2) {
          *(undefined1 *)(*(int *)puVar3 + 0xf4 + param_1 * 0xf8) = 1;
        }
      }
      if (3 < local_f0) {
        local_ec = FUN_00402c38();
        iVar7 = 3;
        piVar5 = local_b0 + 3;
        do {
          iVar8 = FUN_00402c38();
          *piVar5 = iVar8;
          piVar5 = piVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        iVar7 = 0xc;
        ppiVar4 = local_d8;
        do {
          ppiVar4 = ppiVar4 + 1;
          piVar5 = (int *)FUN_00402c38();
          *ppiVar4 = piVar5;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        if (bVar2) {
          *(undefined1 *)(*(int *)puVar3 + 0xf4 + param_1 * 0xf8) = 1;
        }
      }
      local_f0 = 0;
      iVar7 = 6;
      piVar5 = local_50;
      do {
        piVar5 = piVar5 + 1;
        if (0 < *piVar5) {
          local_f0 = local_f0 + 1;
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if (4 < local_f0) {
        local_b0[7] = FUN_00402c38();
        local_88 = FUN_00402c38();
        if (bVar2) {
          *(undefined1 *)(*(int *)puVar3 + 0xf4 + param_1 * 0xf8) = 1;
        }
      }
      local_f0 = 0;
      iVar7 = 8;
      piVar5 = local_30;
      do {
        if (0 < *piVar5) {
          local_f0 = local_f0 + 1;
        }
        piVar5 = piVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if (3 < local_f0) {
        iVar7 = 3;
        piVar5 = local_b0;
        do {
          iVar8 = FUN_00402c38();
          *piVar5 = iVar8;
          piVar5 = piVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        iVar7 = 9;
        ppiVar4 = local_d8;
        do {
          ppiVar4 = ppiVar4 + 1;
          piVar5 = (int *)FUN_00402c38();
          *ppiVar4 = piVar5;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        iVar7 = 0xc;
        piVar5 = local_b0 + 3;
        do {
          iVar8 = FUN_00402c38();
          *piVar5 = iVar8;
          piVar5 = piVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        if (bVar2) {
          *(undefined1 *)(*(int *)puVar3 + 0xf4 + param_1 * 0xf8) = 1;
        }
      }
      local_f0 = 0;
      iVar7 = 8;
      piVar5 = local_50;
      do {
        if (0 < *piVar5) {
          local_f0 = local_f0 + 1;
        }
        piVar5 = piVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if (5 < local_f0) {
        iVar7 = 6;
        piVar5 = local_b0 + 6;
        do {
          iVar8 = FUN_00402c38();
          *piVar5 = iVar8;
          piVar5 = piVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        if (bVar2) {
          *(undefined1 *)(*(int *)puVar3 + 0xf4 + param_1 * 0xf8) = 1;
        }
      }
      *(undefined4 *)(*(int *)puVar3 + 0xec + param_1 * 0xf8) = 0;
      *(undefined4 *)(*(int *)puVar3 + 0xf0 + param_1 * 0xf8) = 0;
      iVar7 = 1;
      ppiVar4 = local_d8;
      local_d8[0] = (int *)PTR_DAT_0066b188;
      local_dc = local_b0 + 3;
      do {
        ppiVar4 = ppiVar4 + 1;
        uVar6 = FUN_00402c38();
        *(undefined4 *)(*(int *)puVar3 + param_1 * 0xf8 + 0x84 + iVar7 * 4) = uVar6;
        uVar6 = FUN_00402c38();
        *(undefined4 *)(*(int *)puVar3 + param_1 * 0xf8 + 0xb4 + iVar7 * 4) = uVar6;
        *(int **)(*(int *)puVar3 + param_1 * 0xf8 + 0x84 + iVar7 * 4) = *ppiVar4;
        *(int *)(*(int *)puVar3 + param_1 * 0xf8 + 0xb4 + iVar7 * 4) = *local_dc;
        piVar5 = (int *)(*(int *)puVar3 + 0xec + param_1 * 0xf8);
        *piVar5 = *piVar5 + *(int *)(*(int *)puVar3 + param_1 * 0xf8 + 0x84 + iVar7 * 4);
        piVar5 = (int *)(*(int *)puVar3 + 0xf0 + param_1 * 0xf8);
        *piVar5 = *piVar5 + *(int *)(*(int *)puVar3 + param_1 * 0xf8 + 0xb4 + iVar7 * 4);
        iVar7 = iVar7 + 1;
        local_dc = local_dc + 1;
        local_d8[0] = local_d8[0] + 1;
      } while (iVar7 != 0xd);
      *(int *)(*(int *)puVar3 + 0xe8 + param_1 * 0xf8) = local_ec;
      return;
    }
  }
  iVar7 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 +
                  *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + iVar8 * 4) * 0x130);
  goto LAB_00642cf3;
}

