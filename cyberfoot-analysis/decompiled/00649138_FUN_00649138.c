// Address: 00649138
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00649138(int param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_1 * 0x2f8) = param_2;
  *(int *)(*(int *)PTR_DAT_0066b718 + 0x1c + param_2 * 0x80) = param_1;
  *(undefined1 *)(*(int *)PTR_DAT_0066b718 + 0x40 + param_2 * 0x80) = 1;
  *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_1 * 0x2f8) = 100;
  *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x54 + param_1 * 0x2f8) = 0x50;
  *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x34 + param_2 * 0x80) = 5;
  *(undefined4 *)(*(int *)PTR_DAT_0066afec + 0x20 + param_1 * 0x38) = 0;
  iVar4 = 1;
  puVar1 = PTR_DAT_0066b608;
  do {
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + param_1 * 0x2f8 + 0x1f0 + iVar4 * 4) =
         *(undefined4 *)
          (puVar1 + *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_1 * 0x2f8) * 0x10);
    iVar4 = iVar4 + 1;
    puVar1 = puVar1 + 4;
  } while (iVar4 != 5);
  if (*(char *)(*(int *)PTR_DAT_0066b718 + 0x31 + param_2 * 0x80) != '\0') {
    *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x39 + param_1 * 0x2f8) = 1;
    *(int *)(PTR_DAT_0066ac78 + 0x13c) = *(int *)(PTR_DAT_0066ac78 + 0x13c) + 1;
    iVar4 = *(int *)PTR_DAT_0066b57c;
    if (0 < iVar4) {
      piVar2 = (int *)(PTR_DAT_0066ac78 + 0x140);
      do {
        if (*piVar2 == -1) {
          *piVar2 = param_1;
          break;
        }
        piVar2 = piVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00648ea0();
    iVar4 = FUN_0065208c(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_1 * 0x2f8));
    if (-1 < iVar4) {
      *(undefined1 *)(*(int *)PTR_DAT_0066aca0 + 0x14c + iVar4 * 0x294) = 1;
    }
    if (((PTR_DAT_0066ac78[0x170] != '\0') &&
        (*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_1 * 0x2f8) == 0x1d)) &&
       (iVar4 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x40 + param_1 * 0x2f8),
       PTR_DAT_0066ae98[iVar4 * 0x568 + 0x52d] != '\0')) {
      PTR_DAT_0066ae98[iVar4 * 0x568 + 0x52c] = 1;
    }
    iVar4 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
    iVar4 = iVar4 + -1;
    if (0 < iVar4) {
      iVar5 = 1;
      do {
        iVar3 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar5 * 0x130);
        if ((-1 < iVar3) && (param_1 == iVar3)) {
          *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x7d + iVar5 * 0x130) = 0;
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + iVar5 * 0x130) = 3;
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xe8 + iVar5 * 0x130) = 1;
          if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar5 * 0x130) == 1) {
            *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar5 * 0x130) = 0;
          }
          iVar3 = FUN_004032c8(0x1e);
          FUN_00647c48(iVar3 + 10,iVar5);
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  switch(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_1 * 0x2f8)) {
  case 0:
    iVar4 = FUN_004032c8(200000);
    *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_1 * 0x2f8) =
         (longlong)ROUND((float)(iVar4 + 500000) * _DAT_006494f4);
    break;
  case 1:
    iVar4 = FUN_004032c8(2000000);
    *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_1 * 0x2f8) =
         (longlong)ROUND((float)(iVar4 + 6000000) * _DAT_006494f4);
    break;
  case 2:
    iVar4 = FUN_004032c8(1000000);
    *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_1 * 0x2f8) =
         (longlong)ROUND((float)(iVar4 + 4000000) * _DAT_006494f4);
    break;
  case 3:
    iVar4 = FUN_004032c8(1000000);
    *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_1 * 0x2f8) =
         (longlong)ROUND((float)(iVar4 + 2000000) * _DAT_006494f4);
    break;
  case 4:
    iVar4 = FUN_004032c8(500000);
    *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_1 * 0x2f8) =
         (longlong)ROUND((float)(iVar4 + 1000000) * _DAT_006494f4);
  }
  iVar4 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b2b8);
  iVar4 = iVar4 + 1;
  FUN_004060a8(PTR_DAT_0066b2b8,PTR_DAT_00488e20,1,iVar4);
  *(undefined4 *)(*(int *)PTR_DAT_0066b2b8 + -8 + iVar4 * 0xc) =
       *(undefined4 *)(PTR_DAT_0066ac78 + 0xc0);
  *(int *)(*(int *)PTR_DAT_0066b2b8 + -4 + iVar4 * 0xc) = param_1;
  *(int *)(*(int *)PTR_DAT_0066b2b8 + -0xc + iVar4 * 0xc) = param_2;
  return;
}

