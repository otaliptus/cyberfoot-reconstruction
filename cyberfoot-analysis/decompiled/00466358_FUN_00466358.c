// Address: 00466358
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00466358(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x99)) {
    *(char *)(param_1 + 0x99) = param_2;
    *(undefined1 *)(param_1 + 0x9a) = 0;
    FUN_004673cc(param_1,0xb022,0,0);
  }
  return;
}

