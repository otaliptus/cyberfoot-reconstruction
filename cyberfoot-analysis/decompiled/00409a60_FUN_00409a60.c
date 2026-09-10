// Address: 00409a60
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00409a60(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  FUN_004048d4(param_3);
  if ((*param_1 != 0) && (cVar2 = (char)param_2, cVar2 == *(char *)*param_1)) {
    *param_1 = *param_1 + 1;
    iVar3 = 1;
    iVar4 = *param_1;
    iVar1 = FUN_0040f1b0(*param_1,param_2);
    *param_1 = iVar1;
    while ((*param_1 != 0 && (*param_1 = *param_1 + 1, cVar2 == *(char *)*param_1))) {
      *param_1 = *param_1 + 1;
      iVar3 = iVar3 + 1;
      iVar1 = FUN_0040f1b0(*param_1,param_2);
      *param_1 = iVar1;
    }
    if (*param_1 == 0) {
      iVar1 = FUN_0040a778(iVar4);
      *param_1 = iVar1;
    }
    iVar1 = *param_1 - iVar4;
    if (1 < iVar1) {
      if (iVar3 == 1) {
        FUN_004049c4(param_3,iVar4,iVar1 + -1);
      }
      else {
        FUN_00404f30(param_3,iVar1 - iVar3);
        iVar1 = FUN_00404da4(*param_3);
        iVar3 = FUN_0040f1b0(iVar4,param_2);
        *param_1 = iVar3;
        while ((*param_1 != 0 && (*param_1 = *param_1 + 1, cVar2 == *(char *)*param_1))) {
          FUN_00402a04(iVar4,iVar1,*param_1 - iVar4);
          iVar1 = iVar1 + (*param_1 - iVar4);
          *param_1 = *param_1 + 1;
          iVar4 = *param_1;
          iVar3 = FUN_0040f1b0(*param_1,param_2);
          *param_1 = iVar3;
        }
        if (*param_1 == 0) {
          iVar3 = FUN_0040a778(iVar4);
          *param_1 = iVar3;
        }
        FUN_00402a04(iVar4,iVar1,(*param_1 - iVar4) + -1);
      }
    }
  }
  return;
}

