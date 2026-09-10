// Address: 004be518
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004be518(int *param_1,int param_2)

{
  if (*(short *)(param_2 + 4) == 0x20) {
    *(undefined1 *)(param_1 + 0xa3) = 2;
  }
  if (*(short *)(param_2 + 4) == 0xd) {
    FUN_00403c80(param_1);
  }
  (**(code **)(*param_1 + 200))();
  return;
}

