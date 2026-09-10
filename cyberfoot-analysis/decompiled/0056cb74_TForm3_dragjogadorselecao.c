// Address: 0056cb74
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_dragjogadorselecao(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  DAT_006d1ee8 = (uint)*(byte *)(DAT_0067b4bc + param_2 * 0x708 + 0x5c7 + param_3);
  if (((&DAT_0067b4f3)[DAT_006d1ee8 * 0x6d4] != '\0') &&
     (*(int *)(&DAT_0067b524 + DAT_006d1ee8 * 0x6d4) < 0x1c)) {
    *(int *)(&DAT_0067b524 + DAT_006d1ee8 * 0x6d4) =
         *(int *)(&DAT_0067b524 + DAT_006d1ee8 * 0x6d4) + 1;
    iVar3 = 1;
    puVar2 = &DAT_0067b4f0;
    do {
      bVar5 = (byte)puVar2[DAT_006d1ee8 * 0x6d4 + 0x38] == 0xffffffff;
      FUN_00403180(puVar2 + DAT_006d1ee8 * 0x6d4 + 0x38,&DAT_0056cd34);
      uVar1 = DAT_006d1ee8;
      iVar4 = iVar3;
      if ((bVar5) || (puVar2[DAT_006d1ee8 * 0x6d4 + 0x38] == '\0')) break;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0x24;
      iVar4 = 0;
    } while (iVar3 != 0x1d);
    FUN_004030e0(DAT_006d1ee8 * 0x6d4 + 0x67b504 + iVar4 * 0x24,
                 DAT_0067b4bc + param_2 * 0x708 + -0x24 + param_3 * 0x24,
                 CONCAT31((int3)((uint)(param_3 * 9) >> 8),0x23));
    *(uint *)(uVar1 * 0x6d4 + 0x67b984 + iVar4 * 4) =
         (uint)*(byte *)(DAT_0067b4bc + param_2 * 0x708 + 0x617 + param_3);
    *(uint *)(uVar1 * 0x6d4 + 0x67ba64 + iVar4 * 4) =
         (uint)*(byte *)(DAT_0067b4bc + param_2 * 0x708 + 0x667 + param_3);
    *(uint *)(uVar1 * 0x6d4 + 0x67bad4 + iVar4 * 4) =
         (uint)*(byte *)(DAT_0067b4bc + param_2 * 0x708 + 0x68f + param_3);
    *(uint *)(uVar1 * 0x6d4 + 0x67b914 + iVar4 * 4) =
         (uint)*(byte *)(DAT_0067b4bc + param_2 * 0x708 + 0x5ef + param_3);
    (&DAT_0067bb64)[iVar4 + uVar1 * 0x6d4] =
         *(undefined1 *)(DAT_0067b4bc + param_2 * 0x708 + 0x6b7 + param_3);
    *(undefined1 *)(uVar1 * 0x6d4 + 0x67bb47 + iVar4) =
         *(undefined1 *)(DAT_0067b4bc + param_2 * 0x708 + 0x59f + param_3);
    TForm3_selecaosalvar(param_1,DAT_006d1ee8);
  }
  return;
}

