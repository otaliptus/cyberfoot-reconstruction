// Address: 0043e084
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043e084(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x20)) && (param_2 != '\0')) {
    FUN_0043df98(param_1);
    *(char *)(param_1 + 0x20) = param_2;
    FUN_0043dfdc(param_1,*(undefined4 *)(param_1 + 4));
  }
  return;
}

