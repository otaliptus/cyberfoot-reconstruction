// Address: 0041efcc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041efcc(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_00403c10(param_2,param_1[1]);
  if (cVar1 == '\0') {
    FUN_0041dfa8(PTR_PTR_0041b73c,PTR_PTR_0066b340,0);
  }
  FUN_0041dec0(param_1[2],param_2);
  *(int **)(param_2 + 4) = param_1;
  *(int *)(param_2 + 8) = param_1[4];
  param_1[4] = param_1[4] + 1;
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  (**(code **)(*param_1 + 0x14))(param_1,param_2,0);
  FUN_0041ecfc(param_1);
  FUN_0041e960(param_1,param_2,0);
  return;
}

