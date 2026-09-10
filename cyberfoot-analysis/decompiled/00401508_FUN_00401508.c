// Address: 00401508
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00401508(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_004014b0();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  piVar2[2] = *param_2;
  piVar2[3] = param_2[1];
  iVar1 = *param_1;
  *piVar2 = iVar1;
  piVar2[1] = (int)param_1;
  *(int **)(iVar1 + 4) = piVar2;
  *param_1 = (int)piVar2;
  return 1;
}

