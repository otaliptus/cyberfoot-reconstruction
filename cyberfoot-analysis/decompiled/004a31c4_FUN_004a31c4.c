// Address: 004a31c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a31c4(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  short local_c;
  short local_8;
  
  if (*(int *)(param_1 + 0x16bc) < 0xc) {
    local_8 = (short)param_2;
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) |
         local_8 + -0x101 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + 5;
  }
  else {
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) |
         (short)(param_2 - 0x101U) << ((byte)*(int *)(param_1 + 0x16bc) & 0x1f);
    iVar4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar4) = *(undefined1 *)(param_1 + 0x16b8);
    iVar4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar4) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(short *)(param_1 + 0x16b8) =
         (short)((int)(param_2 - 0x101U & 0xffff) >>
                (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xb;
  }
  if (*(int *)(param_1 + 0x16bc) < 0xc) {
    local_c = (short)param_3;
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) |
         local_c + -1 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + 5;
  }
  else {
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) |
         (short)(param_3 - 1U) << ((byte)*(int *)(param_1 + 0x16bc) & 0x1f);
    iVar4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar4) = *(undefined1 *)(param_1 + 0x16b8);
    iVar4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar4) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(short *)(param_1 + 0x16b8) =
         (short)((int)(param_3 - 1U & 0xffff) >>
                (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xb;
  }
  if (*(int *)(param_1 + 0x16bc) < 0xd) {
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) |
         (short)param_4 + -4 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + 4;
  }
  else {
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) |
         (short)(param_4 - 4U) << ((byte)*(int *)(param_1 + 0x16bc) & 0x1f);
    iVar4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar4) = *(undefined1 *)(param_1 + 0x16b8);
    iVar4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar4) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(short *)(param_1 + 0x16b8) =
         (short)((int)(param_4 - 4U & 0xffff) >>
                (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xc;
  }
  iVar4 = 0;
  pbVar3 = &DAT_00667028;
  if (0 < param_4) {
    do {
      if (*(int *)(param_1 + 0x16bc) < 0xe) {
        *(ushort *)(param_1 + 0x16b8) =
             *(ushort *)(param_1 + 0x16b8) |
             *(short *)(param_1 + 0xa7e + (uint)*pbVar3 * 4) <<
             ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
        *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + 3;
      }
      else {
        uVar1 = *(ushort *)(param_1 + 0xa7e + (uint)*pbVar3 * 4);
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
             (short)((int)(uint)uVar1 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
        *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xd;
      }
      iVar4 = iVar4 + 1;
      pbVar3 = pbVar3 + 1;
    } while (iVar4 < param_4);
  }
  FUN_004a2ad8(param_1,param_1 + 0x94,param_2 + -1);
  FUN_004a2ad8(param_1,param_1 + 0x988,param_3 + -1);
  return;
}

