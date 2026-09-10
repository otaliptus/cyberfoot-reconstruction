// Address: 0041cb2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0041cb2c(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0041cacc(param_2,param_4);
  }
  if (param_3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0041cacc(param_3,param_4);
  }
  if (iVar2 == 0) {
    iVar4 = param_3;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = param_2;
    if ((iVar3 != 0) && (cVar1 = thunk_FUN_00403cb4(iVar2,iVar3), iVar4 = param_3, cVar1 != '\0')) {
      iVar4 = param_2;
    }
  }
  return iVar4;
}

