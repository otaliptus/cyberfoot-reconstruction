// Address: 00487fe4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00487fe4(int param_1)

{
  if (*(ushort *)(param_1 + 0x8a) != 0) {
    KillTimer((HWND)0x0,(uint)*(ushort *)(param_1 + 0x8a));
    *(undefined2 *)(param_1 + 0x8a) = 0;
  }
  return;
}

