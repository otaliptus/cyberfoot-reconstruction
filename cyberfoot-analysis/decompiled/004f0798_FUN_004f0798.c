// Address: 004f0798
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f0798(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2b0) = param_2;
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    FUN_004f0ee4(param_1);
  }
  FUN_004eab6c(*(undefined4 *)(param_1 + 0x270),*(undefined4 *)(param_1 + 0x2b0));
  if (*(char *)(param_1 + 0x251) != '\0') {
    FUN_004eef38(param_1);
  }
  return;
}

