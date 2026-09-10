// Address: 005207ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005207ec(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xe3 | (param_2 & 7) << 2;
  return;
}

