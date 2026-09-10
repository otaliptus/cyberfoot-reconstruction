// Address: 00424ee4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00424ee4(int param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0) && (param_3 != 0)) {
    uVar2 = FUN_004039cc(param_3);
    cVar1 = thunk_FUN_00403cb4(*param_2,uVar2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

