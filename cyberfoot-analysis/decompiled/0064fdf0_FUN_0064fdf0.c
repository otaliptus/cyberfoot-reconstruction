// Address: 0064fdf0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064fdf0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float10 in_ST0;
  double in_stack_00000004;
  
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b05c);
  puVar1 = (undefined4 *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10);
  FUN_004bc5a0(0x78,*(int *)(PTR_DAT_0066ac78 + 0x16c) * 3,puVar1,*puVar1,puVar1[1]);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      if ((-1 < *(int *)(*(int *)PTR_DAT_0066b05c + iVar3 * 0x18)) &&
         (*(double *)(*(int *)PTR_DAT_0066b05c + 8 + iVar3 * 0x18) <= in_stack_00000004)) {
        if (*(int *)(*(int *)PTR_DAT_0066af70 + 100 +
                    *(int *)(*(int *)PTR_DAT_0066b05c + 0x10 + iVar3 * 0x18) * 0x2f8) <
            *(int *)PTR_DAT_0066b610) {
          FUN_00650218(*(undefined4 *)(*(int *)PTR_DAT_0066b05c + iVar3 * 0x18),
                       *(undefined4 *)(*(int *)PTR_DAT_0066b05c + 0x10 + iVar3 * 0x18),
                       *(int *)PTR_DAT_0066b05c,(double)in_ST0);
          *(undefined4 *)
           (*(int *)PTR_DAT_0066b5b8 + 0x100 +
           *(int *)(*(int *)PTR_DAT_0066b05c + iVar3 * 0x18) * 0x130) = 0;
          *(undefined4 *)(*(int *)PTR_DAT_0066b05c + iVar3 * 0x18) = 0xffffffff;
        }
        else {
          FUN_0064cbf0(*(undefined4 *)(*(int *)PTR_DAT_0066b05c + 0x10 + iVar3 * 0x18),0xe,0,
                       0xffffffff,0xffffffff,
                       *(undefined4 *)(*(int *)PTR_DAT_0066b05c + iVar3 * 0x18));
        }
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

