// Address: 006428ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006428ac(int param_1,int param_2,int param_3,float param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  int local_10;
  
  bVar1 = false;
  bVar2 = false;
  iVar3 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x2c + param_1 * 0x130);
  if ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + param_1 * 0x130) == 0) && (param_3 != 1)) {
    bVar1 = true;
  }
  if (((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + param_1 * 0x130) == 1) && (iVar3 == 0)) &&
     (param_3 != 9)) {
    bVar1 = true;
  }
  if (((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + param_1 * 0x130) == 1) && (iVar3 == 1)) &&
     (param_3 != 2)) {
    bVar1 = true;
  }
  if ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + param_1 * 0x130) == 2) &&
     ((param_3 < 3 || (8 < param_3)))) {
    bVar1 = true;
  }
  if ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + param_1 * 0x130) == 3) &&
     ((param_3 < 10 || (0x11 < param_3)))) {
    bVar1 = true;
  }
  if ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + param_1 * 0x130) == 4) && (param_3 < 0x12)) {
    bVar1 = true;
  }
  if (((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + param_1 * 0x130) == 1) && (iVar3 == 0)) &&
     (param_3 == 0x11)) {
    bVar1 = false;
  }
  if (((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + param_1 * 0x130) == 1) && (iVar3 == 1)) &&
     (param_3 == 10)) {
    bVar1 = false;
  }
  if (!bVar1) {
    local_10 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b1b8);
    if (-1 < local_10) {
      local_10 = local_10 + 1;
      iVar3 = 0;
      do {
        if ((*(int *)(*(int *)PTR_DAT_0066b1b8 + 8 + iVar3 * 0x18) == param_2) &&
           (param_1 == *(int *)(*(int *)PTR_DAT_0066b1b8 + iVar3 * 0x18))) {
          *(float *)(*(int *)PTR_DAT_0066b1b8 + 0xc + iVar3 * 0x18) =
               *(float *)(*(int *)PTR_DAT_0066b1b8 + 0xc + iVar3 * 0x18) + param_4;
          *(float *)(*(int *)PTR_DAT_0066b1b8 + 0x10 + iVar3 * 0x18) =
               *(float *)(*(int *)PTR_DAT_0066b1b8 + 0x10 + iVar3 * 0x18) + _DAT_00642c4c;
          bVar2 = true;
        }
        iVar3 = iVar3 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    if (!bVar2) {
      iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b1b8);
      FUN_004060a8(PTR_DAT_0066b1b8,PTR_DAT_00489020,1,iVar3 + 1);
      iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b1b8);
      *(int *)(*(int *)PTR_DAT_0066b1b8 + iVar3 * 0x18) = param_1;
      iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b1b8);
      *(undefined4 *)(*(int *)PTR_DAT_0066b1b8 + 4 + iVar3 * 0x18) =
           *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_1 * 0x130);
      iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b1b8);
      *(float *)(*(int *)PTR_DAT_0066b1b8 + 0xc + iVar3 * 0x18) = param_4;
      iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b1b8);
      pfVar4 = (float *)(*(int *)PTR_DAT_0066b1b8 + 0x10 + iVar3 * 0x18);
      iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b1b8);
      *pfVar4 = *(float *)(*(int *)PTR_DAT_0066b1b8 + 0x10 + iVar3 * 0x18) + _DAT_00642c4c;
      iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b1b8);
      *(int *)(*(int *)PTR_DAT_0066b1b8 + 8 + iVar3 * 0x18) = param_2;
      iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b1b8);
      *(undefined4 *)(*(int *)PTR_DAT_0066b1b8 + 0x14 + iVar3 * 0x18) =
           *(undefined4 *)(PTR_DAT_0066aca8 + param_3 * 4 + -4);
      if ((*(int *)(PTR_DAT_0066aca8 + param_3 * 4 + -4) == 3) &&
         (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x58 + param_1 * 0x130) == 0)) {
        iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b1b8);
        *(undefined4 *)(*(int *)PTR_DAT_0066b1b8 + 0x14 + iVar3 * 0x18) = 7;
      }
      if ((*(int *)(PTR_DAT_0066aca8 + param_3 * 4 + -4) == 3) &&
         (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x58 + param_1 * 0x130) == 1)) {
        iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b1b8);
        *(undefined4 *)(*(int *)PTR_DAT_0066b1b8 + 0x14 + iVar3 * 0x18) = 3;
      }
      if ((*(int *)(PTR_DAT_0066aca8 + param_3 * 4 + -4) == 5) &&
         (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + param_1 * 0x130) == 3)) {
        iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b1b8);
        *(undefined4 *)(*(int *)PTR_DAT_0066b1b8 + 0x14 + iVar3 * 0x18) = 3;
      }
      if ((*(int *)(PTR_DAT_0066aca8 + param_3 * 4 + -4) == 1) &&
         (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + param_1 * 0x130) == 3)) {
        iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b1b8);
        *(undefined4 *)(*(int *)PTR_DAT_0066b1b8 + 0x14 + iVar3 * 0x18) = 3;
      }
    }
  }
  return;
}

