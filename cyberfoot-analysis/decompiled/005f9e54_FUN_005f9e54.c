// Address: 005f9e54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005f9e54(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  puVar1 = PTR_DAT_0066b544;
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b544);
  if (0 < iVar2) {
    iVar2 = FUN_00405ef4(*(undefined4 *)puVar1);
    if (-1 < iVar2) {
      iVar2 = iVar2 + 1;
      iVar3 = 0;
      do {
        *(undefined4 *)
         (*(int *)PTR_DAT_0066b5b8 + 0x20 + *(int *)(*(int *)puVar1 + iVar3 * 8) * 0x130) =
             *(undefined4 *)(*(int *)puVar1 + 4 + iVar3 * 8);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_004060a8(puVar1,PTR_DAT_00488cc0,1,0);
  iVar2 = *(int *)PTR_DAT_0066b57c;
  if (0 < iVar2) {
    piVar4 = (int *)(PTR_DAT_0066ac78 + 0x604);
    do {
      if (0 < *piVar4) {
        *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + *piVar4 * 0x2f8) = 0xffffffff;
        *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x39 + *piVar4 * 0x2f8) = 0;
      }
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *PTR_DAT_0066acd0 = 0;
  return;
}

