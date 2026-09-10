// Address: 0058a7bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0058a7bc(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0066b114;
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b114);
  if (-1 < iVar2) {
    do {
      if (((*(int *)(*(int *)puVar1 + 4 + iVar2 * 0x14) == param_3) &&
          (*(int *)(*(int *)puVar1 + 8 + iVar2 * 0x14) == param_2)) &&
         (*(int *)(*(int *)puVar1 + iVar2 * 0x14) == param_1)) {
        *param_4 = *(undefined4 *)(*(int *)puVar1 + 0xc + iVar2 * 0x14);
        param_4[1] = *(undefined4 *)(*(int *)puVar1 + 0x10 + iVar2 * 0x14);
        return;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}

