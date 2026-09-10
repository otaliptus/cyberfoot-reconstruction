// Address: 0049877c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049877c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_1[0x37] != 0) ||
     (((iVar1 = param_1[5], iVar1 != 0x65 && (iVar1 != 0x66)) && (iVar1 != 0x67)))) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x14;
    *(int *)(iVar1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  (**(code **)(param_1[0x56] + 0x14))(param_1,param_2,param_3);
  return;
}

