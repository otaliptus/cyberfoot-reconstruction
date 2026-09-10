// Address: 00627dc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00627dc8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  FUN_00405eec(*(undefined4 *)PTR_DAT_0066af70,param_2,param_3,param_3);
  iVar5 = 1;
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar7 = 0;
    do {
      iVar8 = 1;
      iVar6 = iVar5;
      do {
        pbVar1 = (byte *)(DAT_006d4944 + iVar7 * 0x708 + -0x24 + iVar8 * 0x24);
        bVar9 = *pbVar1 == 0xffffffff;
        FUN_00403180(pbVar1,&DAT_00628208);
        iVar5 = iVar6;
        if ((!bVar9) && (*(char *)(DAT_006d4944 + iVar7 * 0x708 + -0x24 + iVar8 * 0x24) != '\0')) {
          iVar5 = iVar6 + 1;
          FUN_004060a8(PTR_DAT_0066b5b8,PTR_DAT_00488b00,1,iVar5);
          FUN_004030e0(*(int *)PTR_DAT_0066b5b8 + -0x130 + iVar5 * 0x130,
                       DAT_006d4944 + iVar7 * 0x708 + -0x24 + iVar8 * 0x24,
                       CONCAT31((int3)((uint)(iVar8 * 9) >> 8),0x14));
          *(uint *)(*(int *)PTR_DAT_0066b5b8 + -0x10c + iVar5 * 0x130) =
               (uint)*(byte *)(DAT_006d4944 + iVar7 * 0x708 + 0x617 + iVar8);
          *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + -0x11b + iVar5 * 0x130) =
               *(undefined1 *)(DAT_006d4944 + iVar7 * 0x708 + 0x59f + iVar8);
          *(uint *)(*(int *)PTR_DAT_0066b5b8 + -0x118 + iVar5 * 0x130) =
               (uint)*(byte *)(DAT_006d4944 + iVar7 * 0x708 + 0x5ef + iVar8);
          *(uint *)(*(int *)PTR_DAT_0066b5b8 + -0x114 + iVar5 * 0x130) =
               (uint)*(byte *)(DAT_006d4944 + iVar7 * 0x708 + 0x5c7 + iVar8);
          *(uint *)(*(int *)PTR_DAT_0066b5b8 + -0x104 + iVar5 * 0x130) =
               (uint)*(byte *)(DAT_006d4944 + iVar7 * 0x708 + 0x6b7 + iVar8);
          iVar3 = *(int *)(*(int *)PTR_DAT_0066b5b8 + -0x104 + iVar5 * 0x130);
          if ((iVar3 != 0) && (iVar3 != 1)) {
            *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + -0x104 + iVar5 * 0x130) = 0;
          }
          *(uint *)(*(int *)PTR_DAT_0066b5b8 + -0x100 + iVar5 * 0x130) =
               (uint)*(byte *)(DAT_006d4944 + iVar7 * 0x708 + 0x6df + iVar8);
          if (*(char *)(DAT_006d4944 + iVar7 * 0x708 + 0x63f + iVar8) == '\0') {
            *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + -0xe0 + iVar5 * 0x130) = 0;
          }
          else {
            *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + -0xe0 + iVar5 * 0x130) = 1;
          }
          if (0xd < *(byte *)(DAT_006d4944 + iVar7 * 0x708 + 0x667 + iVar8)) {
            *(undefined1 *)(DAT_006d4944 + iVar7 * 0x708 + 0x667 + iVar8) = 0;
          }
          if (0xd < *(byte *)(DAT_006d4944 + iVar7 * 0x708 + 0x68f + iVar8)) {
            *(undefined1 *)(DAT_006d4944 + iVar7 * 0x708 + 0x68f + iVar8) = 0;
          }
          *(uint *)(*(int *)PTR_DAT_0066b5b8 + -0xd4 + iVar5 * 0x130) =
               (uint)*(byte *)(DAT_006d4944 + iVar7 * 0x708 + 0x667 + iVar8);
          *(uint *)(*(int *)PTR_DAT_0066b5b8 + -0xd0 + iVar5 * 0x130) =
               (uint)*(byte *)(DAT_006d4944 + iVar7 * 0x708 + 0x68f + iVar8);
          if (0 < *(int *)(*(int *)PTR_DAT_0066b5b8 + -0x10c + iVar5 * 0x130)) {
            if (*(int *)(*(int *)PTR_DAT_0066b5b8 + -0xd4 + iVar5 * 0x130) == 0) {
              iVar3 = FUN_004032c8(8);
              *(int *)(*(int *)PTR_DAT_0066b5b8 + -0xd4 + iVar5 * 0x130) = iVar3 + 4;
            }
            if (*(int *)(*(int *)PTR_DAT_0066b5b8 + -0xd0 + iVar5 * 0x130) == 0) {
              iVar3 = FUN_004032c8(8);
              *(int *)(*(int *)PTR_DAT_0066b5b8 + -0xd0 + iVar5 * 0x130) = iVar3 + 4;
            }
          }
          uVar4 = FUN_0065173c(iVar6);
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + -0xd8 + iVar5 * 0x130) = uVar4;
          *(int *)(*(int *)PTR_DAT_0066b5b8 + -0x110 + iVar5 * 0x130) = iVar7;
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + -0xb8 + iVar5 * 0x130) = 100;
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + -0x4c + iVar5 * 0x130) = 3;
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + -0xc + iVar5 * 0x130) = 0;
          *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + -0x10 + iVar5 * 0x130) = 0;
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + -8 + iVar5 * 0x130) = 0;
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + -4 + iVar5 * 0x130) = 0;
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + -0x14 + iVar5 * 0x130) = 0;
          if (0x19 < iVar8) {
            *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + -0x10 + iVar5 * 0x130) = 1;
            uVar4 = FUN_006527b0(iVar6);
            *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + -0x100 + iVar5 * 0x130) = uVar4;
            uVar4 = FUN_006527f4(iVar6);
            *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + -0xc + iVar5 * 0x130) = uVar4;
            uVar4 = FUN_00652868(iVar6);
            *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + -8 + iVar5 * 0x130) = uVar4;
            *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + -4 + iVar5 * 0x130) = 0;
            if (*(int *)(*(int *)PTR_DAT_0066b5b8 + -0x118 + iVar5 * 0x130) < 0x10) {
              *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + -0x118 + iVar5 * 0x130) = 0x10;
            }
            if (0x14 < *(int *)(*(int *)PTR_DAT_0066b5b8 + -0x118 + iVar5 * 0x130)) {
              *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + -0x118 + iVar5 * 0x130) = 0x14;
            }
          }
        }
        iVar8 = iVar8 + 1;
        iVar6 = iVar5;
      } while (iVar8 != 0x29);
      FUN_00487348(*(undefined4 *)PTR_DAT_0066b3ac);
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

