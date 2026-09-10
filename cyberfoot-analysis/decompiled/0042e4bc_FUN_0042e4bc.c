// Address: 0042e4bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042e4bc(int *param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iStack_10;
  
  iStack_10 = param_3;
  (**(code **)(*param_2 + 0xc))(param_2,&iStack_10,4);
  if (iStack_10 < 5) {
    (**(code **)(*param_1 + 8))(param_1,0);
  }
  else {
    cVar1 = FUN_0042ea4c(param_1,param_2);
    if (cVar1 == '\0') {
      FUN_0042e5f8(param_1,param_2,iStack_10 + -4);
    }
    else {
      FUN_0042e528(param_1,param_2);
    }
  }
  iVar2 = (**(code **)(*param_1 + 0x24))();
  *(bool *)((int)param_1 + 0x22) = iVar2 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}

