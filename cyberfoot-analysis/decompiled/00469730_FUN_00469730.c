// Address: 00469730
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00469730(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x198) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x198) + 8);
  }
  if (*(int *)(param_1 + 0x19c) != 0) {
    iVar1 = iVar1 + *(int *)(*(int *)(param_1 + 0x19c) + 8);
  }
  return iVar1;
}

