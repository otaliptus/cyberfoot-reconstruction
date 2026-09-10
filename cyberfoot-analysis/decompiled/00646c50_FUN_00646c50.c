// Address: 00646c50
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00646c50(uint param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  if (-1 < (int)(param_2 | param_1)) {
    iVar2 = 0x13;
    piVar1 = (int *)PTR_DAT_0066b714;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x2f0 + param_1 * 0x2f8) == *piVar1) &&
         (*(int *)(*(int *)PTR_DAT_0066af70 + 0x2f0 + param_2 * 0x2f8) == piVar1[1])) {
        param_3 = 1;
        break;
      }
      piVar1 = piVar1 + 2;
      iVar2 = iVar2 + -1;
      param_3 = 0;
    } while (iVar2 != 0);
    if ((char)param_3 == '\0') {
      iVar2 = 0x13;
      piVar1 = (int *)PTR_DAT_0066b714;
      do {
        if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x2f0 + param_2 * 0x2f8) == *piVar1) &&
           (*(int *)(*(int *)PTR_DAT_0066af70 + 0x2f0 + param_1 * 0x2f8) == piVar1[1])) {
          return 1;
        }
        piVar1 = piVar1 + 2;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return param_3;
}

