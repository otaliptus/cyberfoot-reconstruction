// Address: 0041e214
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041e214(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 < 0) || (0x7ffffff < param_2)) {
    FUN_0041dfa8(*param_1,PTR_PTR_0066b0f4,param_2);
  }
  if ((int)param_1[3] < param_2) {
    FUN_0041e1d8(param_1,param_2);
  }
  iVar1 = param_1[2];
  if (iVar1 < param_2) {
    FUN_004032a8(param_1[1] + iVar1 * 4,(param_2 - iVar1) * 4,0);
  }
  else {
    iVar1 = iVar1 + -1;
    if (param_2 - iVar1 == 0 || param_2 < iVar1) {
      iVar2 = (param_2 - iVar1) + -1;
      do {
        FUN_0041df0c(param_1,iVar1);
        iVar1 = iVar1 + -1;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0);
    }
  }
  param_1[2] = param_2;
  return;
}

