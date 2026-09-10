// Address: 00401538
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00401538(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[1];
  iVar2 = *param_1;
  *piVar1 = iVar2;
  *(int **)(iVar2 + 4) = piVar1;
  *param_1 = (int)DAT_0066c5e8;
  DAT_0066c5e8 = param_1;
  return;
}

