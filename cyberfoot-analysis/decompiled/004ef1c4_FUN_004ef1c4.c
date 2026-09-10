// Address: 004ef1c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ef1c4(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = (**(code **)(*(int *)param_1[0x8e] + 0x1c))();
  if (cVar1 == '\0') {
    iVar2 = (**(code **)(*(int *)param_1[0x8e] + 0x2c))();
    iVar2 = iVar2 + 4;
  }
  (**(code **)(*param_1 + 0x44))(param_1,param_2);
  *param_2 = *param_2 + iVar2;
  param_2[1] = param_2[1];
  param_2[3] = param_2[3];
  param_2[2] = *param_2 + 0x14;
  return;
}

