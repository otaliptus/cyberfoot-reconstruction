// Address: 0046e834
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046e834(int param_1,undefined4 param_2)

{
  *(ushort *)(param_1 + 0x54) = *(ushort *)(param_1 + 0x54) | 0x100;
  FUN_0046ab90(param_1,param_2);
  *(ushort *)(param_1 + 0x54) = *(ushort *)(param_1 + 0x54) & 0xfeff;
  return;
}

