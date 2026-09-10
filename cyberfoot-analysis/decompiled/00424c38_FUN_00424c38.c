// Address: 00424c38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00424c38(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_004096cc(param_2,"False");
  if (cVar1 != '\0') {
    FUN_00426644(param_1,8);
    return;
  }
  cVar1 = FUN_004096cc(param_2,&DAT_00424cd8);
  if (cVar1 == '\0') {
    cVar1 = FUN_004096cc(param_2,&DAT_00424ce8);
    if (cVar1 == '\0') {
      cVar1 = FUN_004096cc(param_2,&DAT_00424cf8);
      if (cVar1 == '\0') {
        FUN_00426644(param_1,7);
        FUN_0042645c(param_1,param_2);
      }
      else {
        FUN_00426644(param_1,0xd);
      }
    }
    else {
      FUN_00426644(param_1,0);
    }
  }
  else {
    FUN_00426644(param_1,9);
  }
  return;
}

