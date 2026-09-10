// Address: 004dd690
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004dd690(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_004dd644(param_1,0);
  if (iVar1 == 0) {
    FUN_0040502c(param_3,param_2);
  }
  else {
    FUN_0040502c(param_3,*(undefined4 *)(iVar1 + 0x38));
  }
  return;
}

