// Address: 00513574
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00513574(int *param_1)

{
  FUN_00511cbc(param_1);
  (**(code **)(*param_1 + 0x1e0))();
  FUN_00511cd0(param_1);
  *(ushort *)(param_1 + 0x139) = *(ushort *)(param_1 + 0x139) & 0xff7f;
  param_1[0x13f] = -1;
  param_1[0x128] = 0;
  return;
}

