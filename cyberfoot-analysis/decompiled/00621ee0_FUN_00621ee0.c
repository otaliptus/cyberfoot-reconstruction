// Address: 00621ee0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00621ee0(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_0066b238;
  *(undefined4 *)PTR_DAT_0066b594 = 0;
  *(undefined4 *)PTR_DAT_0066af54 = 0;
  FUN_00612a00(param_1,*(undefined4 *)(PTR_DAT_0066ac78 + 0x88));
  FUN_004060a8(&DAT_006d491c,PTR_DAT_0060ee48,1,0);
  iVar4 = *(int *)PTR_DAT_0066aea4;
  if (0 < iVar4) {
    iVar3 = 1;
    do {
      iVar2 = 1;
      do {
        *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0xac + iVar2 * 4) =
             *(undefined4 *)
              (*(int *)puVar1 + *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x10 + iVar3 * 0x1bc) * 0xf8 +
               -4 + iVar2 * 4);
        *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0xd8 + iVar2 * 4) =
             *(undefined4 *)
              (*(int *)puVar1 + *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x14 + iVar3 * 0x1bc) * 0xf8 +
               -4 + iVar2 * 4);
        *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x104 + iVar2 * 4) =
             *(undefined4 *)
              (*(int *)puVar1 + *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x10 + iVar3 * 0x1bc) * 0xf8 +
               0x58 + iVar2 * 4);
        *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x130 + iVar2 * 4) =
             *(undefined4 *)
              (*(int *)puVar1 + *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x14 + iVar3 * 0x1bc) * 0xf8 +
               0x58 + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0xc);
      FUN_0061c174(param_1,iVar3);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  DAT_006d48f4 = 0;
  iVar4 = 1;
  do {
    iVar3 = *(int *)PTR_DAT_0066aea4;
    if (0 < iVar3) {
      iVar2 = 1;
      do {
        FUN_00609bc8(iVar2);
        FUN_0061c5c0(param_1,iVar4,iVar2);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xb7);
  iVar4 = 0xb7;
  do {
    iVar3 = *(int *)PTR_DAT_0066aea4;
    if (0 < iVar3) {
      iVar2 = 1;
      do {
        if (iVar4 <= *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x184 + iVar2 * 0x1bc)) {
          FUN_00609bc8(iVar2);
        }
        FUN_0061c5c0(param_1,iVar4,iVar2);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xbf);
  FUN_0061f604(param_1);
  return;
}

