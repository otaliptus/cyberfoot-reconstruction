// Address: 004a2ad8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a2ad8(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int local_30;
  uint local_2c;
  ushort *local_14;
  
  iVar7 = 4;
  iVar2 = 7;
  local_2c = 0xffffffff;
  if (*(ushort *)(param_2 + 2) == 0) {
    iVar2 = 0x8a;
    iVar7 = 3;
  }
  local_30 = 0;
  local_14 = (ushort *)(param_2 + 6);
  iVar3 = 0;
  uVar5 = (uint)*(ushort *)(param_2 + 2);
  if (-1 < param_3) {
    do {
      iVar4 = iVar3 + 1;
      uVar6 = (uint)*local_14;
      if ((iVar2 <= iVar4) || (uVar6 != uVar5)) {
        if (iVar4 < iVar7) {
          do {
            uVar8 = (uint)*(ushort *)(param_1 + 0xa7e + uVar5 * 4);
            if ((int)(0x10 - uVar8) < *(int *)(param_1 + 0x16bc)) {
              uVar1 = *(ushort *)(param_1 + 0xa7c + uVar5 * 4);
              *(ushort *)(param_1 + 0x16b8) =
                   *(ushort *)(param_1 + 0x16b8) |
                   uVar1 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined1 *)(*(int *)(param_1 + 8) + iVar2) = *(undefined1 *)(param_1 + 0x16b8);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar2) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
              *(short *)(param_1 + 0x16b8) =
                   (short)((int)(uint)uVar1 >>
                          (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
              *(uint *)(param_1 + 0x16bc) = (uVar8 - 0x10) + *(int *)(param_1 + 0x16bc);
            }
            else {
              *(ushort *)(param_1 + 0x16b8) =
                   *(ushort *)(param_1 + 0x16b8) |
                   *(short *)(param_1 + 0xa7c + uVar5 * 4) <<
                   ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
              *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + uVar8;
            }
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        else if (uVar5 == 0) {
          if (iVar4 < 0xb) {
            uVar8 = (uint)*(ushort *)(param_1 + 0xac2);
            if ((int)(0x10 - uVar8) < *(int *)(param_1 + 0x16bc)) {
              uVar1 = *(ushort *)(param_1 + 0xac0);
              *(ushort *)(param_1 + 0x16b8) =
                   *(ushort *)(param_1 + 0x16b8) |
                   uVar1 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined1 *)(*(int *)(param_1 + 8) + iVar2) = *(undefined1 *)(param_1 + 0x16b8);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar2) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
              *(short *)(param_1 + 0x16b8) =
                   (short)((int)(uint)uVar1 >>
                          (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
              *(uint *)(param_1 + 0x16bc) = (uVar8 - 0x10) + *(int *)(param_1 + 0x16bc);
            }
            else {
              *(ushort *)(param_1 + 0x16b8) =
                   *(ushort *)(param_1 + 0x16b8) |
                   *(short *)(param_1 + 0xac0) << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
              *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + uVar8;
            }
            if (*(int *)(param_1 + 0x16bc) < 0xe) {
              *(ushort *)(param_1 + 0x16b8) =
                   *(ushort *)(param_1 + 0x16b8) |
                   (short)iVar4 + -3 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
              *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + 3;
            }
            else {
              *(ushort *)(param_1 + 0x16b8) =
                   *(ushort *)(param_1 + 0x16b8) |
                   (short)(iVar3 - 2U) << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined1 *)(*(int *)(param_1 + 8) + iVar2) = *(undefined1 *)(param_1 + 0x16b8);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar2) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
              *(short *)(param_1 + 0x16b8) =
                   (short)((int)(iVar3 - 2U & 0xffff) >>
                          (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
              *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xd;
            }
          }
          else {
            uVar8 = (uint)*(ushort *)(param_1 + 0xac6);
            if ((int)(0x10 - uVar8) < *(int *)(param_1 + 0x16bc)) {
              uVar1 = *(ushort *)(param_1 + 0xac4);
              *(ushort *)(param_1 + 0x16b8) =
                   *(ushort *)(param_1 + 0x16b8) |
                   uVar1 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined1 *)(*(int *)(param_1 + 8) + iVar2) = *(undefined1 *)(param_1 + 0x16b8);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar2) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
              *(short *)(param_1 + 0x16b8) =
                   (short)((int)(uint)uVar1 >>
                          (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
              *(uint *)(param_1 + 0x16bc) = (uVar8 - 0x10) + *(int *)(param_1 + 0x16bc);
            }
            else {
              *(ushort *)(param_1 + 0x16b8) =
                   *(ushort *)(param_1 + 0x16b8) |
                   *(short *)(param_1 + 0xac4) << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
              *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + uVar8;
            }
            if (*(int *)(param_1 + 0x16bc) < 10) {
              *(ushort *)(param_1 + 0x16b8) =
                   *(ushort *)(param_1 + 0x16b8) |
                   (short)iVar4 + -0xb << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
              *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + 7;
            }
            else {
              *(ushort *)(param_1 + 0x16b8) =
                   *(ushort *)(param_1 + 0x16b8) |
                   (short)(iVar3 - 10U) << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined1 *)(*(int *)(param_1 + 8) + iVar2) = *(undefined1 *)(param_1 + 0x16b8);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar2) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
              *(short *)(param_1 + 0x16b8) =
                   (short)((int)(iVar3 - 10U & 0xffff) >>
                          (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
              *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -9;
            }
          }
        }
        else {
          if (uVar5 != local_2c) {
            uVar8 = (uint)*(ushort *)(param_1 + 0xa7e + uVar5 * 4);
            iVar4 = iVar3;
            if ((int)(0x10 - uVar8) < *(int *)(param_1 + 0x16bc)) {
              uVar1 = *(ushort *)(param_1 + 0xa7c + uVar5 * 4);
              *(ushort *)(param_1 + 0x16b8) =
                   *(ushort *)(param_1 + 0x16b8) |
                   uVar1 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined1 *)(*(int *)(param_1 + 8) + iVar2) = *(undefined1 *)(param_1 + 0x16b8);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar2) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
              *(short *)(param_1 + 0x16b8) =
                   (short)((int)(uint)uVar1 >>
                          (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
              *(uint *)(param_1 + 0x16bc) = (uVar8 - 0x10) + *(int *)(param_1 + 0x16bc);
            }
            else {
              *(ushort *)(param_1 + 0x16b8) =
                   *(ushort *)(param_1 + 0x16b8) |
                   *(short *)(param_1 + 0xa7c + uVar5 * 4) <<
                   ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
              *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + uVar8;
            }
          }
          uVar8 = (uint)*(ushort *)(param_1 + 0xabe);
          if ((int)(0x10 - uVar8) < *(int *)(param_1 + 0x16bc)) {
            uVar1 = *(ushort *)(param_1 + 0xabc);
            *(ushort *)(param_1 + 0x16b8) =
                 *(ushort *)(param_1 + 0x16b8) |
                 uVar1 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
            iVar2 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(undefined1 *)(*(int *)(param_1 + 8) + iVar2) = *(undefined1 *)(param_1 + 0x16b8);
            iVar2 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar2) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
            *(short *)(param_1 + 0x16b8) =
                 (short)((int)(uint)uVar1 >>
                        (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
            *(uint *)(param_1 + 0x16bc) = (uVar8 - 0x10) + *(int *)(param_1 + 0x16bc);
          }
          else {
            *(ushort *)(param_1 + 0x16b8) =
                 *(ushort *)(param_1 + 0x16b8) |
                 *(short *)(param_1 + 0xabc) << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
            *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + uVar8;
          }
          if (*(int *)(param_1 + 0x16bc) < 0xf) {
            *(ushort *)(param_1 + 0x16b8) =
                 *(ushort *)(param_1 + 0x16b8) |
                 (short)iVar4 + -3 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
            *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + 2;
          }
          else {
            *(ushort *)(param_1 + 0x16b8) =
                 *(ushort *)(param_1 + 0x16b8) |
                 (short)(iVar4 - 3U) << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
            iVar2 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(undefined1 *)(*(int *)(param_1 + 8) + iVar2) = *(undefined1 *)(param_1 + 0x16b8);
            iVar2 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar2) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
            *(short *)(param_1 + 0x16b8) =
                 (short)((int)(iVar4 - 3U & 0xffff) >>
                        (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
            *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xe;
          }
        }
        iVar4 = 0;
        local_2c = uVar5;
        if (uVar6 == 0) {
          iVar2 = 0x8a;
          iVar7 = 3;
        }
        else if (uVar6 == uVar5) {
          iVar2 = 6;
          iVar7 = 3;
        }
        else {
          iVar2 = 7;
          iVar7 = 4;
        }
      }
      local_30 = local_30 + 1;
      local_14 = local_14 + 2;
      iVar3 = iVar4;
      uVar5 = uVar6;
    } while (local_30 <= param_3);
  }
  return;
}

