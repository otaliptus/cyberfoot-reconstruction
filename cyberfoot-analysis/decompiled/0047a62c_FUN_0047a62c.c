// Address: 0047a62c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047a62c(int param_1,int param_2)

{
  *(int *)(param_1 + 0x38) = param_2;
  FUN_0047a51c(param_1);
  if ((PTR_DAT_0066b7ac[0xd] != '\0') && (param_2 != 0)) {
    if (*(char *)(param_1 + 0x41) == '\0') {
      FUN_0047a5b0(param_1);
    }
    else {
      FUN_0047aae4(param_1);
    }
  }
  return;
}

