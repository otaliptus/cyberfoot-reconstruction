// Address: 0049c91c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049c91c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x168);
  *(undefined4 *)(iVar1 + 0x10) = **(undefined4 **)(param_1 + 0x18);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 4);
  FUN_0049c254(iVar1);
  FUN_0049c1dc(iVar1);
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  *puVar2 = *(undefined4 *)(iVar1 + 0x10);
  puVar2[1] = *(undefined4 *)(iVar1 + 0x14);
  return;
}

