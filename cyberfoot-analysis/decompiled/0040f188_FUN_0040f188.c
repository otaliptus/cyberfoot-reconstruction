// Address: 0040f188
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0040f188(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0040f1b0(param_1,param_2);
  iVar3 = iVar2;
  if ((char)param_2 != '\0') {
    while (iVar1 = iVar3, iVar1 != 0) {
      iVar3 = FUN_0040f1b0(iVar1 + 1,param_2);
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

