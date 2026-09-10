// Address: 004fff38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004fff38(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00403c34(*(undefined4 *)(param_1 + 0x34),PTR_PTR_004fa0fc);
  if (*(int *)(iVar1 + 0xd0) != 0) {
    return *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 0x34);
  }
  return 0;
}

