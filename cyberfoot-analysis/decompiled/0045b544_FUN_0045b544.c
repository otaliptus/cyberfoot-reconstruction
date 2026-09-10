// Address: 0045b544
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0045b544(int param_1)

{
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x7c) != 0) break;
    param_1 = *(int *)(param_1 + 0x30);
  }
  return 1;
}

