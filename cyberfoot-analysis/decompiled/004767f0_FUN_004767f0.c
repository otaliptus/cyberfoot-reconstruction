// Address: 004767f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004767f0(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00472c8c(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00403c34(*(undefined4 *)(param_1 + 0x10),PTR_PTR_00472158);
    if (*(int *)(iVar2 + 0x74) == *(int *)(*(int *)(param_1 + 0x18) + 0x54)) {
      return CONCAT31((int3)((uint)*(int *)(iVar2 + 0x74) >> 8),1);
    }
  }
  return 0;
}

