// Address: 00480828
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00480828(int param_1,undefined4 param_2)

{
  if ((*(byte *)(param_1 + 0x54) & 8) != 0) {
    *(undefined4 *)(param_1 + 0x26c) = param_2;
    *(byte *)(param_1 + 0x98) = DAT_00480854 | *(byte *)(param_1 + 0x98);
    return;
  }
  FUN_00465c68(param_1);
  return;
}

