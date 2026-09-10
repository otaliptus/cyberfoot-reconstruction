// Address: 004901dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004901dc(int param_1,int *param_2,int param_3,int param_4,undefined4 *param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  byte *local_38;
  byte *local_34;
  byte *local_30;
  uint local_18;
  int local_c;
  
  iVar3 = *(int *)(param_1 + 0x1c8);
  uVar4 = *(uint *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x144);
  iVar6 = *(int *)(iVar3 + 8);
  iVar7 = *(int *)(iVar3 + 0xc);
  iVar8 = *(int *)(iVar3 + 0x10);
  iVar3 = *(int *)(iVar3 + 0x14);
  local_c = param_3;
  while( true ) {
    param_4 = param_4 + -1;
    if (param_4 < 0) break;
    local_30 = *(byte **)(*param_2 + local_c * 4);
    local_34 = *(byte **)(param_2[1] + local_c * 4);
    local_38 = *(byte **)(param_2[2] + local_c * 4);
    local_c = local_c + 1;
    puVar9 = (undefined1 *)*param_5;
    param_5 = param_5 + 1;
    local_18 = 0;
    if (uVar4 != 0) {
      do {
        uVar10 = (uint)*local_30;
        bVar1 = *local_34;
        bVar2 = *local_38;
        puVar9[2] = *(undefined1 *)(iVar5 + uVar10 + *(int *)(iVar6 + (uint)bVar2 * 4));
        puVar9[1] = *(undefined1 *)
                     (iVar5 + uVar10 +
                     (*(int *)(iVar3 + (uint)bVar1 * 4) + *(int *)(iVar8 + (uint)bVar2 * 4) >> 0x10)
                     );
        *puVar9 = *(undefined1 *)(iVar5 + uVar10 + *(int *)(iVar7 + (uint)bVar1 * 4));
        puVar9 = puVar9 + 3;
        local_18 = local_18 + 1;
        local_38 = local_38 + 1;
        local_34 = local_34 + 1;
        local_30 = local_30 + 1;
      } while (local_18 < uVar4);
    }
  }
  return;
}

