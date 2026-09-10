// Address: 005f925c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005f925c(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0066b5b8;
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      *(undefined1 *)(*(int *)puVar1 + 0x86 + iVar3 * 0x130) = 0;
      *(undefined4 *)(*(int *)puVar1 + 0x88 + iVar3 * 0x130) = 0;
      *(undefined4 *)(*(int *)puVar1 + 0x118 + iVar3 * 0x130) = 0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_004060a8(PTR_DAT_0066b238,PTR_DAT_00488c00,1,0);
  FUN_004060a8(PTR_DAT_0066b3b8,PTR_DAT_00488ca0,1,0);
  return;
}

