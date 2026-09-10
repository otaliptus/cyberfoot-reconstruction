// Address: 004e1988
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e1988(void)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = PTR_DAT_0066b5b8;
  iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
  if (-1 < iVar3) {
    iVar3 = iVar3 + 1;
    iVar4 = 0;
    do {
      if (-1 < *(int *)(*(int *)puVar2 + 0x20 + iVar4 * 0x130)) {
        if (0 < *(int *)(*(int *)puVar2 + iVar4 * 0x130 + 0xb8 +
                        *(int *)(PTR_DAT_0066ac78 + 0x88) * 4)) {
          piVar1 = (int *)(*(int *)puVar2 + iVar4 * 0x130 + 0xb8 +
                          *(int *)(PTR_DAT_0066ac78 + 0x88) * 4);
          *piVar1 = *piVar1 + -1;
        }
        if (2 < *(int *)(*(int *)puVar2 + iVar4 * 0x130 + 0x8c +
                        *(int *)(PTR_DAT_0066ac78 + 0x88) * 4)) {
          *(undefined4 *)
           (*(int *)puVar2 + iVar4 * 0x130 + 0x8c + *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) = 0;
        }
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

