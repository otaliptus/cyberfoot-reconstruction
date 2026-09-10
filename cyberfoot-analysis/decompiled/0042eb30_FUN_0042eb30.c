// Address: 0042eb30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042eb30(int param_1,int *param_2)

{
  int iVar1;
  undefined2 extraout_var;
  int local_10;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    local_10 = 0;
    (**(code **)(*param_2 + 0x10))(param_2,&local_10,4);
    local_10 = FUN_004208d4(param_2);
    local_10 = local_10 + -4;
    if (*(char *)(param_1 + 0x2c) == '\0') {
      FUN_0042ec3c(param_1,param_2);
    }
    else {
      FUN_0042ebb0(param_1,param_2);
    }
    (**(code **)(*param_2 + 0x14))(param_2,local_10,0);
    iVar1 = (**(code **)*param_2)();
    local_10 = iVar1 - local_10;
    (**(code **)(*param_2 + 0x10))(param_2,&local_10,4);
    (**(code **)(*param_2 + 0x14))(param_2,0,CONCAT22(extraout_var,2));
  }
  return;
}

