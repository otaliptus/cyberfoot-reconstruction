// Address: 0048d470
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048d470(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_18;
  int *local_14;
  
  local_14 = param_1 + 0x53;
  for (local_18 = 0; local_18 < param_1[0x52]; local_18 = local_18 + 1) {
    iVar1 = *local_14;
    if (*(int *)(iVar1 + 0x4c) == 0) {
      iVar2 = *(int *)(iVar1 + 0x10);
      if (((iVar2 < 0) || (3 < iVar2)) || (param_1[iVar2 + 0x29] == 0)) {
        iVar3 = *param_1;
        *(undefined4 *)(iVar3 + 0x14) = 0x34;
        *(int *)(iVar3 + 0x18) = iVar2;
        (**(code **)*param_1)();
      }
      uVar4 = (**(code **)param_1[1])(param_1,1,0x84);
      FUN_0048ab0c();
      *(undefined4 *)(iVar1 + 0x4c) = uVar4;
    }
    local_14 = local_14 + 1;
  }
  return;
}

