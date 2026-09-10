// Address: 00426bf0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00426bf0(int param_1,byte param_2)

{
  BOOL BVar1;
  
  BVar1 = SetThreadPriority(*(HANDLE *)(param_1 + 4),*(int *)(&DAT_00662658 + (uint)param_2 * 4));
  FUN_00426bb0(param_1,BVar1 != 0);
  return;
}

