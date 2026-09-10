// Address: 0064dee4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0064dee4(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  
  if (param_1 != 0) {
    local_10 = param_3;
    if (param_1 == 2) {
      local_10 = -1;
    }
    local_c = param_2;
    if (param_1 == 3) {
      local_10 = param_4;
      local_c = param_5;
    }
    if (((param_1 == 4) || (param_1 == 6)) || (param_1 == 10)) {
      local_c = -1;
      local_10 = FUN_0064f2d0(param_2);
    }
    if (param_1 == 5) {
      local_10 = -1;
      local_c = -1;
    }
    if (((param_1 == 7) || (param_1 == 8)) || (param_1 == 9)) {
      local_c = -1;
      local_10 = -1;
    }
    iVar1 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b6ac);
    if (0 < iVar1) {
      iVar2 = 1;
      do {
        if (((param_1 == *(int *)(*(int *)PTR_DAT_0066b6ac + iVar2 * 0xc)) &&
            (*(int *)(*(int *)PTR_DAT_0066b6ac + 4 + iVar2 * 0xc) == local_c)) &&
           (*(int *)(*(int *)PTR_DAT_0066b6ac + 8 + iVar2 * 0xc) == local_10)) {
          return iVar2;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return 0;
}

