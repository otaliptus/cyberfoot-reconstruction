// Address: 004d3180
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004d3180(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  
  iVar2 = FUN_00403c34(*(undefined4 *)(param_1 + 0x10),PTR_PTR_00472158);
  iVar1 = *(int *)(param_1 + 0x24);
  uVar3 = *(int *)(iVar2 + 0x74) == *(int *)(iVar1 + 0x158);
  if ((bool)uVar3) {
    FUN_00403c34(*(undefined4 *)(param_1 + 0x10),PTR_PTR_00472158);
    FUN_00404cf0(*(undefined4 *)(iVar1 + 0x154),*(undefined4 *)(iVar2 + 0x78));
    if ((bool)uVar3) {
      FUN_00403c34(*(undefined4 *)(param_1 + 0x10),PTR_PTR_00472158);
      if (*(char *)(iVar2 + 0x70) == *(char *)(iVar1 + 0x150)) {
        return 1;
      }
    }
  }
  return 0;
}

