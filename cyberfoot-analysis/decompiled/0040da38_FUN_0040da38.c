// Address: 0040da38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0040da38(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int local_c;
  
  local_c = 1;
  cVar1 = FUN_0040d778(param_1,&local_c,param_2);
  if ((cVar1 != '\0') && (iVar2 = FUN_00404ba4(param_1), iVar2 < local_c)) {
    return 1;
  }
  return 0;
}

