// Address: 005bbee8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bbee8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar1 = FUN_005bc260(PTR_LAB_005bbc40,1,param_1);
    if (iVar1 != 0) {
      iVar1 = iVar1 + 0x24;
    }
    FUN_00406898(param_1 + 0x20,iVar1);
  }
  FUN_004068c4(param_2,*(undefined4 *)(param_1 + 0x20),&LAB_005bbf28);
  return;
}

