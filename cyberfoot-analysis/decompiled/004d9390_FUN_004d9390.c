// Address: 004d9390
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d9390(int param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_004d936c(param_1);
  if (cVar1 != '\0') {
    FUN_0040502c(param_2,*(undefined4 *)(param_1 + 0x4c));
    return;
  }
  FUN_004d83a8(param_1 + 0x44,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x7c),param_2);
  return;
}

