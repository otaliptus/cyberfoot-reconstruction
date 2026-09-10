// Address: 00404a30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00404a30(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *local_1010 [1024];
  
  local_1010[0] = param_1;
  if (param_3 < 1) {
    FUN_004048d4(param_1);
  }
  else {
    if ((param_3 + 1 < 0x7ff) &&
       (iVar1 = FUN_004049f4(local_1010,0xfff,param_2,param_3), -1 < iVar1)) {
      FUN_004049c4(param_1,local_1010,iVar1);
      return;
    }
    iVar1 = (param_3 + 1) * 2;
    FUN_00404f30(param_1,iVar1);
    iVar1 = FUN_004049f4(*param_1,iVar1,param_2,param_3);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    FUN_00404f30(param_1,iVar1);
  }
  return;
}

