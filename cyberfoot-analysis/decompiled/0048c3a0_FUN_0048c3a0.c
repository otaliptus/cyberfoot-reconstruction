// Address: 0048c3a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0048c3a0(int *param_1)

{
  int iVar1;
  
  if ((param_1[5] < 200) || (0xd2 < param_1[5])) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x14;
    *(int *)(iVar1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  return *(undefined4 *)(param_1[0x6d] + 0x14);
}

