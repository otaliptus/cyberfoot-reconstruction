// Address: 00618d28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00618d28(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)PTR_DAT_0066aea4;
  if (0 < iVar3) {
    iVar4 = 1;
    puVar2 = (undefined4 *)(PTR_DAT_0066ac78 + 0x70c);
    do {
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x20 + iVar4 * 0x1bc) = *puVar2;
      uVar1 = FUN_004032c8(3);
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x180 + iVar4 * 0x1bc) = uVar1;
      uVar1 = FUN_004032c8(4);
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x184 + iVar4 * 0x1bc) = uVar1;
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (PTR_DAT_0066ac78[0x6c8] != '\0') {
    FUN_0043b244(DAT_006d4918,1);
  }
  FUN_0043b234(DAT_006d4918,1);
  return;
}

