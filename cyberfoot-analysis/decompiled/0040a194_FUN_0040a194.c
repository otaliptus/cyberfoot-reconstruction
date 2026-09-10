// Address: 0040a194
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_0040a194(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  
  if (-1 < param_2) {
    param_2 = param_2 + 1;
    do {
      cVar1 = FUN_004097c8(*(undefined4 *)(param_4 + -4),*param_1);
      if (cVar1 != '\0') {
        return 1;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

