// Address: 00451d34
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_00451d34(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = FUN_0046cde4(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_0046cae0(param_1);
    iVar3 = FUN_00432f54(uVar2,&LAB_0044f2ac,0);
    return iVar3 != 0;
  }
  return false;
}

