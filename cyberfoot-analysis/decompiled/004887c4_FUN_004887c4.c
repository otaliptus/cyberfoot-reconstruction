// Address: 004887c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004887c4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0066cbf8 + 0x68);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x23c) == 0)) {
    FUN_00404928(param_2,*(undefined4 *)(param_1 + 0x50));
  }
  else {
    FUN_00404928(param_2,*(undefined4 *)(iVar1 + 0x23c));
  }
  return;
}

