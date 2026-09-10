// Address: 00492fc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00492fc8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint local_3c;
  int local_38;
  int local_34;
  int *local_28;
  int *local_20;
  int local_1c [4];
  
  piVar9 = local_1c;
  iVar1 = *(int *)(param_1 + 0x1ac);
  piVar4 = (int *)(param_1 + 0x14c);
  for (local_38 = 0; local_38 < *(int *)(param_1 + 0x148); local_38 = local_38 + 1) {
    iVar8 = *(int *)(*piVar4 + 0xc);
    iVar8 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                      (param_1,*(undefined4 *)(iVar1 + 0x48 + *(int *)(*piVar4 + 4) * 4),
                       *(int *)(param_1 + 0x94) * iVar8,1,iVar8);
    *piVar9 = iVar8;
    piVar9 = piVar9 + 1;
    piVar4 = piVar4 + 1;
  }
  local_34 = *(int *)(iVar1 + 0x18);
  do {
    if (*(int *)(iVar1 + 0x1c) <= local_34) {
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
      if (*(uint *)(param_1 + 0x94) < *(uint *)(param_1 + 0x140)) {
        FUN_00492cec(param_1);
        uVar5 = 3;
      }
      else {
        (**(code **)(*(int *)(param_1 + 0x1b4) + 0xc))();
        uVar5 = 4;
      }
      return uVar5;
    }
    for (local_3c = *(uint *)(iVar1 + 0x14); local_3c < *(uint *)(param_1 + 0x15c);
        local_3c = local_3c + 1) {
      iVar8 = 0;
      local_20 = local_1c;
      local_28 = (int *)(param_1 + 0x14c);
      for (local_38 = 0; local_38 < *(int *)(param_1 + 0x148); local_38 = local_38 + 1) {
        iVar2 = *local_28;
        iVar3 = *(int *)(iVar2 + 0x34);
        for (iVar10 = 0; iVar10 < *(int *)(iVar2 + 0x38); iVar10 = iVar10 + 1) {
          iVar7 = *(int *)(*local_20 + (local_34 + iVar10) * 4) + iVar3 * local_3c * 0x80;
          piVar4 = (int *)(iVar1 + 0x20 + iVar8 * 4);
          for (iVar6 = 0; iVar6 < *(int *)(iVar2 + 0x34); iVar6 = iVar6 + 1) {
            *piVar4 = iVar7;
            iVar7 = iVar7 + 0x80;
            iVar8 = iVar8 + 1;
            piVar4 = piVar4 + 1;
          }
        }
        local_20 = local_20 + 1;
        local_28 = local_28 + 1;
      }
      iVar8 = (**(code **)(*(int *)(param_1 + 0x1bc) + 4))(param_1,iVar1 + 0x20);
      if (iVar8 == 0) {
        *(int *)(iVar1 + 0x18) = local_34;
        *(uint *)(iVar1 + 0x14) = local_3c;
        return 0;
      }
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
    local_34 = local_34 + 1;
  } while( true );
}

