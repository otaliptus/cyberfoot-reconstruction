// Address: 004d3300
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_004d3300(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1 * 2 + 4;
  piVar2 = (int *)FUN_004027fc(iVar1);
  *piVar2 = iVar1;
  return piVar2 + 1;
}

