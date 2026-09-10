// Address: 004e1a14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e1a14(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0066b5b8;
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  iVar2 = iVar2 + -1;
  if (0 < iVar2) {
    iVar3 = 1;
    do {
      if (-1 < *(int *)(*(int *)puVar1 + 0x20 + iVar3 * 0x130)) {
        *(undefined1 *)(*(int *)puVar1 + 0x85 + iVar3 * 0x130) = 0;
        if (100 < *(int *)(*(int *)puVar1 + 0x28 + iVar3 * 0x130)) {
          *(undefined4 *)(*(int *)puVar1 + 0x28 + iVar3 * 0x130) = 100;
        }
        if (*(int *)(*(int *)puVar1 + 0x28 + iVar3 * 0x130) < 1) {
          *(undefined4 *)(*(int *)puVar1 + 0x28 + iVar3 * 0x130) = 1;
        }
        if (*(int *)(*(int *)puVar1 + 0x18 + iVar3 * 0x130) < 0x10) {
          *(undefined4 *)(*(int *)puVar1 + 0x18 + iVar3 * 0x130) = 0x10;
        }
        if (0x46 < *(int *)(*(int *)puVar1 + 0x18 + iVar3 * 0x130)) {
          *(undefined4 *)(*(int *)puVar1 + 0x18 + iVar3 * 0x130) = 0x46;
        }
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

