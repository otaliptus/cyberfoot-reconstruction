// Address: 00492d84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00492d84(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  int iStack_1c;
  int *piStack_10;
  
  iVar1 = *(int *)(param_1 + 0x1ac);
  uVar6 = *(int *)(param_1 + 0x15c) - 1;
  iVar2 = *(int *)(param_1 + 0x140);
  local_24 = *(int *)(iVar1 + 0x18);
  do {
    if (*(int *)(iVar1 + 0x1c) <= local_24) {
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
      if (*(uint *)(param_1 + 0x94) < *(uint *)(param_1 + 0x140)) {
        FUN_00492cec(param_1);
        uVar9 = 3;
      }
      else {
        (**(code **)(*(int *)(param_1 + 0x1b4) + 0xc))();
        uVar9 = 4;
      }
      return uVar9;
    }
    for (uVar3 = *(uint *)(iVar1 + 0x14); uVar3 <= uVar6; uVar3 = uVar3 + 1) {
      FUN_00497770(*(undefined4 *)(iVar1 + 0x20),*(int *)(param_1 + 0x164) << 7);
      iVar7 = (**(code **)(*(int *)(param_1 + 0x1bc) + 4))(param_1,iVar1 + 0x20);
      if (iVar7 == 0) {
        *(int *)(iVar1 + 0x18) = local_24;
        *(uint *)(iVar1 + 0x14) = uVar3;
        return 0;
      }
      iStack_30 = 0;
      piStack_10 = (int *)(param_1 + 0x14c);
      for (iStack_2c = 0; iStack_2c < *(int *)(param_1 + 0x148); iStack_2c = iStack_2c + 1) {
        iVar7 = *piStack_10;
        if (*(int *)(iVar7 + 0x30) == 0) {
          iStack_30 = iStack_30 + *(int *)(iVar7 + 0x3c);
        }
        else {
          pcVar4 = *(code **)(*(int *)(param_1 + 0x1c0) + 4 + *(int *)(iVar7 + 4) * 4);
          if (uVar3 < uVar6) {
            iVar8 = *(int *)(iVar7 + 0x34);
          }
          else {
            iVar8 = *(int *)(iVar7 + 0x44);
          }
          iStack_1c = *(int *)(param_2 + *(int *)(iVar7 + 4) * 4) +
                      local_24 * *(int *)(iVar7 + 0x24) * 4;
          iVar5 = *(int *)(iVar7 + 0x40);
          for (iStack_28 = 0; iStack_28 < *(int *)(iVar7 + 0x38); iStack_28 = iStack_28 + 1) {
            if (((*(uint *)(param_1 + 0x94) < iVar2 - 1U) ||
                (local_24 + iStack_28 < *(int *)(iVar7 + 0x48))) &&
               (iVar10 = 0, iVar11 = uVar3 * iVar5, 0 < iVar8)) {
              do {
                (*pcVar4)(param_1,iVar7,*(undefined4 *)(iVar1 + 0x20 + (iStack_30 + iVar10) * 4),
                          iVar11,iStack_1c);
                iVar11 = iVar11 + *(int *)(iVar7 + 0x24);
                iVar10 = iVar10 + 1;
              } while (iVar10 < iVar8);
            }
            iStack_30 = iStack_30 + *(int *)(iVar7 + 0x34);
            iStack_1c = iStack_1c + *(int *)(iVar7 + 0x24) * 4;
          }
        }
        piStack_10 = piStack_10 + 1;
      }
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
    local_24 = local_24 + 1;
  } while( true );
}

