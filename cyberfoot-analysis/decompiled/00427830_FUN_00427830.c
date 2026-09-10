// Address: 00427830
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00427830(int param_1)

{
  if (*(short *)(param_1 + 0x42) != 0) {
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),param_1);
    return 1;
  }
  return 0;
}

