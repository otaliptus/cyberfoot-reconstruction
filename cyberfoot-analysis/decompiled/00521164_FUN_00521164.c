// Address: 00521164
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00521164(int param_1,int *param_2)

{
  FUN_005169c0(param_2,3);
  FUN_005169c0(param_2,1);
  (**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x18,2);
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_005169c0(param_2,5);
    FUN_005169c0(param_2,2);
    (**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x1c,4);
  }
  FUN_005169c0(param_2,0);
  return;
}

