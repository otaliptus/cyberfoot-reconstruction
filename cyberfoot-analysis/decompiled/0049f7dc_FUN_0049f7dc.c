// Address: 0049f7dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0049f7dc(int *param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = 0;
  do {
    if ((uint)param_1[0x1d] < 0x106) {
      FUN_0049f56c(param_1);
      if (((uint)param_1[0x1d] < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (param_1[0x1d] == 0) {
        if (param_1[0x17] < 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = param_1[0xe] + param_1[0x17];
        }
        FUN_004a3844(param_1,iVar4,param_1[0x1b] - param_1[0x17],param_2 == 4);
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
      uVar6 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
              (uint)*(byte *)(param_1[0xe] + 2 + param_1[0x1b])) & param_1[0x15];
      param_1[0x12] = uVar6;
      uVar3 = *(ushort *)(param_1[0x11] + uVar6 * 2);
      uVar6 = (uint)uVar3;
      *(ushort *)(param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2) = uVar3;
      *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
    }
    if ((uVar6 != 0) && (param_1[0x1b] - uVar6 <= param_1[0xb] - 0x106U)) {
      if ((param_1[0x22] == 2) || (param_1[0x22] == 3)) {
        if ((param_1[0x22] == 3) && (param_1[0x1b] - uVar6 == 1)) {
          iVar4 = FUN_0049f4cc(param_1,uVar6);
          param_1[0x18] = iVar4;
        }
      }
      else {
        iVar4 = FUN_0049f354(param_1,uVar6);
        param_1[0x18] = iVar4;
      }
    }
    if ((uint)param_1[0x18] < 3) {
      bVar5 = *(byte *)(param_1[0xe] + param_1[0x1b]);
      *(undefined2 *)(param_1[0x5a9] + param_1[0x5a8] * 2) = 0;
      iVar4 = param_1[0x5a8];
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(byte *)(param_1[0x5a6] + iVar4) = bVar5;
      *(short *)(param_1 + bVar5 + 0x25) = (short)param_1[bVar5 + 0x25] + 1;
      bVar7 = param_1[0x5a7] + -1 == param_1[0x5a8];
      param_1[0x1d] = param_1[0x1d] + -1;
      param_1[0x1b] = param_1[0x1b] + 1;
    }
    else {
      sVar2 = (short)param_1[0x1b] - (short)param_1[0x1c];
      iVar4 = param_1[0x18];
      *(short *)(param_1[0x5a9] + param_1[0x5a8] * 2) = sVar2;
      bVar5 = (char)iVar4 - 3;
      iVar4 = param_1[0x5a8];
      uVar3 = sVar2 - 1;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(byte *)(param_1[0x5a6] + iVar4) = bVar5;
      *(short *)(param_1 + (byte)(&DAT_0066723b)[bVar5] + 0x126) =
           (short)param_1[(byte)(&DAT_0066723b)[bVar5] + 0x126] + 1;
      if (uVar3 < 0x100) {
        bVar5 = (&DAT_0066703b)[uVar3];
      }
      else {
        bVar5 = (&DAT_0066713b)[(int)(uint)uVar3 >> 7];
      }
      *(short *)(param_1 + bVar5 + 0x262) = (short)param_1[bVar5 + 0x262] + 1;
      bVar7 = param_1[0x5a7] + -1 == param_1[0x5a8];
      param_1[0x1d] = param_1[0x1d] - param_1[0x18];
      if (((uint)param_1[0x20] < (uint)param_1[0x18]) || ((uint)param_1[0x1d] < 3)) {
        param_1[0x1b] = param_1[0x1b] + param_1[0x18];
        param_1[0x18] = 0;
        bVar5 = *(byte *)(param_1[0xe] + param_1[0x1b]);
        param_1[0x12] = (uint)bVar5;
        param_1[0x12] =
             ((uint)bVar5 << ((byte)param_1[0x16] & 0x1f) ^
             (uint)*(byte *)(param_1[0xe] + 1 + param_1[0x1b])) & param_1[0x15];
      }
      else {
        param_1[0x18] = param_1[0x18] + -1;
        do {
          param_1[0x1b] = param_1[0x1b] + 1;
          uVar6 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
                  (uint)*(byte *)(param_1[0xe] + 2 + param_1[0x1b])) & param_1[0x15];
          param_1[0x12] = uVar6;
          uVar3 = *(ushort *)(param_1[0x11] + uVar6 * 2);
          *(ushort *)(param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2) = uVar3;
          uVar6 = (uint)uVar3;
          *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
          piVar1 = param_1 + 0x18;
          *piVar1 = *piVar1 + -1;
        } while (*piVar1 != 0);
        param_1[0x1b] = param_1[0x1b] + 1;
      }
    }
    if (bVar7) {
      if (param_1[0x17] < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_1[0xe] + param_1[0x17];
      }
      FUN_004a3844(param_1,iVar4,param_1[0x1b] - param_1[0x17],0);
      param_1[0x17] = param_1[0x1b];
      FUN_0049e72c(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}

