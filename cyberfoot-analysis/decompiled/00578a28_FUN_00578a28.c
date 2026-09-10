// Address: 00578a28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00578a28(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_20;
  int local_1c;
  int local_14;
  
  puVar1 = PTR_DAT_0066b5b8;
  local_1c = *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40);
  iVar6 = local_1c + -1;
  FUN_004060a8(&DAT_006d2168,PTR_DAT_00578714,1,0);
  FUN_004060a8(&DAT_006d2164,PTR_DAT_005786ec,1,0);
  FUN_004060a8(&DAT_006d2164,PTR_DAT_005786ec,1,iVar6);
  FUN_004060a8(&DAT_006d2178,PTR_DAT_00578764,1,0);
  local_14 = FUN_00405ef4(*(undefined4 *)puVar1);
  if (-1 < local_14) {
    local_14 = local_14 + 1;
    iVar7 = 0;
    do {
      if ((((-1 < *(int *)(*(int *)puVar1 + 0x20 + iVar7 * 0x130)) &&
           (*(char *)(*(int *)puVar1 + 0x120 + iVar7 * 0x130) == '\0')) &&
          (*(char *)(*(int *)puVar1 + 0x15 + iVar7 * 0x130) == '\0')) &&
         (((*(int *)(*(int *)puVar1 + 0x100 + iVar7 * 0x130) < 2 &&
           (*(char *)(*(int *)puVar1 + 0x110 + iVar7 * 0x130) == '\0')) &&
          (*(int *)(*(int *)puVar1 + 0x20 + iVar7 * 0x130) <= iVar6)))) {
        iVar2 = FUN_0064f2d0(*(undefined4 *)
                              (*(int *)PTR_DAT_0066af70 + 0x3c +
                              *(int *)(*(int *)puVar1 + 0x20 + iVar7 * 0x130) * 0x2f8));
        if ((iVar2 < 2) &&
           (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                     *(int *)(*(int *)puVar1 + 0x20 + iVar7 * 0x130) * 0x2f8) == '\0')) {
          iVar2 = FUN_00405eec(DAT_006d2178);
          FUN_004060a8(&DAT_006d2178,PTR_DAT_00578764,1,iVar2 + 1);
          iVar2 = FUN_00405ef4(DAT_006d2178);
          *(int *)(DAT_006d2178 + iVar2 * 0x18) = iVar7;
          iVar2 = FUN_00405ef4(DAT_006d2178);
          *(undefined4 *)(DAT_006d2178 + 0xc + iVar2 * 0x18) =
               *(undefined4 *)(*(int *)puVar1 + 0x20 + iVar7 * 0x130);
          iVar2 = FUN_00405ef4(DAT_006d2178);
          *(undefined4 *)(DAT_006d2178 + 4 + iVar2 * 0x18) =
               *(undefined4 *)(*(int *)puVar1 + 0x28 + iVar7 * 0x130);
          iVar2 = FUN_00405ef4(DAT_006d2178);
          *(undefined4 *)(DAT_006d2178 + 8 + iVar2 * 0x18) =
               *(undefined4 *)(*(int *)puVar1 + 0x24 + iVar7 * 0x130);
          iVar2 = FUN_00405ef4(DAT_006d2178);
          *(undefined4 *)(DAT_006d2178 + 0x10 + iVar2 * 0x18) =
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0x58 +
                *(int *)(*(int *)puVar1 + 0x20 + iVar7 * 0x130) * 0x2f8);
          iVar2 = FUN_00405ef4(DAT_006d2178);
          puVar8 = (undefined4 *)(DAT_006d2178 + 0x14 + iVar2 * 0x18);
          uVar3 = FUN_004032c8(500);
          *puVar8 = uVar3;
        }
      }
      iVar7 = iVar7 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  DAT_006d2170 = FUN_00405eec(DAT_006d2178);
  iVar7 = DAT_006d2170 + -1;
  FUN_004bcdb0(DAT_006d2178,0x18,0,&LAB_00578804);
  if (-1 < iVar6) {
    iVar6 = 0;
    do {
      if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar6 * 0x2f8) == '\0') {
        iVar2 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar6 * 0x2f8));
        if (iVar2 < 2) {
          local_20 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + iVar6 * 0x2f8);
          if ((iVar7 <= iVar6) || (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar6 * 0x2f8) == 0))
          {
            local_20 = -1;
          }
          iVar2 = 0;
          puVar8 = &DAT_00669e68;
          do {
            iVar4 = *(int *)(*(int *)PTR_DAT_0066af70 + iVar6 * 0x2f8 + 0x68 + iVar2 * 4);
            if ((int)puVar8[local_20 * 5 + 5] < iVar4) {
              iVar4 = iVar4 - puVar8[local_20 * 5 + 5];
              iVar5 = FUN_00405ef4(DAT_006d2178);
              if (-1 < iVar5) {
                do {
                  if (((iVar4 < 1) || (iVar6 != *(int *)(DAT_006d2178 + 0xc + iVar5 * 0x18))) ||
                     (iVar2 != *(int *)(DAT_006d2178 + 8 + iVar5 * 0x18))) {
                    if (iVar4 == 0) break;
                  }
                  else {
                    FUN_00578840(*(undefined4 *)(DAT_006d2178 + iVar5 * 0x18));
                    iVar4 = iVar4 + -1;
                  }
                  iVar5 = iVar5 + -1;
                } while (iVar5 != -1);
              }
            }
            iVar2 = iVar2 + 1;
            puVar8 = puVar8 + 1;
          } while (iVar2 != 5);
        }
      }
      iVar6 = iVar6 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  DAT_006d2170 = FUN_00405eec(DAT_006d2168);
  FUN_004bcdb0(DAT_006d2168,0x2c,0,&LAB_0057878c,DAT_006d2170 + -1);
  return;
}

