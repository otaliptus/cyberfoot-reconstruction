// Address: 006243c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006243c8(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  PTR_DAT_0066ae98[*(int *)PTR_DAT_0066b09c * 0x568 + 0x52f] = 1;
  FUN_0064c36c(3,param_2,0xffffffff,1,1,*(undefined4 *)PTR_DAT_0066b09c,0xffffffff);
  FUN_0064c36c(3,param_3,0xffffffff,2,1,*(undefined4 *)PTR_DAT_0066b09c,0xffffffff);
  FUN_0064c4bc(3,param_2,*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_2 * 0x2f8),0x1d,1,
               *(undefined4 *)PTR_DAT_0066b09c);
  FUN_00657674(3,0xffffffff,0xffffffff,1,*(undefined4 *)PTR_DAT_0066b09c);
  iVar2 = *(int *)PTR_DAT_0066b09c;
  *(int *)(PTR_DAT_0066ae98 + iVar2 * 0x568 + 0x54c) = param_2;
  *(int *)(PTR_DAT_0066ae98 + iVar2 * 0x568 + 0x550) = param_3;
  *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x216 + param_2 * 0x2f8) = 0;
  *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x216 + param_3 * 0x2f8) = 0;
  if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_2 * 0x2f8) < 0) {
    *(undefined4 *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x554) = 0xffffffff;
  }
  else {
    *(undefined4 *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x554) =
         *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_2 * 0x2f8);
  }
  *(undefined4 *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x558) =
       *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8);
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b560);
  *(undefined4 *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x55c) =
       *(undefined4 *)(*(int *)PTR_DAT_0066b560 + 0xc + iVar2 * 0x1c);
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b560);
  *(undefined4 *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x560) =
       *(undefined4 *)(*(int *)PTR_DAT_0066b560 + 0x14 + iVar2 * 0x1c);
  if ((*(int *)(PTR_DAT_0066ac78 + 0x88) < 7) &&
     (-1 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_2 * 0x2f8))) {
    piVar1 = (int *)(*(int *)PTR_DAT_0066b718 +
                     *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_2 * 0x2f8) * 0x80 + 0x44 +
                    *(int *)(PTR_DAT_0066ac78 + 0x88) * 4);
    *piVar1 = *piVar1 + 1;
  }
  FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_2 * 0x2f8),param_2,1,
               &DAT_0062478c);
  piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x23c + param_2 * 0x2f8);
  *piVar1 = *piVar1 + 1;
  FUN_006490a8(param_2,1,3,1);
  FUN_006490a8(param_3,2,3,1);
  if (-1 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_2 * 0x2f8)) {
    FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_2 * 0x2f8),param_2,0xf,
                 &DAT_00624798);
  }
  piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2c0 + param_2 * 0x2f8);
  *piVar1 = *piVar1 + 5;
  piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2c0 + param_3 * 0x2f8);
  *piVar1 = *piVar1 + 3;
  *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_2 * 0x2f8) =
       (longlong)
       ROUND((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_2 * 0x2f8) + _DAT_0062479c
            );
  piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x24 + param_2 * 0x38);
  *piVar1 = *piVar1 + 1000000;
  *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_3 * 0x2f8) =
       (longlong)
       ROUND((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_3 * 0x2f8) + _DAT_006247a0
            );
  piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x24 + param_3 * 0x38);
  *piVar1 = *piVar1 + 500000;
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b560);
  plVar3 = (longlong *)
           (*(int *)PTR_DAT_0066af70 + 0x48 +
           *(int *)(*(int *)PTR_DAT_0066b560 + 8 + iVar2 * 0x1c) * 0x2f8);
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b560);
  *plVar3 = (longlong)
            ROUND((float)*(longlong *)
                          (*(int *)PTR_DAT_0066af70 + 0x48 +
                          *(int *)(*(int *)PTR_DAT_0066b560 + 8 + iVar2 * 0x1c) * 0x2f8) +
                  _DAT_006247a0);
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b560);
  piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x24 +
                  *(int *)(*(int *)PTR_DAT_0066b560 + 8 + iVar2 * 0x1c) * 0x38);
  *piVar1 = *piVar1 + 500000;
  return;
}

