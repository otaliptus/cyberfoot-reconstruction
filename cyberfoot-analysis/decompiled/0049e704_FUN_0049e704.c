// Address: 0049e704
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049e704(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  *(char *)(*(int *)(param_1 + 8) + iVar1) = (char)((uint)param_2 >> 8);
  iVar1 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  *(char *)(*(int *)(param_1 + 8) + iVar1) = (char)param_2;
  return;
}

