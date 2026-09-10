// Address: 004931b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004931b8(int param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uStack_30;
  int local_2c;
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  undefined4 *local_18;
  int *local_14;
  int *piStack_10;
  
  iVar3 = *(int *)(param_1 + 0x1ac);
  iVar1 = *(int *)(param_1 + 0x140);
  while ((*(int *)(param_1 + 0x90) < *(int *)(param_1 + 0x98) ||
         ((*(int *)(param_1 + 0x90) == *(int *)(param_1 + 0x98) &&
          (*(uint *)(param_1 + 0x94) <= *(uint *)(param_1 + 0x9c)))))) {
    iVar4 = (*(code *)**(undefined4 **)(param_1 + 0x1b4))();
    if (iVar4 == 0) {
      return 0;
    }
  }
  local_2c = 0;
  local_18 = (undefined4 *)(iVar3 + 0x48);
  iVar3 = *(int *)(param_1 + 0xd8);
  local_14 = param_2;
  for (; local_2c < *(int *)(param_1 + 0x24); local_2c = local_2c + 1) {
    if (*(int *)(iVar3 + 0x30) != 0) {
      piStack_10 = (int *)(**(code **)(*(int *)(param_1 + 4) + 0x20))
                                    (param_1,*local_18,
                                     *(int *)(param_1 + 0x9c) * *(int *)(iVar3 + 0xc),0,
                                     *(int *)(iVar3 + 0xc));
      if (*(uint *)(param_1 + 0x9c) < iVar1 - 1U) {
        uStack_24 = *(uint *)(iVar3 + 0xc);
      }
      else {
        uStack_24 = *(uint *)(iVar3 + 0x20) % *(uint *)(iVar3 + 0xc);
        if (uStack_24 == 0) {
          uStack_24 = *(uint *)(iVar3 + 0xc);
        }
      }
      pcVar2 = *(code **)(*(int *)(param_1 + 0x1c0) + 4 + local_2c * 4);
      iStack_20 = *local_14;
      iStack_28 = 0;
      if (0 < (int)uStack_24) {
        do {
          iVar5 = 0;
          iVar4 = *piStack_10;
          for (uStack_30 = 0; uStack_30 < *(uint *)(iVar3 + 0x1c); uStack_30 = uStack_30 + 1) {
            (*pcVar2)(param_1,iVar3,iVar4,iVar5,iStack_20);
            iVar4 = iVar4 + 0x80;
            iVar5 = iVar5 + *(int *)(iVar3 + 0x24);
          }
          iStack_20 = iStack_20 + *(int *)(iVar3 + 0x24) * 4;
          iStack_28 = iStack_28 + 1;
          piStack_10 = piStack_10 + 1;
        } while (iStack_28 < (int)uStack_24);
      }
    }
    local_18 = local_18 + 1;
    local_14 = local_14 + 1;
    iVar3 = iVar3 + 0x54;
  }
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  if (*(uint *)(param_1 + 0x9c) < *(uint *)(param_1 + 0x140)) {
    return 3;
  }
  return 4;
}

