// Address: 0048da5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048da5c(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1[5] != 0xcf) && (param_1[5] != 0xcc)) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x14;
    *(int *)(iVar1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if (param_2 < 1) {
    param_2 = 1;
  }
  if ((*(int *)(param_1[0x6d] + 0x14) != 0) && (param_1[0x24] < param_2)) {
    param_2 = param_1[0x24];
  }
  param_1[0x26] = param_2;
  FUN_0048d860(param_1);
  return;
}

