// Address: 00494474
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00494474(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 *local_1c;
  int local_18;
  
  iVar2 = *param_4;
  uVar6 = (uint)*(byte *)(*(int *)(param_1 + 0x1c4) + 0x8c + *(int *)(param_2 + 4));
  uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0x1c4) + 0x96 + *(int *)(param_2 + 4));
  local_1c = param_3;
  for (local_18 = 0; local_18 < *(int *)(param_1 + 0x138); local_18 = local_18 + uVar3) {
    puVar7 = (undefined1 *)*local_1c;
    puVar4 = *(undefined1 **)(iVar2 + local_18 * 4);
    puVar8 = puVar4 + *(int *)(param_1 + 0x70);
    while (puVar4 < puVar8) {
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      uVar5 = uVar6;
      if (uVar6 != 0) {
        do {
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
          uVar5 = uVar5 - 1;
        } while (0 < (int)uVar5);
      }
    }
    if (1 < uVar3) {
      FUN_00497714(iVar2,local_18,iVar2,*(undefined4 *)(param_1 + 0x70),uVar3 - 1,local_18 + 1);
    }
    local_1c = local_1c + 1;
  }
  return;
}

