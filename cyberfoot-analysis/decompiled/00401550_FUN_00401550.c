// Address: 00401550
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00401550(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)*param_1;
  *param_3 = *param_2;
  param_3[1] = param_2[1];
  do {
    puVar1 = (undefined4 *)*puVar3;
    if (*param_3 == puVar3[2] + puVar3[3]) {
      FUN_00401538(puVar3);
      *param_3 = puVar3[2];
      param_3[1] = param_3[1] + puVar3[3];
    }
    else if (*param_3 + param_3[1] == puVar3[2]) {
      FUN_00401538(puVar3);
      param_3[1] = param_3[1] + puVar3[3];
    }
    puVar3 = puVar1;
  } while (param_1 != puVar1);
  cVar2 = FUN_00401508(param_1,param_3);
  if (cVar2 == '\0') {
    *param_3 = 0;
  }
  return;
}

