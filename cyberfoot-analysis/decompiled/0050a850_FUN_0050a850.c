// Address: 0050a850
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050a850(int param_1)

{
  FUN_0050a6d8(param_1);
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_0050b490(*(int *)(param_1 + 0x38),param_1,0);
    if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 0x1c) & 0x10) != 0) {
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0xb0);
    }
  }
  return;
}

