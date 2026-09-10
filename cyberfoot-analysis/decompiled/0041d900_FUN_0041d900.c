// Address: 0041d900
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0041d900(undefined4 param_1,undefined4 *param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  
  if (-1 < param_4) {
    param_4 = param_4 + 1;
    puVar2 = (undefined4 *)(param_3 + 4);
    do {
      cVar1 = FUN_004096cc(*puVar2,param_1);
      if (cVar1 != '\0') {
        *param_2 = puVar2[-1];
        return 1;
      }
      puVar2 = puVar2 + 2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 0;
}

