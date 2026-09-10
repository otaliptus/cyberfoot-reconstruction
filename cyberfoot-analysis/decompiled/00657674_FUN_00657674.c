// Address: 00657674
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00657674(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10;
  
  iVar2 = FUN_0064dee4(param_1,param_2,param_3,param_4,param_5);
  FUN_004060a8(&DAT_006d531c,PTR_DAT_0064267c,1,0);
  FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  local_10 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b6b4);
  if (-1 < local_10) {
    local_10 = local_10 + 1;
    iVar4 = 0;
    do {
      if (*(int *)(*(int *)PTR_DAT_0066b6b4 + 8 + iVar4 * 0x10) == iVar2) {
        iVar3 = FUN_00405eec(DAT_006d531c);
        FUN_004060a8(&DAT_006d531c,PTR_DAT_0064267c,1,iVar3 + 1);
        iVar3 = FUN_00405ef4(DAT_006d531c);
        DAT_006d531c[iVar3 * 4] = *(int *)(*(int *)PTR_DAT_0066b6b4 + iVar4 * 0x10);
        iVar3 = FUN_00405ef4(DAT_006d531c);
        DAT_006d531c[iVar3 * 4 + 1] = *(int *)(*(int *)PTR_DAT_0066b6b4 + 4 + iVar4 * 0x10);
        iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066ae58);
        if (-1 < iVar3) {
          iVar3 = iVar3 + 1;
          iVar5 = 0;
          do {
            if (*(int *)(*(int *)PTR_DAT_0066ae58 + iVar5 * 0x10) ==
                *(int *)(*(int *)PTR_DAT_0066b6b4 + iVar4 * 0x10)) {
              if (*(int *)(*(int *)PTR_DAT_0066ae58 + 8 + iVar5 * 0x10) == iVar2) {
                iVar3 = FUN_00405ef4(DAT_006d531c);
                DAT_006d531c[iVar3 * 4 + 2] = *(int *)(*(int *)PTR_DAT_0066ae58 + 4 + iVar4 * 0x10);
                break;
              }
            }
            iVar5 = iVar5 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        iVar3 = FUN_00405ef4(DAT_006d531c);
        DAT_006d531c[iVar3 * 4 + 3] = *(int *)(*(int *)PTR_DAT_0066b6b4 + 0xc + iVar4 * 0x10);
      }
      iVar4 = iVar4 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  DAT_006d5314 = FUN_00405eec(DAT_006d531c);
  FUN_004bcdb0(DAT_006d531c,0x10,0,&LAB_00643704,DAT_006d5314 + -1);
  iVar4 = FUN_00405eec(DAT_006d531c);
  if (iVar4 != 0) {
    FUN_0064c58c(iVar2,DAT_006d531c[3],*DAT_006d531c,DAT_006d531c[1]);
    iVar2 = DAT_006d531c[3];
    if (-1 < iVar2) {
      if (param_1 == 1) {
        *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar2 * 0x2f8) =
             (longlong)
             ROUND((float10)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar2 * 0x2f8) +
                   _DAT_00657964);
        piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x24 + DAT_006d531c[3] * 0x38);
        *piVar1 = *piVar1 + 1500000;
        *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + *DAT_006d531c * 0x130) = 1;
      }
      if (param_1 == 2) {
        *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + DAT_006d531c[3] * 0x2f8) =
             (longlong)
             ROUND((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + DAT_006d531c[3] * 0x2f8) +
                   _DAT_00657970);
        piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x24 + DAT_006d531c[3] * 0x38);
        *piVar1 = *piVar1 + 1000000;
      }
      if (param_1 == 3) {
        *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + DAT_006d531c[3] * 0x2f8) =
             (longlong)
             ROUND((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + DAT_006d531c[3] * 0x2f8) +
                   _DAT_00657974);
        piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x24 + DAT_006d531c[3] * 0x38);
        *piVar1 = *piVar1 + 500000;
      }
    }
  }
  return;
}

