// Address: 00652ab8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00652ab8(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar3 = PTR_DAT_0066b5b8;
  FUN_004060a8(PTR_DAT_0066b0bc,PTR_DAT_00488fe0,1,0);
  iVar1 = *(int *)(PTR_DAT_0066ac78 + 0x3c);
  iVar2 = *(int *)(PTR_DAT_0066ac78 + 0x40);
  iVar4 = FUN_00405ef4(*(undefined4 *)puVar3);
  if (-1 < iVar4) {
    iVar4 = iVar4 + 1;
    iVar6 = 0;
    do {
      if (*(char *)(*(int *)puVar3 + 0x7d + iVar6 * 0x130) != '\0') {
        iVar5 = *(int *)(*(int *)puVar3 + 0x20 + iVar6 * 0x130);
        if ((-1 < iVar5) && (iVar5 <= iVar1 + iVar2 + -1)) {
          iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b0bc);
          FUN_004060a8(PTR_DAT_0066b0bc,PTR_DAT_00488fe0,1,iVar5 + 1);
          iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b0bc);
          *(int *)(*(int *)PTR_DAT_0066b0bc + iVar5 * 0xc) = iVar6;
          iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b0bc);
          *(undefined4 *)(*(int *)PTR_DAT_0066b0bc + 4 + iVar5 * 0xc) =
               *(undefined4 *)(*(int *)puVar3 + 0x20 + iVar6 * 0x130);
          iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b0bc);
          *(undefined1 *)(*(int *)PTR_DAT_0066b0bc + 8 + iVar5 * 0xc) = 1;
        }
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

