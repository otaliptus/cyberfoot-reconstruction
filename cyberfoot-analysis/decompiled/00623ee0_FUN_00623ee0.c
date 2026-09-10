// Address: 00623ee0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00623ee0(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int local_18;
  
  local_18 = 0;
  if (param_2 == *(int *)(*(int *)PTR_DAT_0066afa0 + param_3 * 0x48)) {
    iVar3 = *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + param_3 * 0x48);
  }
  else {
    iVar3 = *(int *)(*(int *)PTR_DAT_0066afa0 + param_3 * 0x48);
  }
  FUN_0064c36c(*(undefined4 *)(PTR_DAT_0066ac78 + 0x88),param_2,
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_2 * 0x2f8),1,0xffffffff,
               0xffffffff,0xffffffff);
  FUN_0064c36c(*(undefined4 *)(PTR_DAT_0066ac78 + 0x88),iVar3,
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar3 * 0x2f8),2,0xffffffff,
               0xffffffff,0xffffffff);
  FUN_0064c4bc(*(undefined4 *)(PTR_DAT_0066ac78 + 0x88),param_2,
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_2 * 0x2f8),
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_2 * 0x2f8),1,0xffffffff);
  FUN_0064c4bc(*(undefined4 *)(PTR_DAT_0066ac78 + 0x88),iVar3,
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + iVar3 * 0x2f8),
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar3 * 0x2f8),2,0xffffffff);
  FUN_00657674(*(undefined4 *)(PTR_DAT_0066ac78 + 0x88),
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_2 * 0x2f8),0xffffffff,
               0xffffffff,0xffffffff);
  if ((*(int *)(PTR_DAT_0066ac78 + 0x88) < 7) &&
     (-1 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_2 * 0x2f8))) {
    piVar1 = (int *)(*(int *)PTR_DAT_0066b718 +
                     *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_2 * 0x2f8) * 0x80 + 0x44 +
                    *(int *)(PTR_DAT_0066ac78 + 0x88) * 4);
    *piVar1 = *piVar1 + 1;
  }
  puVar4 = &DAT_00624394;
  FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_2 * 0x2f8),param_2,1);
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 2) {
    piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x24 + param_2 * 0x38);
    *piVar1 = *piVar1 + 4000000;
    *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_2 * 0x2f8) =
         (longlong)
         ROUND((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_2 * 0x2f8) +
               _DAT_00624398);
    piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x24 + iVar3 * 0x38);
    *piVar1 = *piVar1 + 2000000;
    *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar3 * 0x2f8) =
         (longlong)
         ROUND((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar3 * 0x2f8) + _DAT_0062439c
              );
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 4) {
    iVar2 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_2 * 0x2f8));
    if (iVar2 == 0) {
      puVar4 = &DAT_006acfc0;
      local_18 = 4000000;
    }
    else {
      iVar2 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_2 * 0x2f8));
      if (iVar2 == 1) {
        puVar4 = (undefined *)0x4c4b40;
        local_18 = 3000000;
      }
      else {
        iVar2 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_2 * 0x2f8));
        if (iVar2 == 3) {
          puVar4 = (undefined *)0x1e8480;
          local_18 = 100000;
        }
        else {
          iVar2 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_2 * 0x2f8));
          if (iVar2 == 4) {
            puVar4 = (undefined *)0x1e8480;
            local_18 = 1000000;
          }
        }
      }
    }
    if (param_2 < *(int *)(PTR_DAT_0066ac78 + 0x3c)) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x24 + param_2 * 0x38);
      *piVar1 = (int)(puVar4 + *piVar1);
      *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_2 * 0x2f8) =
           (longlong)
           ROUND((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_2 * 0x2f8) +
                 (float)(int)puVar4 * _DAT_006243a0);
    }
    if (iVar3 < *(int *)(PTR_DAT_0066ac78 + 0x3c)) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x24 + iVar3 * 0x38);
      *piVar1 = *piVar1 + local_18;
      *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar3 * 0x2f8) =
           (longlong)
           ROUND((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar3 * 0x2f8) +
                 (float)local_18 * _DAT_006243a0);
    }
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 6) {
    if (param_2 < *(int *)(PTR_DAT_0066ac78 + 0x3c)) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x24 + param_2 * 0x38);
      *piVar1 = *piVar1 + 3000000;
      *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_2 * 0x2f8) =
           (longlong)
           ROUND((float10)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_2 * 0x2f8) +
                 _DAT_006243a4);
    }
    if (iVar3 < *(int *)(PTR_DAT_0066ac78 + 0x3c)) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x24 + iVar3 * 0x38);
      *piVar1 = *piVar1 + 1500000;
      *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar3 * 0x2f8) =
           (longlong)
           ROUND((float10)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar3 * 0x2f8) +
                 _DAT_006243b0);
    }
  }
  iVar2 = *(int *)(PTR_DAT_0066ac78 + 0x88);
  if (iVar2 == 2) {
    FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_2 * 0x2f8),param_2,0x14,
                 &DAT_006243c4);
  }
  else if (iVar2 == 4) {
    FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_2 * 0x2f8),param_2,0x1e,
                 &DAT_006243c4);
  }
  else if (iVar2 == 6) {
    FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_2 * 0x2f8),param_2,0x19,
                 &DAT_006243c4);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 2) {
    piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 700 + param_2 * 0x2f8);
    *piVar1 = *piVar1 + 10;
    piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 700 + iVar3 * 0x2f8);
    *piVar1 = *piVar1 + 7;
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 4) {
    piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2c4 + param_2 * 0x2f8);
    *piVar1 = *piVar1 + 0x14;
    piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2c4 + iVar3 * 0x2f8);
    *piVar1 = *piVar1 + 0xf;
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 6) {
    piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2cc + param_2 * 0x2f8);
    *piVar1 = *piVar1 + 0xc;
    piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2cc + iVar3 * 0x2f8);
    *piVar1 = *piVar1 + 10;
  }
  return;
}

