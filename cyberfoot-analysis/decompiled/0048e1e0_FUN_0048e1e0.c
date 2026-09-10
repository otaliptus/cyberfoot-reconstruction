// Address: 0048e1e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048e1e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[0x69];
  if (param_1[5] != 0xcf) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x14;
    *(int *)(iVar2 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if (((param_1[0x15] != 0) && (param_1[0x1a] != 0)) && (param_1[0x22] != 0)) {
    param_1[0x73] = *(int *)(iVar1 + 0x18);
    (**(code **)(param_1[0x73] + 0xc))();
    *(undefined4 *)(iVar1 + 8) = 0;
    return;
  }
  *(undefined4 *)(*param_1 + 0x14) = 0x2e;
  (**(code **)*param_1)();
  return;
}

