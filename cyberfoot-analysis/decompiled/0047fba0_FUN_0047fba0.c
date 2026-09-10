// Address: 0047fba0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047fba0(int *param_1)

{
  if ((char)param_1[0x8d] == '\0') {
    (**(code **)(*param_1 + 0xd4))();
  }
  if ((*(byte *)(param_1 + 0xbd) & 0x20) != 0) {
    FUN_00403c80(param_1);
    *(byte *)(param_1 + 0xbd) = *(byte *)(param_1 + 0xbd) & 0xdf;
  }
  return;
}

