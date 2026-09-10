// Address: 004d3108
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d3108(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2c))();
  if (cVar1 != '\0') {
    param_1[8] = param_2;
    (**(code **)(*(int *)param_1[9] + 0x7c))();
    if ((*(byte *)(param_1[9] + 0x1c) & 0x10) != 0) {
      cVar1 = FUN_004cd464(param_1[9]);
      if (cVar1 != '\0') {
        FUN_004cfae4(param_1[9],param_2);
      }
    }
  }
  return;
}

