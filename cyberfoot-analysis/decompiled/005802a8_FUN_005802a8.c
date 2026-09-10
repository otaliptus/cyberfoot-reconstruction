// Address: 005802a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005802a8(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  if ((*(float *)(param_1 + 0xc) != param_4) && (param_4 != _DAT_005802ec)) {
    *(float *)(param_1 + 0xc) = param_4;
    if (*(char *)(*(int *)(param_1 + 4) + 0x169) == '\0') {
      *(undefined1 *)(*(int *)(param_1 + 4) + 0x260) = 3;
    }
    FUN_00584718(*(undefined4 *)(param_1 + 4));
  }
  return;
}

