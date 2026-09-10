// Address: 0049f56c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049f56c(int *param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  ushort *puVar6;
  int iVar7;
  
  uVar2 = param_1[0xb];
  while( true ) {
    iVar7 = (param_1[0xf] - param_1[0x1d]) - param_1[0x1b];
    if (param_1[0xb] + -0x106 + uVar2 <= (uint)param_1[0x1b]) {
      FUN_0049de20();
      param_1[0x1c] = param_1[0x1c] - uVar2;
      param_1[0x1b] = param_1[0x1b] - uVar2;
      param_1[0x17] = param_1[0x17] - uVar2;
      iVar3 = param_1[0x13];
      puVar6 = (ushort *)(iVar3 * 2 + param_1[0x11]);
      do {
        puVar6 = puVar6 + -1;
        if (*puVar6 < uVar2) {
          uVar5 = 0;
        }
        else {
          uVar5 = *puVar6 - (short)uVar2;
        }
        *puVar6 = uVar5;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      puVar6 = (ushort *)(uVar2 * 2 + param_1[0x10]);
      uVar4 = uVar2;
      do {
        puVar6 = puVar6 + -1;
        param_3 = (uint)*puVar6;
        if (param_3 < uVar2) {
          uVar5 = 0;
        }
        else {
          uVar5 = *puVar6 - (short)uVar2;
        }
        *puVar6 = uVar5;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      iVar7 = iVar7 + uVar2;
    }
    if (*(int *)(*param_1 + 4) == 0) break;
    iVar7 = FUN_0049f240(*param_1,param_1[0xe] + param_1[0x1b] + param_1[0x1d],iVar7,param_3);
    param_1[0x1d] = param_1[0x1d] + iVar7;
    if (2 < (uint)param_1[0x1d]) {
      bVar1 = *(byte *)(param_1[0xe] + param_1[0x1b]);
      param_1[0x12] = (uint)bVar1;
      param_1[0x12] =
           ((uint)bVar1 << ((byte)param_1[0x16] & 0x1f) ^
           (uint)*(byte *)(param_1[0xe] + 1 + param_1[0x1b])) & param_1[0x15];
    }
    if (0x105 < (uint)param_1[0x1d]) {
      return;
    }
    if (*(int *)(*param_1 + 4) == 0) {
      return;
    }
  }
  return;
}

