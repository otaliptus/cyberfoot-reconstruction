// Address: 00512d08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00512d08(int *param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_2) {
    iVar1 = (**(code **)(*param_1 + 0x11c))();
    if (0 < iVar1) {
      iVar1 = (**(code **)(*param_1 + 0x11c))();
      if (param_2 < iVar1) {
        return 1;
      }
    }
  }
  return 0;
}

