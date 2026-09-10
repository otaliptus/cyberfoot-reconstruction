// Address: 004045c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004045c0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  param_1 = param_1 + 1;
  do {
    FUN_00406d44(*(undefined4 *)param_1[1],*param_1);
    param_1 = param_1 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

