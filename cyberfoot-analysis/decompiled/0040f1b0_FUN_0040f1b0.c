// Address: 0040f1b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0040f1b0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = thunk_FUN_0040a916(param_1,param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    cVar1 = FUN_0040ed98(param_1,iVar2 - param_1);
    if (cVar1 == '\0') break;
    if (cVar1 == '\x01') {
      iVar2 = iVar2 + 1;
    }
    iVar2 = thunk_FUN_0040a916(iVar2 + 1,param_2);
  }
  return iVar2;
}

