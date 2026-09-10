// Address: 0048c4b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048c4b8(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x14) = 0x36;
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  (**(code **)*param_1)();
  return;
}

