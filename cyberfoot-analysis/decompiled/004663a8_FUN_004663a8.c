// Address: 004663a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004663a8(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x70)) {
    *(int *)(param_1 + 0x70) = param_2;
    *(undefined1 *)(param_1 + 0x5a) = 0;
    FUN_004673cc(param_1,0xb00d,0,0);
  }
  return;
}

