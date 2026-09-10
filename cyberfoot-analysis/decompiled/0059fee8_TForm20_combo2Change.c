// Address: 0059fee8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm20_combo2Change(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0xcc))();
  DAT_006d2478 = *(undefined4 *)(&DAT_006d240c + iVar1 * 4);
  FUN_0059e9d0(param_1,3,DAT_006d2478,1);
  return;
}

