// Address: 0049ac68
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049ac68(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 *local_8;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x15c) + 8);
  uVar5 = *(uint *)(param_1 + 0x1c);
  local_8 = param_2;
  while( true ) {
    param_4 = param_4 + -1;
    if (param_4 < 0) break;
    pbVar6 = (byte *)*local_8;
    local_8 = local_8 + 1;
    puVar7 = *(undefined1 **)(*param_3 + param_5 * 4);
    param_5 = param_5 + 1;
    uVar8 = 0;
    if (uVar5 != 0) {
      do {
        uVar8 = uVar8 + 1;
        pbVar1 = pbVar6 + 2;
        pbVar2 = pbVar6 + 1;
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 3;
        *puVar7 = (char)((uint)(*(int *)(iVar4 + (uint)*pbVar1 * 4) +
                                *(int *)(iVar4 + 0x400 + (uint)*pbVar2 * 4) +
                               *(int *)(iVar4 + 0x800 + (uint)bVar3 * 4)) >> 0x10);
        puVar7 = puVar7 + 1;
      } while (uVar8 < uVar5);
    }
  }
  return;
}

