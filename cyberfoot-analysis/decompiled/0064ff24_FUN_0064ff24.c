// Address: 0064ff24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064ff24(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b05c);
  puVar1 = (undefined4 *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10);
  FUN_004bc5a0(0xb4,*(int *)(PTR_DAT_0066ac78 + 0x16c) * 3,puVar1,*puVar1,puVar1[1]);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(*(int *)PTR_DAT_0066b05c + iVar4 * 0x18);
      if (param_1 == iVar2) {
        FUN_00650218(iVar2,*(undefined4 *)(*(int *)PTR_DAT_0066b05c + 0x10 + iVar4 * 0x18));
        *(undefined4 *)
         (*(int *)PTR_DAT_0066b5b8 + 0x100 +
         *(int *)(*(int *)PTR_DAT_0066b05c + iVar4 * 0x18) * 0x130) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066b05c + iVar4 * 0x18) = 0xffffffff;
        return;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

