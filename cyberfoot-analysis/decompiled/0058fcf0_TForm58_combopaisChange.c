// Address: 0058fcf0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm58_combopaisChange(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x324));
  if (0 < iVar1) {
    iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x324));
    *(int *)PTR_DAT_0066b320 = iVar1 + -1;
    DAT_006d2234 = 3;
    FUN_0058efa4(param_1);
    return;
  }
  DAT_006d2234 = 2;
  *(undefined4 *)PTR_DAT_0066b320 = 0;
  FUN_0058efa4(param_1);
  return;
}

