// Address: 0040283c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040283c(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (param_2 == 0) {
      *param_1 = 0;
      iVar1 = (*(code *)PTR_FUN_00662048)(iVar1);
      if (iVar1 == 0) {
        return;
      }
      FUN_00402958(2);
      return;
    }
    iVar1 = (*(code *)PTR_FUN_0066204c)(iVar1);
    if (iVar1 != 0) {
      *param_1 = iVar1;
      return;
    }
LAB_0040286d:
    FUN_00402958(1);
    return;
  }
  if (param_2 != 0) {
    iVar1 = (*(code *)PTR_FUN_00662044)(param_2);
    if (iVar1 == 0) goto LAB_0040286d;
    *param_1 = iVar1;
  }
  return;
}

