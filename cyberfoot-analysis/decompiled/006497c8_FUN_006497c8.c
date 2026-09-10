// Address: 006497c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006497c8(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0066b0d4;
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b0d4);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      if ((*(char *)(*(int *)puVar1 + 8 + iVar3 * 0x18) == '\0') &&
         ((param_1 == *(int *)(*(int *)puVar1 + iVar3 * 0x18) ||
          (param_1 == *(int *)(*(int *)puVar1 + 4 + iVar3 * 0x18))))) {
        *(undefined1 *)(*(int *)puVar1 + 8 + iVar3 * 0x18) = 1;
        *(undefined4 *)(*(int *)puVar1 + iVar3 * 0x18) = 0xffffffff;
        *(undefined4 *)(*(int *)puVar1 + 4 + iVar3 * 0x18) = 0xffffffff;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

