// Address: 0047f36c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047f36c(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x210)) {
    *(char *)(param_1 + 0x210) = param_2;
    if (param_2 == '\0') {
      FUN_0047eea0(*(undefined4 *)(param_1 + 0x208),0);
      FUN_0047eea0(*(undefined4 *)(param_1 + 0x20c),0);
    }
    else {
      FUN_0047f348(param_1);
    }
  }
  return;
}

