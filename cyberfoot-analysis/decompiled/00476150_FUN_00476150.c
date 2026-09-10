// Address: 00476150
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00476150(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00464a80(param_1);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_0046a2ec(iVar1,param_1,0,0);
    if (iVar2 == 0) {
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

