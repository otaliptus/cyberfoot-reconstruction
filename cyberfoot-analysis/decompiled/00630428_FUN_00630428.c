// Address: 00630428
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00630428(void)

{
  int *piVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *in_FS_OFFSET;
  byte bVar11;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  undefined4 uStack_110;
  undefined1 auStack_10c [256];
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puVar2 = PTR_DAT_0066ac78;
  bVar11 = 0;
  puStack_120 = &stack0xfffffffc;
  uStack_110 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  puStack_124 = &LAB_006305b2;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  FUN_004048d4(&uStack_8);
  iVar6 = FUN_0054c0f0(*(undefined4 *)(DAT_006d4b8c + 0x374));
  if (iVar6 == 0) {
    *(undefined4 *)(puVar2 + 0x168) = 4;
  }
  else {
    *(undefined4 *)(puVar2 + 0x168) = 2;
  }
  piVar1 = *(int **)(DAT_006d4b8c + 0x2f8);
  uVar7 = (**(code **)(*piVar1 + 0xcc))();
  iVar6 = FUN_00443198(piVar1[0xa3],uVar7);
  *(undefined4 *)(puVar2 + 0xc4) = *(undefined4 *)(iVar6 + 0x18);
  uVar4 = FUN_0053d2e0(*(undefined4 *)(DAT_006d4b8c + 0x32c));
  puVar2[0x10e] = uVar4;
  puVar2[0x170] = 0;
  uVar4 = FUN_0053d2e0(*(undefined4 *)(DAT_006d4b8c + 0x328));
  puVar2[0x171] = uVar4;
  cVar5 = FUN_0053d2e0(*(undefined4 *)(DAT_006d4b8c + 0x324));
  if (cVar5 != '\0') {
    cVar5 = FUN_0053d2e0(*(undefined4 *)(DAT_006d4b8c + 0x328));
    if (cVar5 != '\0') {
      puVar2[0x172] = 1;
      goto LAB_00630511;
    }
  }
  puVar2[0x172] = 0;
LAB_00630511:
  FUN_00645c68(*(undefined4 *)(puVar2 + 0xc4),&uStack_c);
  FUN_00404b6c(&uStack_8,uStack_c);
  if (*(int *)(puVar2 + 0xc4) == 0x1d) {
    puVar9 = (undefined4 *)(puVar2 + (uint)bVar11 * -8 + 0x120);
    *(undefined4 *)(puVar2 + 0x11c) = _DAT_006305c0;
    puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
    pcVar8 = "Copa do Brasil" + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 7;
    *puVar9 = *(undefined4 *)("Copa do Brasil" + (uint)bVar11 * -8 + 3);
    *puVar10 = *(undefined4 *)pcVar8;
    *(undefined2 *)(puVar10 + (uint)bVar11 * -2 + 1) =
         *(undefined2 *)(pcVar8 + ((uint)bVar11 * -2 + 1) * 4);
    *(char *)((int)(puVar10 + (uint)bVar11 * -2 + 1) + (uint)bVar11 * -4 + 2) =
         (pcVar8 + ((uint)bVar11 * -2 + 1) * 4)[(uint)bVar11 * -4 + 2];
  }
  else {
    FUN_004052cc(&uStack_110,L"Copa ",
                 *(undefined4 *)(PTR_DAT_0066b294 + *(int *)(puVar2 + 0xc4) * 4));
    FUN_004051e4(auStack_10c,uStack_110,0xff);
    FUN_004030e0(puVar2 + 0x11c,auStack_10c,0x1e);
  }
  puVar3 = puStack_120;
  *in_FS_OFFSET = uStack_128;
  puStack_120 = &LAB_006305b9;
  puStack_124 = (undefined1 *)0x6305a1;
  FUN_00404ff0(&uStack_110,uStack_128,puVar3);
  puStack_124 = (undefined1 *)0x6305a9;
  FUN_00404ff0(&uStack_c);
  puStack_124 = (undefined1 *)0x6305b1;
  FUN_004048d4(&uStack_8);
  return;
}

