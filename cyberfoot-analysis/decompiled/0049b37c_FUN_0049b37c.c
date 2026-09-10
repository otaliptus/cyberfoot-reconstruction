// Address: 0049b37c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049b37c(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *local_18;
  int *local_14;
  int local_c;
  
  uVar4 = *(int *)(param_2 + 0x1c) * 8;
  FUN_0049b14c(param_3,*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0x1c),
               *(int *)(param_2 + 0x1c) << 4);
  local_14 = param_4;
  local_18 = param_3;
  for (local_c = 0; local_c < *(int *)(param_2 + 0xc); local_c = local_c + 1) {
    uVar8 = 0;
    puVar6 = (undefined1 *)*local_14;
    pbVar3 = (byte *)*local_18;
    uVar5 = 0;
    if (uVar4 != 0) {
      do {
        pbVar1 = pbVar3 + 1;
        uVar8 = uVar8 + 1;
        bVar2 = *pbVar3;
        pbVar3 = pbVar3 + 2;
        iVar7 = (uint)bVar2 + (uint)*pbVar1 + uVar5;
        uVar5 = uVar5 ^ 1;
        *puVar6 = (char)(iVar7 >> 1);
        puVar6 = puVar6 + 1;
      } while (uVar8 < uVar4);
    }
    local_18 = local_18 + 1;
    local_14 = local_14 + 1;
  }
  return;
}

