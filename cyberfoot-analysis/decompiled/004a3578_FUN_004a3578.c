// Address: 004a3578
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a3578(int param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x16bc) < 0xe) {
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) | 2 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + 3;
  }
  else {
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) | 2 << ((byte)*(int *)(param_1 + 0x16bc) & 0x1f);
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b8);
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar1) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(short *)(param_1 + 0x16b8) =
         (short)(2 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xd;
  }
  uVar2 = DAT_00666e08;
  uVar3 = (uint)DAT_00666e0a;
  if ((int)(0x10 - uVar3) < *(int *)(param_1 + 0x16bc)) {
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) | DAT_00666e08 << ((byte)*(int *)(param_1 + 0x16bc) & 0x1f);
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b8);
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar1) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(short *)(param_1 + 0x16b8) =
         (short)((int)(uint)uVar2 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
    *(uint *)(param_1 + 0x16bc) = (uVar3 - 0x10) + *(int *)(param_1 + 0x16bc);
  }
  else {
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) |
         DAT_00666e08 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + uVar3;
  }
  FUN_004a4044(param_1);
  iVar1 = *(int *)(param_1 + 0x16bc);
  if ((*(int *)(param_1 + 0x16b4) + 0xb) - iVar1 < 9) {
    if (iVar1 < 0xe) {
      *(ushort *)(param_1 + 0x16b8) =
           *(ushort *)(param_1 + 0x16b8) | 2 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
      *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + 3;
    }
    else {
      *(ushort *)(param_1 + 0x16b8) = *(ushort *)(param_1 + 0x16b8) | 2 << ((byte)iVar1 & 0x1f);
      iVar1 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b8);
      iVar1 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      *(char *)(*(int *)(param_1 + 8) + iVar1) =
           (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
      *(short *)(param_1 + 0x16b8) =
           (short)(2 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
      *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xd;
    }
    uVar2 = DAT_00666e08;
    uVar3 = (uint)DAT_00666e0a;
    if ((int)(0x10 - uVar3) < *(int *)(param_1 + 0x16bc)) {
      *(ushort *)(param_1 + 0x16b8) =
           *(ushort *)(param_1 + 0x16b8) | DAT_00666e08 << ((byte)*(int *)(param_1 + 0x16bc) & 0x1f)
      ;
      iVar1 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b8);
      iVar1 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      *(char *)(*(int *)(param_1 + 8) + iVar1) =
           (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
      *(short *)(param_1 + 0x16b8) =
           (short)((int)(uint)uVar2 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
      *(uint *)(param_1 + 0x16bc) = (uVar3 - 0x10) + *(int *)(param_1 + 0x16bc);
    }
    else {
      *(ushort *)(param_1 + 0x16b8) =
           *(ushort *)(param_1 + 0x16b8) |
           DAT_00666e08 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
      *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + uVar3;
    }
    FUN_004a4044(param_1);
  }
  *(undefined4 *)(param_1 + 0x16b4) = 7;
  return;
}

