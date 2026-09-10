// Address: 0042af8c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042af8c(int *param_1,RECT *param_2)

{
  HBRUSH hbr;
  
  (**(code **)(*param_1 + 0x10))();
  FUN_0042b67c(param_1,DAT_0042afc4);
  hbr = (HBRUSH)FUN_0042aba0(param_1[5]);
  FillRect((HDC)param_1[1],param_2,hbr);
  (**(code **)(*param_1 + 0xc))();
  return;
}

