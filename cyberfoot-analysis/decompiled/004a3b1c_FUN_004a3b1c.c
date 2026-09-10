// Address: 004a3b1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a3b1c(int param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  short sVar9;
  uint uVar10;
  uint local_20;
  
  local_20 = 0;
  if (*(int *)(param_1 + 0x16a0) != 0) {
    do {
      uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 0x16a4) + local_20 * 2);
      uVar10 = (uint)*(byte *)(*(int *)(param_1 + 0x1698) + local_20);
      local_20 = local_20 + 1;
      if (uVar8 == 0) {
        uVar8 = (uint)*(ushort *)(param_2 + 2 + uVar10 * 4);
        if ((int)(0x10 - uVar8) < *(int *)(param_1 + 0x16bc)) {
          uVar2 = *(ushort *)(param_2 + uVar10 * 4);
          *(ushort *)(param_1 + 0x16b8) =
               *(ushort *)(param_1 + 0x16b8) |
               uVar2 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
          iVar3 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16b8);
          iVar3 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar3) =
               (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
          *(short *)(param_1 + 0x16b8) =
               (short)((int)(uint)uVar2 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f))
          ;
          *(uint *)(param_1 + 0x16bc) = (uVar8 - 0x10) + *(int *)(param_1 + 0x16bc);
        }
        else {
          *(ushort *)(param_1 + 0x16b8) =
               *(ushort *)(param_1 + 0x16b8) |
               *(short *)(param_2 + uVar10 * 4) << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
          *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + uVar8;
        }
      }
      else {
        uVar7 = (uint)(byte)(&DAT_0066723b)[uVar10];
        uVar6 = (uint)*(ushort *)(param_2 + 0x406 + uVar7 * 4);
        if ((int)(0x10 - uVar6) < *(int *)(param_1 + 0x16bc)) {
          uVar2 = *(ushort *)(param_2 + 0x404 + uVar7 * 4);
          *(ushort *)(param_1 + 0x16b8) =
               *(ushort *)(param_1 + 0x16b8) |
               uVar2 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
          iVar3 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16b8);
          iVar3 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar3) =
               (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
          *(short *)(param_1 + 0x16b8) =
               (short)((int)(uint)uVar2 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f))
          ;
          *(uint *)(param_1 + 0x16bc) = (uVar6 - 0x10) + *(int *)(param_1 + 0x16bc);
        }
        else {
          *(ushort *)(param_1 + 0x16b8) =
               *(ushort *)(param_1 + 0x16b8) |
               *(short *)(param_2 + 0x404 + uVar7 * 4) <<
               ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
          *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + uVar6;
        }
        iVar3 = *(int *)(&DAT_006668d0 + uVar7 * 4);
        if (iVar3 != 0) {
          iVar4 = *(int *)(&DAT_00666f00 + uVar7 * 4);
          sVar9 = (short)(uVar10 - iVar4);
          if (0x10 - iVar3 < *(int *)(param_1 + 0x16bc)) {
            *(ushort *)(param_1 + 0x16b8) =
                 *(ushort *)(param_1 + 0x16b8) |
                 sVar9 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
            iVar5 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(undefined1 *)(*(int *)(param_1 + 8) + iVar5) = *(undefined1 *)(param_1 + 0x16b8);
            iVar5 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar5) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
            *(short *)(param_1 + 0x16b8) =
                 (short)((int)(uVar10 - iVar4 & 0xffff) >>
                        (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
            *(int *)(param_1 + 0x16bc) = iVar3 + -0x10 + *(int *)(param_1 + 0x16bc);
          }
          else {
            *(ushort *)(param_1 + 0x16b8) =
                 *(ushort *)(param_1 + 0x16b8) |
                 sVar9 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
            *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + iVar3;
          }
        }
        uVar10 = uVar8 - 1;
        if (uVar10 < 0x100) {
          bVar1 = (&DAT_0066703a)[uVar8];
        }
        else {
          bVar1 = (&DAT_0066713b)[uVar10 >> 7];
        }
        uVar8 = (uint)bVar1;
        uVar6 = (uint)*(ushort *)(param_3 + 2 + uVar8 * 4);
        if ((int)(0x10 - uVar6) < *(int *)(param_1 + 0x16bc)) {
          uVar2 = *(ushort *)(param_3 + uVar8 * 4);
          *(ushort *)(param_1 + 0x16b8) =
               *(ushort *)(param_1 + 0x16b8) |
               uVar2 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
          iVar3 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16b8);
          iVar3 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar3) =
               (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
          *(short *)(param_1 + 0x16b8) =
               (short)((int)(uint)uVar2 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f))
          ;
          *(uint *)(param_1 + 0x16bc) = (uVar6 - 0x10) + *(int *)(param_1 + 0x16bc);
        }
        else {
          *(ushort *)(param_1 + 0x16b8) =
               *(ushort *)(param_1 + 0x16b8) |
               *(short *)(param_3 + uVar8 * 4) << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
          *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + uVar6;
        }
        iVar3 = *(int *)(&DAT_00666944 + uVar8 * 4);
        if (iVar3 != 0) {
          iVar4 = *(int *)(&DAT_00666f74 + uVar8 * 4);
          sVar9 = (short)(uVar10 - iVar4);
          if (0x10 - iVar3 < *(int *)(param_1 + 0x16bc)) {
            *(ushort *)(param_1 + 0x16b8) =
                 *(ushort *)(param_1 + 0x16b8) | sVar9 << ((byte)*(int *)(param_1 + 0x16bc) & 0x1f);
            iVar5 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(undefined1 *)(*(int *)(param_1 + 8) + iVar5) = *(undefined1 *)(param_1 + 0x16b8);
            iVar5 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar5) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
            *(short *)(param_1 + 0x16b8) =
                 (short)((int)(uVar10 - iVar4 & 0xffff) >>
                        (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
            *(int *)(param_1 + 0x16bc) = iVar3 + -0x10 + *(int *)(param_1 + 0x16bc);
          }
          else {
            *(ushort *)(param_1 + 0x16b8) =
                 *(ushort *)(param_1 + 0x16b8) |
                 sVar9 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
            *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + iVar3;
          }
        }
      }
    } while (local_20 < *(uint *)(param_1 + 0x16a0));
  }
  uVar8 = (uint)*(ushort *)(param_2 + 0x402);
  if ((int)(0x10 - uVar8) < *(int *)(param_1 + 0x16bc)) {
    uVar2 = *(ushort *)(param_2 + 0x400);
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) | uVar2 << ((byte)*(int *)(param_1 + 0x16bc) & 0x1f);
    iVar3 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16b8);
    iVar3 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar3) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(short *)(param_1 + 0x16b8) =
         (short)((int)(uint)uVar2 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
    *(uint *)(param_1 + 0x16bc) = (uVar8 - 0x10) + *(int *)(param_1 + 0x16bc);
  }
  else {
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) |
         *(short *)(param_2 + 0x400) << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + uVar8;
  }
  *(uint *)(param_1 + 0x16b4) = (uint)*(ushort *)(param_2 + 0x402);
  return;
}

