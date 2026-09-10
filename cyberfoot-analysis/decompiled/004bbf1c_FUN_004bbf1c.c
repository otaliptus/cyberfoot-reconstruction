// Address: 004bbf1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004bbf1c(int param_1,undefined4 param_2)

{
  if ((*(char *)(param_1 + 0x1e8) != '\0') && (*(int *)(param_1 + 0x1ec) != -1)) {
    FUN_004bb900(param_1,param_1 + 0x1fe);
  }
  *(undefined4 *)(param_1 + 0x1ec) = 0xffffffff;
  FUN_0045bd90(param_1,param_2);
  if (*(short *)(param_1 + 0x21a) != 0) {
    (**(code **)(param_1 + 0x218))(*(undefined4 *)(param_1 + 0x21c),param_1);
  }
  return;
}

