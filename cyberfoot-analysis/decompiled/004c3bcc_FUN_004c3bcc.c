// Address: 004c3bcc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c3bcc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_004c3b98(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_004c3b98(param_2), cVar1 == '\0')) {
    FUN_00404da4(param_1);
    FUN_00404da4(param_2);
    cVar1 = FUN_004c3b28();
    if (cVar1 != '\0') {
      FUN_004c3604(param_1,param_2,param_3);
      return;
    }
    FUN_004c38a4(param_1,param_2,param_3);
    return;
  }
  FUN_00404928(param_3,&DAT_004c3c38);
  return;
}

