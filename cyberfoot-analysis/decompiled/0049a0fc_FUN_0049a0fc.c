// Address: 0049a0fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049a0fc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iStack_20;
  int iStack_1c;
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  
  iVar5 = *(int *)(param_1 + 0x150);
  iVar2 = *(int *)(param_1 + 0xe8);
  puStack_18 = (undefined4 *)
               (*(code *)**(undefined4 **)(param_1 + 4))
                         (param_1,1,*(int *)(param_1 + 0x38) * iVar2 * 0x14);
  iStack_20 = 0;
  iStack_1c = *(int *)(param_1 + 0x40);
  puStack_14 = (undefined4 *)(iVar5 + 8);
  for (; iStack_20 < *(int *)(param_1 + 0x38); iStack_20 = iStack_20 + 1) {
    puVar4 = (undefined4 *)
             (**(code **)(*(int *)(param_1 + 4) + 8))
                       (param_1,1,
                        (*(int *)(iStack_1c + 0x1c) * 8 * *(int *)(param_1 + 0xe4)) /
                        *(int *)(iStack_1c + 8),iVar2 * 3);
    FUN_0048ab0c();
    iVar5 = 0;
    puVar6 = puVar4;
    puVar7 = puStack_18;
    if (0 < iVar2) {
      do {
        *puVar7 = puVar4[iVar5 + iVar2 * 2];
        iVar1 = iVar5 + iVar2 * 4;
        iVar5 = iVar5 + 1;
        puVar7 = puVar7 + 1;
        uVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        puStack_18[iVar1] = uVar3;
      } while (iVar5 < iVar2);
    }
    *puStack_14 = puStack_18 + iVar2;
    puStack_18 = puStack_18 + iVar2 * 5;
    puStack_14 = puStack_14 + 1;
    iStack_1c = iStack_1c + 0x54;
  }
  return;
}

