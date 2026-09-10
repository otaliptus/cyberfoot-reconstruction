// Address: 004830ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004830ec(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = FUN_00479fd0(param_1,*(undefined4 *)(*(int *)(*(int *)(param_4 + -4) + 8) + 8),1);
    if (iVar1 == 0) {
      iVar1 = FUN_00479fd0(param_1,*(undefined4 *)(*(int *)(*(int *)(param_4 + -4) + 8) + 0xc),0);
    }
  }
  return iVar1;
}

