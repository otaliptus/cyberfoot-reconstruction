// Address: 004f9a28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f9a28(int *param_1)

{
  int iVar1;
  
  FUN_004f6380(param_1[0x166]);
  iVar1 = (**(code **)(*param_1 + 0x11c))();
  param_1[0x167] = iVar1 + -1;
  param_1[0x13c] = iVar1 + -1;
  (**(code **)(*param_1 + 0x7c))();
  FUN_005116b0(param_1);
  return;
}

