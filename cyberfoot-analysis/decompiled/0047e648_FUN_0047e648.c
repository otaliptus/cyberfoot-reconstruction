// Address: 0047e648
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047e648(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    cVar1 = FUN_0047e800(param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_0046688c(*(undefined4 *)(param_1 + 4));
      if (cVar1 == '\0') {
        FUN_0047ed50(param_1,0);
      }
      else {
        FUN_0047ed50(param_1,*(undefined4 *)(param_1 + 0x10));
      }
    }
  }
  return;
}

