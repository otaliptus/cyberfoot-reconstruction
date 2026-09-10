// Address: 006404c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006404c8(undefined4 param_1)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = PTR_DAT_0066b5b8;
  *(undefined4 *)PTR_DAT_0066b644 = 0;
  iVar3 = FUN_00405ef4(*(undefined4 *)puVar2);
  if (0 < iVar3) {
    iVar5 = 1;
    do {
      if (((-1 < *(int *)(*(int *)puVar2 + 0x20 + iVar5 * 0x130)) &&
          (*(int *)(*(int *)puVar2 + 0x20 + iVar5 * 0x130) == *(int *)(PTR_DAT_0066ac78 + 8))) &&
         (0x36 < *(int *)(*(int *)puVar2 + 0x18 + iVar5 * 0x130))) {
        iVar4 = FUN_004032c8(3);
        if ((iVar4 == 1) || (0x3c < *(int *)(*(int *)puVar2 + 0x18 + iVar5 * 0x130))) {
          *(int *)PTR_DAT_0066b644 = iVar5;
          *(undefined4 *)(*(int *)puVar2 + 0x20 + iVar5 * 0x130) = 0xffffffff;
          FUN_00652988(*(undefined4 *)(PTR_DAT_0066ac78 + 8));
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0xb8 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)
          ;
          *piVar1 = *piVar1 + -5;
          break;
        }
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (0 < *(int *)PTR_DAT_0066b644) {
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005cde64,PTR_DAT_0066b7b8);
    (**(code **)(**(int **)PTR_DAT_0066b7b8 + 0xec))();
    FUN_006380e8(param_1);
  }
  return;
}

