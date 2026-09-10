// Address: 00656410
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00656410(void)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  puVar1 = PTR_DAT_0066af70;
  iVar5 = *(int *)(PTR_DAT_0066ac78 + 0x3c);
  FUN_004060a8(PTR_DAT_0066b3cc,PTR_DAT_00488fc0,1,0);
  if (-1 < iVar5 + -1) {
    iVar4 = 0;
    do {
      if ((0 < *(int *)(*(int *)puVar1 + 0x7c + iVar4 * 0x2f8)) &&
         (*(int *)(*(int *)puVar1 + 0x50 + iVar4 * 0x2f8) < 10)) {
        if (*(char *)(*(int *)puVar1 + 0x39 + iVar4 * 0x2f8) == '\0') {
          if (5 < *(int *)(*(int *)puVar1 + iVar4 * 0x2f8 + 0x1a4 +
                          *(int *)(PTR_DAT_0066ac78 + 0x88) * 4)) {
            *(int *)PTR_DAT_0066b48c = iVar4;
            cVar2 = FUN_006562b8();
            if ((cVar2 != '\0') && (-1 < *(int *)PTR_DAT_0066b5a4)) {
              if (*(int *)PTR_DAT_0066afd4 == -1) {
                FUN_00649824(*(undefined4 *)PTR_DAT_0066b48c,*(undefined4 *)PTR_DAT_0066b5a4);
                iVar3 = *(int *)(*(int *)PTR_DAT_0066b718 + 0x1c + *(int *)PTR_DAT_0066ae80 * 0x80);
                if (-1 < iVar3) {
                  FUN_00649824(iVar3,*(undefined4 *)PTR_DAT_0066ae80);
                }
                FUN_00649138(*(undefined4 *)PTR_DAT_0066b48c,*(undefined4 *)PTR_DAT_0066ae80);
                iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b3cc);
                FUN_004060a8(PTR_DAT_0066b3cc,PTR_DAT_00488fc0,1,iVar3 + 1);
                iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b3cc);
                *(undefined4 *)(*(int *)PTR_DAT_0066b3cc + iVar3 * 0x10) =
                     *(undefined4 *)PTR_DAT_0066b48c;
                iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b3cc);
                *(undefined4 *)(*(int *)PTR_DAT_0066b3cc + 4 + iVar3 * 0x10) =
                     *(undefined4 *)PTR_DAT_0066b5a4;
                iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b3cc);
                *(undefined4 *)(*(int *)PTR_DAT_0066b3cc + 8 + iVar3 * 0x10) =
                     *(undefined4 *)PTR_DAT_0066ae80;
                iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b3cc);
                piVar6 = (int *)(*(int *)PTR_DAT_0066b3cc + 0xc + iVar3 * 0x10);
                iVar3 = FUN_004032c8(4);
                *piVar6 = iVar3 + 1;
              }
              else {
                FUN_00649824(*(undefined4 *)PTR_DAT_0066b48c,*(undefined4 *)PTR_DAT_0066b5a4);
                FUN_00649824(*(undefined4 *)PTR_DAT_0066afd4,*(undefined4 *)PTR_DAT_0066ae80);
                FUN_00649138(*(undefined4 *)PTR_DAT_0066b48c,*(undefined4 *)PTR_DAT_0066ae80);
                FUN_00649138(*(undefined4 *)PTR_DAT_0066afd4,*(undefined4 *)PTR_DAT_0066b5a4);
                iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b3cc);
                FUN_004060a8(PTR_DAT_0066b3cc,PTR_DAT_00488fc0,1,iVar3 + 1);
                iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b3cc);
                *(undefined4 *)(*(int *)PTR_DAT_0066b3cc + iVar3 * 0x10) =
                     *(undefined4 *)PTR_DAT_0066b48c;
                iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b3cc);
                *(undefined4 *)(*(int *)PTR_DAT_0066b3cc + 4 + iVar3 * 0x10) =
                     *(undefined4 *)PTR_DAT_0066b5a4;
                iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b3cc);
                *(undefined4 *)(*(int *)PTR_DAT_0066b3cc + 8 + iVar3 * 0x10) =
                     *(undefined4 *)PTR_DAT_0066ae80;
                iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b3cc);
                *(undefined4 *)(*(int *)PTR_DAT_0066b3cc + 0xc + iVar3 * 0x10) = 0;
                iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b3cc);
                FUN_004060a8(PTR_DAT_0066b3cc,PTR_DAT_00488fc0,1,iVar3 + 1);
                iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b3cc);
                *(undefined4 *)(*(int *)PTR_DAT_0066b3cc + iVar3 * 0x10) =
                     *(undefined4 *)PTR_DAT_0066afd4;
                iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b3cc);
                *(undefined4 *)(*(int *)PTR_DAT_0066b3cc + 4 + iVar3 * 0x10) =
                     *(undefined4 *)PTR_DAT_0066ae80;
                iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b3cc);
                *(undefined4 *)(*(int *)PTR_DAT_0066b3cc + 8 + iVar3 * 0x10) =
                     *(undefined4 *)PTR_DAT_0066b5a4;
                iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b3cc);
                *(undefined4 *)(*(int *)PTR_DAT_0066b3cc + 0xc + iVar3 * 0x10) = 0;
              }
              *(undefined4 *)PTR_DAT_0066ae80 = 0xffffffff;
              *(undefined4 *)PTR_DAT_0066b5a4 = 0xffffffff;
              *(undefined4 *)PTR_DAT_0066afd4 = 0xffffffff;
            }
          }
        }
        else {
          *(int *)PTR_DAT_0066b48c = iVar4;
          FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00641f38,PTR_DAT_0066b04c);
          (**(code **)(**(int **)PTR_DAT_0066b04c + 0xec))();
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b3cc);
  if ((0 < iVar5) && (PTR_DAT_0066ac78[0xd8] != '\0')) {
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005ef344,PTR_DAT_0066b5d4);
    (**(code **)(**(int **)PTR_DAT_0066b5d4 + 0xec))();
  }
  FUN_004060a8(PTR_DAT_0066b3cc,PTR_DAT_00488fc0,1,0);
  return;
}

