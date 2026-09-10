// Address: 005d3b58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_005d3b58(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b4b4);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      if (param_1 == *(int *)(*(int *)PTR_DAT_0066b4b4 + iVar2 * 0x30)) {
        return *(undefined4 *)(*(int *)PTR_DAT_0066b4b4 + 0x2c + iVar2 * 0x30);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0xffffffff;
}

