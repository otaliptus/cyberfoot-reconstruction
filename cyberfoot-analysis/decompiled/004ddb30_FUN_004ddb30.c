// Address: 004ddb30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ddb30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00405574(&DAT_004ddb6c,param_1);
  if (iVar1 == 0) {
    FUN_0040502c(param_2,param_1);
  }
  else {
    FUN_004053fc(param_1,iVar1 + 1,0x7fffffff,param_2);
  }
  return;
}

