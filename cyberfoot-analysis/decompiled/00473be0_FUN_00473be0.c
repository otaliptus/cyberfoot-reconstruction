// Address: 00473be0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00473be0(int param_1,int *param_2,int *param_3)

{
  char cVar1;
  
  FUN_0047481c(param_1,param_2);
  if (param_2 == (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x50) + 100))();
  }
  else {
    cVar1 = FUN_004302ec(param_2);
    if (cVar1 == '\x01') {
      (**(code **)(*param_2 + 100))();
    }
    else {
      (**(code **)(*param_3 + 8))(param_3,param_2);
      (**(code **)(*param_3 + 0x6c))(param_3,1);
      (**(code **)(*param_3 + 100))();
    }
  }
  return;
}

