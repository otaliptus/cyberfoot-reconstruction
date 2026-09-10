// Address: 0043fbd4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043fbd4(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (*(char *)(param_1 + 0x221) == '\x03') {
    for (; (iVar1 != 0 && (*(int *)(iVar1 + 0x158) == 0)); iVar1 = *(int *)(iVar1 + 0x30)) {
    }
    if (iVar1 == 0) {
      FUN_0045f0d4(param_1);
      return;
    }
    FUN_00487a94(*(undefined4 *)PTR_DAT_0066b3ac,*(undefined4 *)(iVar1 + 0x158));
  }
  else if (*(char *)(param_1 + 0x221) == '\x06') {
    iVar1 = FUN_0047e4c0(param_1);
    if (iVar1 == 0) {
      FUN_0045f0d4(param_1);
      return;
    }
    FUN_00483bc4();
  }
  else {
    FUN_0045f0d4(param_1);
  }
  return;
}

