// Address: 004807f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004807f8(int param_1,undefined4 param_2)

{
  if ((*(byte *)(param_1 + 0x54) & 8) != 0) {
    *(undefined4 *)(param_1 + 0x268) = param_2;
    *(byte *)(param_1 + 0x98) = DAT_00480824 | *(byte *)(param_1 + 0x98);
    return;
  }
  FUN_00465c24(param_1);
  return;
}

