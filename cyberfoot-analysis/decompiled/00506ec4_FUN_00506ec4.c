// Address: 00506ec4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00506ec4(int *param_1)

{
  int iVar1;
  
  FUN_00467f5c(param_1);
  FUN_00506d18(param_1);
  *(undefined1 *)(param_1 + 0x148) = 0;
  FUN_004e2eac(param_1 + 0x163);
  param_1[0x147] = 0;
  iVar1 = param_1[0x13a];
  param_1[0x13a] = 0;
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x204))(param_1,iVar1,3);
  }
  if (*(short *)((int)param_1 + 0x43a) != 0) {
    (*(code *)param_1[0x10e])(param_1[0x10f],param_1);
  }
  return;
}

