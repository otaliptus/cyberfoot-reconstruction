// Address: 004096cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004096cc(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    if (param_1 == 0) {
      return 0;
    }
    if ((param_2 == 0) || (*(int *)(param_1 + -4) != *(int *)(param_2 + -4))) {
      return 0;
    }
    iVar1 = FUN_00409678();
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}

