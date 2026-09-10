// Address: 0064c27c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064c27c(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + param_1 * 0x2f8) < 5) {
    piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2e0 + param_1 * 0x2f8);
    *piVar1 = *piVar1 + *(int *)(PTR_DAT_0066b290 + param_2 * 4 + param_3 * 0x28 + -0x2c);
    if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x2e0 + param_1 * 0x2f8) < 100000) {
      if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x2e0 + param_1 * 0x2f8) < 10000) {
        if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x2e0 + param_1 * 0x2f8) < 1000) {
          if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x2e0 + param_1 * 0x2f8) < 0x65) {
            if (10 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x2e0 + param_1 * 0x2f8)) {
              iVar2 = 1;
            }
          }
          else {
            iVar2 = 2;
          }
        }
        else {
          iVar2 = 3;
        }
      }
      else {
        iVar2 = 4;
      }
    }
    else {
      iVar2 = 5;
    }
    if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + param_1 * 0x2f8) < iVar2) {
      *(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + param_1 * 0x2f8) = iVar2;
    }
  }
  return;
}

