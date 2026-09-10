// Address: 00631634
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00631634(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_110 [256];
  
  iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b164);
  iVar5 = 0;
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      if ((((*(byte *)(*(int *)PTR_DAT_0066b164 + iVar4 * 200) == param_2) &&
           (*(char *)(*(int *)PTR_DAT_0066b164 + 1 + iVar4 * 200) != '\0')) &&
          (*(char *)(*(int *)PTR_DAT_0066b164 + 4 + iVar4 * 200) != '\0')) &&
         (*(char *)(*(int *)PTR_DAT_0066b164 + 2 + iVar4 * 200) == '\x0f')) {
        iVar5 = iVar5 + 1;
        DAT_006d4bac = DAT_006d4bac + 1;
        FUN_004060a8(&DAT_006d4ba4,PTR_DAT_0063160c,1,iVar5);
        FUN_004060a8(PTR_DAT_0066af70,PTR_DAT_00488b20,1,DAT_006d4bac);
        FUN_004060a8(PTR_DAT_0066b4e0,PTR_DAT_00488b80,1,DAT_006d4bac);
        *(undefined1 *)(DAT_006d4ba4 + -0x74 + iVar5 * 0x74) =
             *(undefined1 *)(*(int *)PTR_DAT_0066b164 + iVar4 * 200);
        *(undefined1 *)(DAT_006d4ba4 + -0x25 + iVar5 * 0x74) = 1;
        FUN_004030e0(DAT_006d4ba4 + -0x72 + iVar5 * 0x74,*(int *)PTR_DAT_0066b164 + 4 + iVar4 * 200,
                     0x19);
        *(undefined1 *)(DAT_006d4ba4 + -0x73 + iVar5 * 0x74) =
             *(undefined1 *)(*(int *)PTR_DAT_0066b164 + 3 + iVar4 * 200);
        FUN_00404b80(local_110,*(undefined4 *)(*(int *)PTR_DAT_0066ac40 + iVar4 * 4),0xff);
        FUN_004030e0(DAT_006d4ba4 + -0x58 + iVar5 * 0x74,local_110,0x32);
        FUN_004030e0(DAT_006d4ba4 + -0x1c + iVar5 * 0x74,
                     *(int *)PTR_DAT_0066b164 + 0x71 + iVar4 * 200,0x19);
        *(undefined1 *)(DAT_006d4ba4 + -0x24 + iVar5 * 0x74) = 0;
        uVar2 = FUN_004032c8(0x32);
        *(undefined1 *)(DAT_006d4ba4 + -0x23 + iVar5 * 0x74) = uVar2;
        *(int *)(DAT_006d4ba4 + -0x20 + iVar5 * 0x74) = DAT_006d4bac + -1;
        *(uint *)(*(int *)PTR_DAT_0066af70 + -0x260 + DAT_006d4bac * 0x2f8) =
             (uint)*(byte *)(*(int *)PTR_DAT_0066b164 + 3 + iVar4 * 200);
        *(undefined4 *)(*(int *)PTR_DAT_0066af70 + -0x2b8 + DAT_006d4bac * 0x2f8) = 0xffffffff;
        *(uint *)(*(int *)PTR_DAT_0066af70 + -0x2b8 + DAT_006d4bac * 0x2f8) =
             (uint)*(byte *)(*(int *)PTR_DAT_0066b164 + 0xb0 + iVar4 * 200);
        iVar1 = *(int *)PTR_DAT_0066af70;
        *(uint *)(iVar1 + -700 + DAT_006d4bac * 0x2f8) =
             (uint)*(byte *)(*(int *)PTR_DAT_0066b164 + iVar4 * 200);
        FUN_004030e0(*(int *)PTR_DAT_0066af70 + -0x2f8 + DAT_006d4bac * 0x2f8,
                     *(int *)PTR_DAT_0066b164 + 4 + iVar4 * 200,
                     CONCAT31((int3)((uint)iVar1 >> 8),0x19));
        FUN_004030e0(*(int *)PTR_DAT_0066af70 + -0x2de + DAT_006d4bac * 0x2f8,
                     *(int *)PTR_DAT_0066b164 + 0x71 + iVar4 * 200,0x1e);
        *(undefined4 *)(*(int *)PTR_DAT_0066af70 + -8 + DAT_006d4bac * 0x2f8) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b164 + 0xbc + iVar4 * 200);
        FUN_00404928(*(int *)PTR_DAT_0066b4e0 + -4 + DAT_006d4bac * 4,
                     *(undefined4 *)(*(int *)PTR_DAT_0066ac40 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00631974(param_1,param_2);
  *(int *)(PTR_DAT_0066ac78 + 0x3c) = *(int *)(PTR_DAT_0066ac78 + 0x3c) + iVar5;
  return;
}

