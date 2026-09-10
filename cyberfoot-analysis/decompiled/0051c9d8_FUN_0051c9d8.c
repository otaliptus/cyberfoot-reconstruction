// Address: 0051c9d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051c9d8(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0051c8c4(param_1,param_2,param_1[0x18]);
  if (iVar1 + 1 < param_2) {
    (**(code **)(*param_1 + 4))();
    FUN_0051c93c(param_1,param_2);
  }
  else {
    for (; 0 < param_2; param_2 = param_2 + -1) {
      FUN_0051c830(param_1,param_1[0x1b]);
    }
  }
  return;
}

