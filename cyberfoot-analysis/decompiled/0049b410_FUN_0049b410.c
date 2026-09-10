// Address: 0049b410
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049b410(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  undefined4 *local_1c;
  int *local_18;
  uint local_10;
  int local_c;
  
  uVar6 = *(int *)(param_2 + 0x1c) * 8;
  FUN_0049b14c(param_3,*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0x1c),
               *(int *)(param_2 + 0x1c) << 4);
  local_18 = param_4;
  local_1c = param_3;
  for (local_c = 0; local_c < *(int *)(param_2 + 0xc); local_c = local_c + 1) {
    uVar10 = 1;
    puVar7 = (undefined1 *)*local_18;
    pbVar5 = (byte *)*local_1c;
    pbVar8 = (byte *)local_1c[1];
    local_10 = 0;
    if (uVar6 != 0) {
      do {
        pbVar1 = pbVar5 + 1;
        bVar3 = *pbVar5;
        pbVar5 = pbVar5 + 2;
        bVar4 = *pbVar8;
        pbVar2 = pbVar8 + 1;
        pbVar8 = pbVar8 + 2;
        iVar9 = (uint)bVar3 + (uint)*pbVar1 + (uint)bVar4 + (uint)*pbVar2 + uVar10;
        uVar10 = uVar10 ^ 3;
        *puVar7 = (char)(iVar9 >> 2);
        puVar7 = puVar7 + 1;
        local_10 = local_10 + 1;
      } while (local_10 < uVar6);
    }
    local_1c = local_1c + 2;
    local_18 = local_18 + 1;
  }
  return;
}

