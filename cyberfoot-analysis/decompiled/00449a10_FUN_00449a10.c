// Address: 00449a10
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00449a10(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00449978(param_1);
  if (iVar1 == 0) {
    iVar2 = FUN_00449900(param_1);
  }
  else {
    do {
      iVar2 = iVar1;
      iVar1 = FUN_004499f0(iVar2);
    } while (iVar1 != 0);
  }
  return iVar2;
}

