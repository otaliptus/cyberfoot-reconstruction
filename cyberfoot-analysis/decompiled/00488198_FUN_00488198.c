// Address: 00488198
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00488198(int param_1)

{
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_00488154(param_1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x58) = 0;
    FUN_00485d80();
    FUN_00487fe4(param_1);
  }
  return;
}

