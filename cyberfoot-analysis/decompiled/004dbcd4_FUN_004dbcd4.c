// Address: 004dbcd4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004dbcd4(int param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00403c10(param_1,PTR_PTR_004db538);
  if (cVar1 != '\0') {
    FUN_004dc188(param_1,param_2);
    return;
  }
  FUN_004051d4(param_2,*(undefined4 *)(param_1 + 0x58));
  return;
}

