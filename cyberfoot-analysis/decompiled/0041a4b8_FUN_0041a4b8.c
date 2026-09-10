// Address: 0041a4b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041a4b8(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = **(char **)*param_2;
  if (cVar1 == '\x05') {
    FUN_0041a318(param_1,param_2,param_3);
    return;
  }
  if (cVar1 != '\n') {
    if (cVar1 != '\v') {
      FUN_004048d4(param_3);
      return;
    }
    FUN_0041a408(param_1,param_2,param_3);
    return;
  }
  FUN_0041a388(param_1,param_2,param_3);
  return;
}

