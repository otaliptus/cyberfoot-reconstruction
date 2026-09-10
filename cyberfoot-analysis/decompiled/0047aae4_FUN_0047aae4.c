// Address: 0047aae4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047aae4(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x41) != '\0') {
    iVar1 = FUN_00463094(*(undefined4 *)(param_1 + 0x38));
    if (iVar1 != 0) {
      FUN_0047aac0(param_1,*(undefined1 *)(iVar1 + 0x5f));
      *(undefined1 *)(param_1 + 0x41) = 1;
    }
  }
  return;
}

