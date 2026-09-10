// Address: 004053fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004053fc(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00405260(param_1);
  if (param_2 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_2 + -1;
    if (iVar1 < param_2 + -1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1 - iVar3;
    if (param_3 < iVar1 - iVar3) {
      iVar2 = param_3;
    }
  }
  FUN_004050e4(param_4,iVar3 * 2 + param_1,iVar2);
  return;
}

