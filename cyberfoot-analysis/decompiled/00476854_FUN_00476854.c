// Address: 00476854
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00476854(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(*(int *)(param_1 + 0x18) + 0x3d) != '\0') {
    cVar1 = FUN_00472c78(param_1);
    if (cVar1 != '\0') {
      iVar2 = FUN_00403c34(*(undefined4 *)(param_1 + 0x10),PTR_PTR_00472158);
      if (*(uint *)(iVar2 + 0x6c) == (uint)*(byte *)(*(int *)(param_1 + 0x18) + 0x3f)) {
        return CONCAT31((int3)(*(uint *)(iVar2 + 0x6c) >> 8),1);
      }
    }
  }
  return 0;
}

