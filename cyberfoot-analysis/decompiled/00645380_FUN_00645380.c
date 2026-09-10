// Address: 00645380
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00645380(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0066b3d0;
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b3d0);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      if ((((*(int *)(*(int *)puVar1 + iVar3 * 0x1c) == param_3) &&
           (*(int *)(*(int *)puVar1 + 4 + iVar3 * 0x1c) == param_5)) &&
          (*(int *)(*(int *)puVar1 + 0x18 + iVar3 * 0x1c) == param_1)) &&
         ((*(int *)(*(int *)puVar1 + 0x14 + iVar3 * 0x1c) == param_2 &&
          (*(int *)(*(int *)puVar1 + 0x10 + iVar3 * 0x1c) == param_4)))) {
        return *(undefined4 *)(*(int *)puVar1 + 0xc + iVar3 * 0x1c);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0xffffffff;
}

