// Address: 005adc9c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm35_Label3Click(int param_1)

{
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0xfff5);
  DAT_006d25bc = FUN_0054c0f0(*(undefined4 *)(param_1 + 0xa08));
  if ((DAT_006d25c6 == '\0') &&
     (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d25bc * 0x294) == 0x1d)) {
    DAT_006d25c5 = 1;
    FUN_005ad1f4(param_1,DAT_006d25bc);
  }
  else if (DAT_006d25c6 != '\0') {
    FUN_005ad1f4(param_1,DAT_006d25bc);
  }
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
  return;
}

