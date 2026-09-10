// Address: 005f4480
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f4480(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 in_stack_ffffffc0;
  undefined1 *puVar8;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
    local_30 = 0x14;
    local_2c = 0x13;
  }
  else {
    local_30 = 10;
    local_2c = 9;
  }
  local_20 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066aca0,param_2,param_3,param_1);
  if (-1 < local_20) {
    local_20 = local_20 + 1;
    local_24 = (undefined1 *)0x0;
    do {
      *(undefined1 **)PTR_DAT_0066b484 = local_24;
      local_1c = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + (int)local_24 * 0x294);
      if (0 < local_1c) {
        local_34 = 1;
        do {
          iVar4 = 0;
          if (local_30 != 0) {
            local_18 = local_30;
            iVar5 = 1;
            do {
              iVar4 = iVar4 + 1;
              in_stack_ffffffc0 = 0x5f453f;
              FUN_004060a8(&DAT_006d3f88,PTR_DAT_005f2a80,1,iVar4);
              DAT_006d3f88[iVar4 * 10 + -10] =
                   *(int *)(*(int *)PTR_DAT_0066aca0 + (int)local_24 * 0x294 + local_34 * 0x50 +
                            -0x54 + iVar5 * 4);
              iVar2 = *(int *)(*(int *)PTR_DAT_0066aca0 + (int)local_24 * 0x294 + local_34 * 0x50 +
                               -0x54 + iVar5 * 4);
              DAT_006d3f88[iVar4 * 10 + -9] =
                   *(int *)(*(int *)PTR_DAT_0066af70 + 0xb8 + iVar2 * 0x2f8);
              DAT_006d3f88[iVar4 * 10 + -8] =
                   *(int *)(*(int *)PTR_DAT_0066af70 + 0xe0 + iVar2 * 0x2f8);
              DAT_006d3f88[iVar4 * 10 + -7] =
                   *(int *)(*(int *)PTR_DAT_0066af70 + 0x108 + iVar2 * 0x2f8);
              DAT_006d3f88[iVar4 * 10 + -6] =
                   *(int *)(*(int *)PTR_DAT_0066af70 + 0xe0 + iVar2 * 0x2f8) -
                   (*(int *)(*(int *)PTR_DAT_0066af70 + 0x108 + iVar2 * 0x2f8) +
                   *(int *)(*(int *)PTR_DAT_0066af70 + 0x130 + iVar2 * 0x2f8));
              DAT_006d3f88[iVar4 * 10 + -5] =
                   *(int *)(*(int *)PTR_DAT_0066af70 + 0x130 + iVar2 * 0x2f8);
              DAT_006d3f88[iVar4 * 10 + -4] =
                   *(int *)(*(int *)PTR_DAT_0066af70 + 0x158 + iVar2 * 0x2f8);
              DAT_006d3f88[iVar4 * 10 + -3] =
                   *(int *)(*(int *)PTR_DAT_0066af70 + 0x180 + iVar2 * 0x2f8);
              DAT_006d3f88[iVar4 * 10 + -2] =
                   *(int *)(*(int *)PTR_DAT_0066af70 + 0x158 + iVar2 * 0x2f8) -
                   *(int *)(*(int *)PTR_DAT_0066af70 + 0x180 + iVar2 * 0x2f8);
              iVar5 = iVar5 + 1;
              local_18 = local_18 + -1;
            } while (local_18 != 0);
          }
          DAT_006d3f44 = FUN_00405eec(DAT_006d3f88);
          local_28 = DAT_006d3f44 + -1;
          puVar8 = &LAB_005f2b00;
          FUN_004bcdb0(DAT_006d3f88,0x28,0);
          if (-1 < iVar4 + -1) {
            iVar5 = 0;
            local_20 = iVar4;
            do {
              *(int *)(*(int *)PTR_DAT_0066af70 + 0x1a8 + DAT_006d3f88[iVar5 * 10] * 0x2f8) =
                   iVar5 + 1;
              *(int *)(*(int *)PTR_DAT_0066aca0 + local_2c * 0x294 + local_28 * 0x50 + 0x100 +
                      iVar5 * 4) = DAT_006d3f88[iVar5 * 10];
              iVar5 = iVar5 + 1;
              local_20 = local_20 + -1;
            } while (local_20 != 0);
          }
          if (*PTR_DAT_0066ace0 != '\0') {
            FUN_0064c36c(1,*DAT_006d3f88,
                         *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + *DAT_006d3f88 * 0x2f8),1,
                         0xffffffff,0xffffffff,local_28);
            FUN_0064c4bc(1,*DAT_006d3f88,
                         *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + *DAT_006d3f88 * 0x2f8),
                         *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + *DAT_006d3f88 * 0x2f8),1,
                         local_28);
            FUN_0064c36c(1,DAT_006d3f88[10],
                         *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + DAT_006d3f88[10] * 0x2f8)
                         ,2,0xffffffff,0xffffffff,local_28);
            FUN_0064c4bc(1,DAT_006d3f88[10],
                         *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + DAT_006d3f88[10] * 0x2f8)
                         ,*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + *DAT_006d3f88 * 0x2f8),2
                         ,local_28);
            if (local_28 == 1) {
              if (-1 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + *DAT_006d3f88 * 0x2f8)) {
                piVar1 = (int *)(*(int *)PTR_DAT_0066b718 + 0x48 +
                                *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + *DAT_006d3f88 * 0x2f8) *
                                0x80);
                *piVar1 = *piVar1 + 1;
              }
              puVar7 = &DAT_005f4ffc;
              uVar6 = 0x5f487d;
              FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + *DAT_006d3f88 * 0x2f8),
                           *DAT_006d3f88,1,&DAT_005f4ffc);
              puVar8 = &DAT_005f5008;
              FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + *DAT_006d3f88 * 0x2f8),
                           *DAT_006d3f88,0x19,uVar6);
              FUN_00657674(1,*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + local_34 * 0x294),1,
                           0xffffffff,0xffffffff);
              if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
                puVar3 = &DAT_006acfc0;
              }
              else {
                puVar3 = (undefined *)0x4c4b40;
              }
              *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + *DAT_006d3f88 * 0x2f8) =
                   (longlong)
                   ROUND((float)*(longlong *)
                                 (*(int *)PTR_DAT_0066af70 + 0x48 + *DAT_006d3f88 * 0x2f8) +
                         (float)(int)puVar3 * _DAT_005f500c);
              piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x24 + *DAT_006d3f88 * 0x38);
              *piVar1 = (int)(puVar3 + *piVar1);
              local_24 = (undefined1 *)0x3567e0;
              *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + DAT_006d3f88[10] * 0x2f8) =
                   (longlong)
                   ROUND((float)*(longlong *)
                                 (*(int *)PTR_DAT_0066af70 + 0x48 + DAT_006d3f88[10] * 0x2f8) +
                         _DAT_005f500c * 3.5e+06);
              piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x24 + DAT_006d3f88[10] * 0x38);
              *piVar1 = *piVar1 + 3500000;
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2b8 + *DAT_006d3f88 * 0x2f8);
              *piVar1 = *piVar1 + 0xc;
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2b8 + DAT_006d3f88[10] * 0x2f8);
              *piVar1 = *piVar1 + 10;
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2b8 + DAT_006d3f88[0x14] * 0x2f8);
              *piVar1 = *piVar1 + 8;
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2b8 + DAT_006d3f88[0x1e] * 0x2f8);
              *piVar1 = *piVar1 + 7;
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2b8 + DAT_006d3f88[0x28] * 0x2f8);
              *piVar1 = *piVar1 + 6;
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2b8 + DAT_006d3f88[0x32] * 0x2f8);
              *piVar1 = *piVar1 + 5;
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2b8 + DAT_006d3f88[0x3c] * 0x2f8);
              *piVar1 = *piVar1 + 4;
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2b8 + DAT_006d3f88[0x46] * 0x2f8);
              *piVar1 = *piVar1 + 3;
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2b8 + DAT_006d3f88[0x50] * 0x2f8);
              *piVar1 = *piVar1 + 2;
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2b8 + DAT_006d3f88[0x5a] * 0x2f8);
              *piVar1 = *piVar1 + 1;
              if (-1 < local_28) {
                local_28 = local_28 + 1;
                iVar4 = 0;
                do {
                  FUN_006490a8(DAT_006d3f88[iVar4 * 10],iVar4 + 1,1,puVar7);
                  iVar4 = iVar4 + 1;
                  local_28 = local_28 + -1;
                } while (local_28 != 0);
              }
            }
            else if (local_28 == 2) {
              *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + *DAT_006d3f88 * 0x2f8) =
                   (longlong)
                   ROUND((float10)*(longlong *)
                                   (*(int *)PTR_DAT_0066af70 + 0x48 + *DAT_006d3f88 * 0x2f8) +
                         _DAT_005f5010);
              piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x24 + *DAT_006d3f88 * 0x38);
              *piVar1 = *piVar1 + 2500000;
              *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + DAT_006d3f88[10] * 0x2f8) =
                   (longlong)
                   ROUND((float)*(longlong *)
                                 (*(int *)PTR_DAT_0066af70 + 0x48 + DAT_006d3f88[10] * 0x2f8) +
                         _DAT_005f501c);
              piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x24 + DAT_006d3f88[10] * 0x38);
              *piVar1 = *piVar1 + 2000000;
              if (-1 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + *DAT_006d3f88 * 0x2f8)) {
                piVar1 = (int *)(*(int *)PTR_DAT_0066b718 + 0x6c +
                                *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + *DAT_006d3f88 * 0x2f8) *
                                0x80);
                *piVar1 = *piVar1 + 1;
              }
              puVar8 = &DAT_005f4ffc;
              FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + *DAT_006d3f88 * 0x2f8),
                           *DAT_006d3f88,1);
              if (-1 < (int)puVar8) {
                local_24 = puVar8 + 1;
                iVar4 = 0;
                do {
                  FUN_006490a8(DAT_006d3f88[iVar4 * 10],iVar4 + 1,1,in_stack_ffffffc0);
                  iVar4 = iVar4 + 1;
                  local_24 = local_24 + -1;
                } while (local_24 != (undefined1 *)0x0);
              }
              FUN_00657674(1,*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + local_30 * 0x294),2,
                           0xffffffff,0xffffffff);
            }
            else if (local_28 == 3) {
              *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + *DAT_006d3f88 * 0x2f8) =
                   (longlong)
                   ROUND((float10)*(longlong *)
                                   (*(int *)PTR_DAT_0066af70 + 0x48 + *DAT_006d3f88 * 0x2f8) +
                         _DAT_005f5020);
              piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x24 + *DAT_006d3f88 * 0x38);
              *piVar1 = *piVar1 + 1500000;
              *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + DAT_006d3f88[10] * 0x2f8) =
                   (longlong)
                   ROUND((float)*(longlong *)
                                 (*(int *)PTR_DAT_0066af70 + 0x48 + DAT_006d3f88[10] * 0x2f8) +
                         _DAT_005f502c);
              piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x24 + DAT_006d3f88[10] * 0x38);
              *piVar1 = *piVar1 + 1000000;
              if (-1 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + *DAT_006d3f88 * 0x2f8)) {
                piVar1 = (int *)(*(int *)PTR_DAT_0066b718 + 0x70 +
                                *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + *DAT_006d3f88 * 0x2f8) *
                                0x80);
                *piVar1 = *piVar1 + 1;
              }
              puVar8 = &DAT_005f4ffc;
              FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + *DAT_006d3f88 * 0x2f8),
                           *DAT_006d3f88,1);
              if (-1 < (int)puVar8) {
                local_24 = puVar8 + 1;
                iVar4 = 0;
                do {
                  FUN_006490a8(DAT_006d3f88[iVar4 * 10],iVar4 + 1,1,in_stack_ffffffc0);
                  iVar4 = iVar4 + 1;
                  local_24 = local_24 + -1;
                } while (local_24 != (undefined1 *)0x0);
              }
              FUN_00657674(1,*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + local_30 * 0x294),3,
                           0xffffffff,0xffffffff);
            }
            else if (local_28 == 4) {
              *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + *DAT_006d3f88 * 0x2f8) =
                   (longlong)
                   ROUND((float10)*(longlong *)
                                   (*(int *)PTR_DAT_0066af70 + 0x48 + *DAT_006d3f88 * 0x2f8) +
                         _DAT_005f5030);
              piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x24 + *DAT_006d3f88 * 0x38);
              *piVar1 = *piVar1 + 750000;
              *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + DAT_006d3f88[10] * 0x2f8) =
                   (longlong)
                   ROUND((float)*(longlong *)
                                 (*(int *)PTR_DAT_0066af70 + 0x48 + DAT_006d3f88[10] * 0x2f8) +
                         _DAT_005f503c);
              piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x24 + DAT_006d3f88[10] * 0x38);
              *piVar1 = *piVar1 + 500000;
              if (-1 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + *DAT_006d3f88 * 0x2f8)) {
                piVar1 = (int *)(*(int *)PTR_DAT_0066b718 + 0x74 +
                                *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + *DAT_006d3f88 * 0x2f8) *
                                0x80);
                *piVar1 = *piVar1 + 1;
              }
              puVar8 = &DAT_005f4ffc;
              FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + *DAT_006d3f88 * 0x2f8),
                           *DAT_006d3f88,1);
              if (-1 < (int)puVar8) {
                local_24 = puVar8 + 1;
                iVar4 = 0;
                do {
                  FUN_006490a8(DAT_006d3f88[iVar4 * 10],iVar4 + 1,1,in_stack_ffffffc0);
                  iVar4 = iVar4 + 1;
                  local_24 = local_24 + -1;
                } while (local_24 != (undefined1 *)0x0);
              }
              FUN_00657674(1,*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + local_30 * 0x294),4,
                           0xffffffff,0xffffffff);
            }
          }
          in_stack_ffffffc0 = 0x5f4f37;
          FUN_004060a8(&DAT_006d3f88,PTR_DAT_005f2a80,1,0,puVar8);
          local_34 = local_34 + 1;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  local_20 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066afa0);
  if (-1 < local_20 + -1) {
    iVar4 = 0;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066afa0 + 0x18 + iVar4 * 0x48) == 1) &&
         (*(double *)(*(int *)PTR_DAT_0066afa0 + 0x30 + iVar4 * 0x48) ==
          *(double *)(PTR_DAT_0066b574 + *(int *)PTR_DAT_0066adac * 0x18 + -0x10))) {
        FUN_00646a38(1,*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar4 * 0x48),
                     *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar4 * 0x48),0,
                     *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0xc + iVar4 * 0x48),
                     *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 8 + iVar4 * 0x48));
      }
      iVar4 = iVar4 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  return;
}

