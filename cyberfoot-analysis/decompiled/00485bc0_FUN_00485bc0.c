// Address: 00485bc0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00485bc0(int param_1,undefined4 param_2)

{
  while( true ) {
    if (param_1 == 0) {
      FUN_004048d4(param_2);
      return;
    }
    if (*(int *)(param_1 + 0x80) != 0) break;
    param_1 = *(int *)(param_1 + 0x30);
  }
  FUN_00404928(param_2,*(undefined4 *)(param_1 + 0x80));
  return;
}

