// Address: 0049fae0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0049fae0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  
  uVar9 = 0;
  do {
    if ((uint)param_1[0x1d] < 0x106) {
      FUN_0049f56c(param_1);
      if (((uint)param_1[0x1d] < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (param_1[0x1d] == 0) {
        if (param_1[0x1a] != 0) {
          bVar8 = *(byte *)(param_1[0xe] + -1 + param_1[0x1b]);
          *(undefined2 *)(param_1[0x5a9] + param_1[0x5a8] * 2) = 0;
          iVar7 = param_1[0x5a8];
          param_1[0x5a8] = param_1[0x5a8] + 1;
          *(byte *)(param_1[0x5a6] + iVar7) = bVar8;
          *(short *)(param_1 + bVar8 + 0x25) = (short)param_1[bVar8 + 0x25] + 1;
          param_1[0x1a] = 0;
        }
        if (param_1[0x17] < 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = param_1[0xe] + param_1[0x17];
        }
        FUN_004a3844(param_1,iVar7,param_1[0x1b] - param_1[0x17],param_2 == 4);
        param_1[0x17] = param_1[0x1b];
        FUN_0049e72c(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          if (param_2 == 4) {
            return 2;
          }
          return 0;
        }
        if (param_2 == 4) {
          return 3;
        }
        return 1;
      }
    }
    if (2 < (uint)param_1[0x1d]) {
      uVar9 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
              (uint)*(byte *)(param_1[0xe] + 2 + param_1[0x1b])) & param_1[0x15];
      param_1[0x12] = uVar9;
      uVar6 = *(ushort *)(param_1[0x11] + uVar9 * 2);
      uVar9 = (uint)uVar6;
      *(ushort *)(param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2) = uVar6;
      *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
    }
    param_1[0x1e] = param_1[0x18];
    param_1[0x19] = param_1[0x1c];
    param_1[0x18] = 2;
    if (((uVar9 != 0) && ((uint)param_1[0x1e] < (uint)param_1[0x20])) &&
       (param_1[0x1b] - uVar9 <= param_1[0xb] - 0x106U)) {
      if ((param_1[0x22] == 2) || (param_1[0x22] == 3)) {
        if ((param_1[0x22] == 3) && (param_1[0x1b] - uVar9 == 1)) {
          iVar7 = FUN_0049f4cc(param_1,uVar9);
          param_1[0x18] = iVar7;
        }
      }
      else {
        iVar7 = FUN_0049f354(param_1,uVar9);
        param_1[0x18] = iVar7;
      }
      if (((uint)param_1[0x18] < 6) &&
         ((param_1[0x22] == 1 ||
          ((param_1[0x18] == 3 && (0x1000 < (uint)(param_1[0x1b] - param_1[0x1c]))))))) {
        param_1[0x18] = 2;
      }
    }
    if (((uint)param_1[0x1e] < 3) || ((uint)param_1[0x1e] < (uint)param_1[0x18])) {
      if (param_1[0x1a] == 0) {
        param_1[0x1a] = 1;
        param_1[0x1b] = param_1[0x1b] + 1;
        param_1[0x1d] = param_1[0x1d] + -1;
      }
      else {
        bVar8 = *(byte *)(param_1[0xe] + -1 + param_1[0x1b]);
        *(undefined2 *)(param_1[0x5a9] + param_1[0x5a8] * 2) = 0;
        iVar7 = param_1[0x5a8];
        param_1[0x5a8] = param_1[0x5a8] + 1;
        *(byte *)(param_1[0x5a6] + iVar7) = bVar8;
        *(short *)(param_1 + bVar8 + 0x25) = (short)param_1[bVar8 + 0x25] + 1;
        if (param_1[0x5a7] + -1 == param_1[0x5a8]) {
          if (param_1[0x17] < 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = param_1[0xe] + param_1[0x17];
          }
          FUN_004a3844(param_1,iVar7,param_1[0x1b] - param_1[0x17],0);
          param_1[0x17] = param_1[0x1b];
          FUN_0049e72c(*param_1);
        }
        param_1[0x1b] = param_1[0x1b] + 1;
        param_1[0x1d] = param_1[0x1d] + -1;
        if (*(int *)(*param_1 + 0x10) == 0) {
          return 0;
        }
      }
    }
    else {
      iVar7 = param_1[0x1b];
      iVar2 = param_1[0x1d];
      sVar5 = ((short)param_1[0x1b] + -1) - (short)param_1[0x19];
      iVar4 = param_1[0x1e];
      *(short *)(param_1[0x5a9] + param_1[0x5a8] * 2) = sVar5;
      bVar8 = (char)iVar4 - 3;
      iVar4 = param_1[0x5a8];
      uVar6 = sVar5 - 1;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(byte *)(param_1[0x5a6] + iVar4) = bVar8;
      *(short *)(param_1 + (byte)(&DAT_0066723b)[bVar8] + 0x126) =
           (short)param_1[(byte)(&DAT_0066723b)[bVar8] + 0x126] + 1;
      if (uVar6 < 0x100) {
        bVar8 = (&DAT_0066703b)[uVar6];
      }
      else {
        bVar8 = (&DAT_0066713b)[(int)(uint)uVar6 >> 7];
      }
      *(short *)(param_1 + bVar8 + 0x262) = (short)param_1[bVar8 + 0x262] + 1;
      iVar3 = param_1[0x5a7];
      iVar4 = param_1[0x5a8];
      param_1[0x1d] = param_1[0x1d] - (param_1[0x1e] + -1);
      param_1[0x1e] = param_1[0x1e] + -2;
      do {
        param_1[0x1b] = param_1[0x1b] + 1;
        if ((uint)param_1[0x1b] <= (iVar7 + iVar2) - 3U) {
          uVar9 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
                  (uint)*(byte *)(param_1[0xe] + 2 + param_1[0x1b])) & param_1[0x15];
          param_1[0x12] = uVar9;
          uVar6 = *(ushort *)(param_1[0x11] + uVar9 * 2);
          *(ushort *)(param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2) = uVar6;
          uVar9 = (uint)uVar6;
          *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
        }
        piVar1 = param_1 + 0x1e;
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
      param_1[0x1a] = 0;
      param_1[0x18] = 2;
      param_1[0x1b] = param_1[0x1b] + 1;
      if (iVar3 + -1 == iVar4) {
        if (param_1[0x17] < 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = param_1[0xe] + param_1[0x17];
        }
        FUN_004a3844(param_1,iVar7,param_1[0x1b] - param_1[0x17],0);
        param_1[0x17] = param_1[0x1b];
        FUN_0049e72c(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          return 0;
        }
      }
    }
  } while( true );
}

