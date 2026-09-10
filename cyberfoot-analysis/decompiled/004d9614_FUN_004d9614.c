// Address: 004d9614
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d9614(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0040ff2c(param_1,&DAT_004d964c);
  if (cVar1 != '\0') {
    uVar2 = FUN_004d947c(param_1);
    FUN_004d9258(uVar2,param_2);
    return;
  }
  FUN_004051d4(param_2,*(undefined4 *)(param_1 + 100));
  return;
}

