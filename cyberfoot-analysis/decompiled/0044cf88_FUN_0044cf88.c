// Address: 0044cf88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0044cf88(int param_1,undefined4 param_2)

{
  char cVar1;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    cVar1 = FUN_004039e8(param_1,param_2);
    if (cVar1 != '\0') break;
    param_1 = FUN_00403a10(param_1);
  }
  return 1;
}

