// Address: 005df914
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005df914(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_24;
  int local_1c;
  
  puVar5 = PTR_DAT_0066b5b8;
  iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
  if (0 < iVar6) {
    iVar8 = 1;
    do {
      if ((((-1 < *(int *)(*(int *)puVar5 + 0x20 + iVar8 * 0x130)) &&
           (*(char *)(*(int *)puVar5 + 0x120 + iVar8 * 0x130) != '\0')) &&
          (0x13 < *(int *)(*(int *)puVar5 + 0x18 + iVar8 * 0x130))) &&
         (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                   *(int *)(*(int *)puVar5 + 0x20 + iVar8 * 0x130) * 0x2f8) == '\0')) {
        bVar4 = false;
        iVar7 = *(int *)(*(int *)puVar5 + 0x20 + iVar8 * 0x130);
        if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar7 * 0x2f8) < 0x15) {
          if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar7 * 0x2f8) < 0x12) {
            if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar7 * 0x2f8) < 10) {
              local_1c = 4;
            }
            else {
              local_1c = 5;
            }
          }
          else {
            local_1c = 6;
          }
        }
        else {
          local_1c = 7;
        }
        iVar3 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar7 * 0x2f8);
        if (iVar3 - 1U < 10) {
          local_24 = 8;
        }
        else if (iVar3 - 0xbU < 5) {
          local_24 = 7;
        }
        else if (iVar3 - 0x10U < 5) {
          local_24 = 4;
        }
        else if (iVar3 - 0x15U < 5) {
          local_24 = 3;
        }
        if (*(int *)(PTR_DAT_0066ac78 + 0x3c) <= iVar7) {
          local_24 = 7;
        }
        if (*(int *)(*(int *)PTR_DAT_0066af70 + 100 +
                    *(int *)(*(int *)puVar5 + 0x20 + iVar8 * 0x130) * 0x2f8) <=
            *(int *)PTR_DAT_0066b610 - local_24) {
          bVar4 = local_1c <= *(int *)(*(int *)puVar5 + 0x30 + iVar8 * 0x130);
          if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x68 + iVar7 * 0x2f8) < 2) &&
             (*(int *)(*(int *)puVar5 + 0x24 + iVar8 * 0x130) == 0)) {
            bVar4 = true;
          }
          if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x6c + iVar7 * 0x2f8) < 2) &&
             (*(int *)(*(int *)puVar5 + 0x24 + iVar8 * 0x130) == 1)) {
            bVar4 = true;
          }
          if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x70 + iVar7 * 0x2f8) < 2) &&
             (*(int *)(*(int *)puVar5 + 0x24 + iVar8 * 0x130) == 2)) {
            bVar4 = true;
          }
          if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x74 + iVar7 * 0x2f8) < 2) &&
             (*(int *)(*(int *)puVar5 + 0x24 + iVar8 * 0x130) == 3)) {
            bVar4 = true;
          }
          if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x78 + iVar7 * 0x2f8) < 2) &&
             (*(int *)(*(int *)puVar5 + 0x24 + iVar8 * 0x130) == 4)) {
            bVar4 = true;
          }
          if ((2 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x68 + iVar7 * 0x2f8)) &&
             (*(int *)(*(int *)puVar5 + 0x24 + iVar8 * 0x130) == 0)) {
            bVar4 = false;
          }
          if ((3 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x6c + iVar7 * 0x2f8)) &&
             (*(int *)(*(int *)puVar5 + 0x24 + iVar8 * 0x130) == 1)) {
            bVar4 = false;
          }
          if ((3 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x70 + iVar7 * 0x2f8)) &&
             (*(int *)(*(int *)puVar5 + 0x24 + iVar8 * 0x130) == 2)) {
            bVar4 = false;
          }
          if ((9 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x74 + iVar7 * 0x2f8)) &&
             (*(int *)(*(int *)puVar5 + 0x24 + iVar8 * 0x130) == 3)) {
            bVar4 = false;
          }
          if ((4 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x78 + iVar7 * 0x2f8)) &&
             (*(int *)(*(int *)puVar5 + 0x24 + iVar8 * 0x130) == 4)) {
            bVar4 = false;
          }
        }
        if (bVar4) {
          iVar7 = *(int *)(*(int *)puVar5 + 0x20 + iVar8 * 0x130);
          if (*(int *)(*(int *)PTR_DAT_0066af70 + 100 + iVar7 * 0x2f8) < *(int *)PTR_DAT_0066b610) {
            switch(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar7 * 0x2f8)) {
            case 0:
              break;
            case 1:
              break;
            case 2:
              break;
            case 3:
              break;
            case 4:
            case 5:
            }
            iVar7 = FUN_00402c38();
            *(int *)(*(int *)puVar5 + 0x28 + iVar8 * 0x130) =
                 iVar7 + *(int *)(*(int *)puVar5 + 0x30 + iVar8 * 0x130);
            *(undefined1 *)(*(int *)puVar5 + 0x120 + iVar8 * 0x130) = 0;
            *(int *)(*(int *)puVar5 + 0x11c + iVar8 * 0x130) = *(int *)(PTR_DAT_0066ac78 + 0xc0) + 1
            ;
            *(undefined4 *)(*(int *)puVar5 + 0xe8 + iVar8 * 0x130) = 0;
            *(undefined4 *)(*(int *)puVar5 + 0xf0 + iVar8 * 0x130) = 0;
            *(undefined1 *)(*(int *)puVar5 + 0xec + iVar8 * 0x130) = 0;
            *(undefined1 *)(*(int *)puVar5 + 0xf5 + iVar8 * 0x130) = 0;
            *(undefined1 *)(*(int *)puVar5 + 0xf4 + iVar8 * 0x130) = 0;
            *(undefined4 *)(*(int *)puVar5 + 0xf8 + iVar8 * 0x130) = 0;
            *(undefined4 *)(*(int *)puVar5 + 0xe4 + iVar8 * 0x130) = 3;
            *(undefined4 *)(*(int *)puVar5 + 0x80 + iVar8 * 0x130) = 0;
            iVar7 = *(int *)puVar5;
            puVar1 = (undefined4 *)
                     (PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10);
            *(undefined4 *)(iVar7 + 0x68 + iVar8 * 0x130) = *puVar1;
            *(undefined4 *)(iVar7 + 0x6c + iVar8 * 0x130) = puVar1[1];
            piVar2 = (int *)(*(int *)PTR_DAT_0066af70 + 100 +
                            *(int *)(*(int *)puVar5 + 0x20 + iVar8 * 0x130) * 0x2f8);
            *piVar2 = *piVar2 + 1;
            piVar2 = (int *)(*(int *)PTR_DAT_0066af70 +
                             *(int *)(*(int *)puVar5 + 0x20 + iVar8 * 0x130) * 0x2f8 + 0x68 +
                            *(int *)(*(int *)puVar5 + 0x24 + iVar8 * 0x130) * 4);
            *piVar2 = *piVar2 + 1;
            iVar7 = FUN_004032c8(0x1e);
            FUN_00647c48(iVar7 + 10,iVar8);
            local_24 = 0;
            FUN_0064e824(*(undefined4 *)(*(int *)puVar5 + 0x20 + iVar8 * 0x130),0xffffffff,
                         0xffffffff);
          }
          else {
            local_24 = 0;
            FUN_0064e824(*(undefined4 *)(*(int *)puVar5 + 0x20 + iVar8 * 0x130),0xffffffff,iVar8);
          }
        }
        else {
          local_24 = 0;
          FUN_0064e824(*(undefined4 *)(*(int *)puVar5 + 0x20 + iVar8 * 0x130),0xffffffff,iVar8);
        }
      }
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_0064e750();
  return;
}

