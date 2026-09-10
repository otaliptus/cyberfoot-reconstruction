// Address: 0049832c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049832c(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1[5] != 100) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x14;
    *(int *)(iVar1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if (param_2 != 0) {
    FUN_004985e4(param_1,0);
  }
  (**(code **)(*param_1 + 0x10))();
  (**(code **)(param_1[6] + 8))();
  FUN_00498820(param_1);
  (**(code **)param_1[0x52])();
  param_1[0x37] = 0;
  if (param_1[0x2b] == 0) {
    iVar1 = 0x65;
  }
  else {
    iVar1 = 0x66;
  }
  param_1[5] = iVar1;
  return;
}

