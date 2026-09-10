// Address: 004c2f48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c2f48(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00404928(param_2,param_1);
  while( true ) {
    iVar1 = FUN_00404ba4(*param_2);
    if ((iVar1 < 2) || (*(char *)*param_2 != '0')) break;
    puVar2 = param_2;
    iVar1 = FUN_00404ba4(*param_2);
    FUN_00404e04(*param_2,2,iVar1 + -1,puVar2);
  }
  return;
}

