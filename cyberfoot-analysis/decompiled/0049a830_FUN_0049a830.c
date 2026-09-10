// Address: 0049a830
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0049a830(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint local_3c;
  int local_38;
  int local_34;
  int *local_28;
  int *local_20;
  int local_1c [4];
  
  piVar8 = local_1c;
  iVar1 = *(int *)(param_1 + 0x154);
  piVar4 = (int *)(param_1 + 0xf4);
  for (local_38 = 0; local_38 < *(int *)(param_1 + 0xf0); local_38 = local_38 + 1) {
    iVar7 = *(int *)(*piVar4 + 0xc);
    iVar7 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                      (param_1,*(undefined4 *)(iVar1 + 0x40 + *(int *)(*piVar4 + 4) * 4),
                       *(int *)(iVar1 + 8) * iVar7,0,iVar7);
    *piVar8 = iVar7;
    piVar8 = piVar8 + 1;
    piVar4 = piVar4 + 1;
  }
  local_34 = *(int *)(iVar1 + 0x10);
  do {
    if (*(int *)(iVar1 + 0x14) <= local_34) {
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
      FUN_0049a2bc(param_1);
      return 1;
    }
    for (local_3c = *(uint *)(iVar1 + 0xc); local_3c < *(uint *)(param_1 + 0x104);
        local_3c = local_3c + 1) {
      iVar7 = 0;
      local_20 = local_1c;
      local_28 = (int *)(param_1 + 0xf4);
      for (local_38 = 0; local_38 < *(int *)(param_1 + 0xf0); local_38 = local_38 + 1) {
        iVar2 = *local_28;
        iVar3 = *(int *)(iVar2 + 0x34);
        for (iVar9 = 0; iVar9 < *(int *)(iVar2 + 0x38); iVar9 = iVar9 + 1) {
          iVar6 = *(int *)(*local_20 + (local_34 + iVar9) * 4) + iVar3 * local_3c * 0x80;
          piVar4 = (int *)(iVar1 + 0x18 + iVar7 * 4);
          for (iVar5 = 0; iVar5 < *(int *)(iVar2 + 0x34); iVar5 = iVar5 + 1) {
            *piVar4 = iVar6;
            iVar6 = iVar6 + 0x80;
            iVar7 = iVar7 + 1;
            piVar4 = piVar4 + 1;
          }
        }
        local_20 = local_20 + 1;
        local_28 = local_28 + 1;
      }
      iVar7 = (**(code **)(*(int *)(param_1 + 0x168) + 4))(param_1,iVar1 + 0x18);
      if (iVar7 == 0) {
        *(int *)(iVar1 + 0x10) = local_34;
        *(uint *)(iVar1 + 0xc) = local_3c;
        return 0;
      }
    }
    *(undefined4 *)(iVar1 + 0xc) = 0;
    local_34 = local_34 + 1;
  } while( true );
}

