// Address: 0046d040
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046d040(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0047e4c0(param_1);
  if (iVar1 != 0) {
    iVar2 = FUN_0046cf08(param_1,0,1,0,1);
    if (iVar2 == 0) {
      iVar2 = FUN_0046cf08(param_1,0,1,0,0);
    }
    if (iVar2 != 0) {
      FUN_00482224(iVar1,iVar2);
    }
  }
  return;
}

