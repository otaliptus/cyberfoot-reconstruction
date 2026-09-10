// Address: 0042e998
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042e998(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1[10] == 0) {
    FUN_0042e494(param_1);
  }
  iVar1 = param_1[10];
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  if (param_2 != *(int *)(iVar1 + 0xc)) {
    FUN_0042eaac(param_1);
    *(int *)(param_1[10] + 0xc) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}

