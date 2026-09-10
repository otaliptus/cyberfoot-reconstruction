// Address: 0049acf4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049acf4(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  byte *local_20;
  uint local_18;
  undefined4 *local_8;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x15c) + 8);
  uVar3 = *(uint *)(param_1 + 0x1c);
  local_8 = param_2;
  while( true ) {
    param_4 = param_4 + -1;
    if (param_4 < 0) break;
    pbVar4 = (byte *)*local_8;
    local_8 = local_8 + 1;
    local_24 = *(undefined1 **)(*param_3 + param_5 * 4);
    local_28 = *(undefined1 **)(param_3[1] + param_5 * 4);
    local_2c = *(undefined1 **)(param_3[2] + param_5 * 4);
    local_20 = *(byte **)(param_3[3] + param_5 * 4);
    param_5 = param_5 + 1;
    local_18 = 0;
    if (uVar3 != 0) {
      do {
        iVar6 = 0xff - (uint)*pbVar4;
        iVar5 = 0xff - (uint)pbVar4[1];
        iVar7 = 0xff - (uint)pbVar4[2];
        pbVar1 = pbVar4 + 3;
        pbVar4 = pbVar4 + 4;
        *local_20 = *pbVar1;
        *local_24 = (char)((uint)(*(int *)(iVar2 + iVar6 * 4) + *(int *)(iVar2 + 0x400 + iVar5 * 4)
                                 + *(int *)(iVar2 + 0x800 + iVar7 * 4)) >> 0x10);
        *local_28 = (char)((uint)(*(int *)(iVar2 + 0xc00 + iVar6 * 4) +
                                  *(int *)(iVar2 + 0x1000 + iVar5 * 4) +
                                 *(int *)(iVar2 + 0x1400 + iVar7 * 4)) >> 0x10);
        *local_2c = (char)((uint)(*(int *)(iVar2 + 0x1400 + iVar6 * 4) +
                                  *(int *)(iVar2 + 0x1800 + iVar5 * 4) +
                                 *(int *)(iVar2 + 0x1c00 + iVar7 * 4)) >> 0x10);
        local_18 = local_18 + 1;
        local_2c = local_2c + 1;
        local_28 = local_28 + 1;
        local_24 = local_24 + 1;
        local_20 = local_20 + 1;
      } while (local_18 < uVar3);
    }
  }
  return;
}

