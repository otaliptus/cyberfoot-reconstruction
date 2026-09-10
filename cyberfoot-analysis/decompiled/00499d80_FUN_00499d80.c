// Address: 00499d80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00499d80(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[0x54];
  if (param_2 != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 4;
    (**(code **)*param_1)();
  }
  *(int *)(iVar1 + 0x30) = param_1[8];
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(int *)(iVar1 + 0x3c) = param_1[0x3a] * 2;
  return;
}

