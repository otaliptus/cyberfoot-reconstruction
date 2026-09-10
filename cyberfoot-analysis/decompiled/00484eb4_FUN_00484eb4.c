// Address: 00484eb4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00484eb4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x58) + 8);
  if (iVar1 == 0) {
    iVar1 = (**(code **)PTR_DAT_0066b008)();
    return iVar1;
  }
  return iVar1;
}

