// Address: 00403c10
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00403c10(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    cVar1 = thunk_FUN_00403cb4(*param_1,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

