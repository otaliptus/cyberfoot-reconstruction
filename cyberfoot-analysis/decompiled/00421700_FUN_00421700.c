// Address: 00421700
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00421700(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_0041e078(*(undefined4 *)(param_4 + -4),param_1);
  if (iVar1 < 0) {
    iVar1 = FUN_0041e078(*(undefined4 *)(param_4 + -8),param_1);
    if (-1 < iVar1) {
      FUN_0041dec0(*(undefined4 *)(param_4 + -4),param_1);
    }
  }
  return;
}

