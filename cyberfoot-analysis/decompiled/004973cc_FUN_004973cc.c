// Address: 004973cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004973cc(int *param_1)

{
  int iVar1;
  
  if (param_1[0x68] == 0) {
    iVar1 = FUN_00496f0c(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (*(int *)(param_1[0x6e] + 0x14) + 0xd0 == param_1[0x68]) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x62;
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_1[0x6e] + 0x14);
    (**(code **)(*param_1 + 4))(param_1,3);
    param_1[0x68] = 0;
  }
  else {
    iVar1 = (**(code **)(param_1[6] + 0x14))(param_1,*(undefined4 *)(param_1[0x6e] + 0x14));
    if (iVar1 == 0) {
      return 0;
    }
  }
  *(uint *)(param_1[0x6e] + 0x14) = *(int *)(param_1[0x6e] + 0x14) + 1U & 7;
  return 1;
}

