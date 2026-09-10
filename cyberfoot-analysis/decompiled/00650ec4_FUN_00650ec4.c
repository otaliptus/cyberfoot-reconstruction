// Address: 00650ec4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00650ec4(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_24;
  int local_18;
  int local_14;
  
  iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  if (param_1 <= iVar5 + -1) {
    iVar5 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_1 * 0x130);
    *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_1 * 0x130) = param_2;
    *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + param_1 * 0x130) = 0;
    *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + param_1 * 0x130) = 0;
    local_18 = 0;
    local_14 = 0;
    if (((*PTR_DAT_0066acbc == '\0') &&
        (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar5 * 0x2f8) != '\0')) &&
       (*(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10) <
        *(double *)(*(int *)PTR_DAT_0066b5b8 + 0x70 + param_1 * 0x130))) {
      uVar6 = FUN_00402c38();
      if ((int)uVar6 < 0x5b) {
        if (uVar6 < 0x1f) {
          local_14 = FUN_00402c38();
        }
        else if (uVar6 - 0x1f < 0x1e) {
          local_14 = FUN_00402c38();
        }
        else if (uVar6 - 0x3d < 0x1e) {
          local_14 = FUN_00402c38(uVar6 - 0x5b);
        }
      }
      else if (uVar6 - 0x5b < 0x5a) {
        local_14 = FUN_00402c38();
      }
      else if (uVar6 - 0xb5 < 0xb4) {
        local_14 = FUN_00402c38();
      }
      else if (uVar6 - 0x169 < 0xf40d8) {
        local_14 = FUN_00402c38(uVar6 - 0xf4241);
      }
      local_18 = param_3 - local_14;
    }
    if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
      FUN_00647c48(0x18,param_1);
    }
    else {
      FUN_00647c48(10,param_1);
    }
    iVar7 = FUN_00402c38();
    piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 4 + param_2 * 0x38);
    *piVar1 = *piVar1 + iVar7;
    iVar7 = FUN_00402c38();
    piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 4 + iVar5 * 0x38);
    *piVar1 = *piVar1 - iVar7;
    piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x18 + iVar5 * 0x38);
    *piVar1 = *piVar1 + param_3;
    if (local_18 < 1) {
      *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar5 * 0x2f8) =
           (longlong)
           ROUND((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar5 * 0x2f8) +
                 (float)param_3 * _DAT_006514e0);
    }
    else {
      *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar5 * 0x2f8) =
           (longlong)
           ROUND((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar5 * 0x2f8) +
                 (float)local_18 * _DAT_006514e0);
    }
    *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar5 * 0x2f8) =
         (longlong)
         ROUND((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar5 * 0x2f8) + _DAT_006514e4
              );
    piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x1c + param_2 * 0x38);
    *piVar1 = *piVar1 + param_3;
    *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_2 * 0x2f8) =
         (longlong)
         ROUND((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_2 * 0x2f8) -
               (float)param_3 * _DAT_006514e0);
    if (0 < local_18) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x34 + iVar5 * 0x38);
      *piVar1 = *piVar1 + local_14;
    }
    if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar5 * 0x2f8) != '\0') &&
       (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + param_2 * 0x2f8) != '\0')) {
      *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x85 + param_1 * 0x130) = 1;
    }
    iVar7 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b070);
    iVar7 = iVar7 + 1;
    FUN_004060a8(PTR_DAT_0066b070,PTR_DAT_00488e00,1,iVar7);
    puVar2 = (undefined4 *)(*(int *)PTR_DAT_0066b070 + -0x18 + iVar7 * 0x20);
    puVar3 = (undefined4 *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10);
    *puVar2 = *puVar3;
    puVar2[1] = puVar3[1];
    *(int *)(*(int *)PTR_DAT_0066b070 + -0x10 + iVar7 * 0x20) = iVar5;
    *(int *)(*(int *)PTR_DAT_0066b070 + -0xc + iVar7 * 0x20) = param_2;
    *(int *)(*(int *)PTR_DAT_0066b070 + -8 + iVar7 * 0x20) = param_3;
    *(int *)(*(int *)PTR_DAT_0066b070 + -0x20 + iVar7 * 0x20) = param_1;
    if (((*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + param_1 * 0x130) != '\0') &&
        (param_2 != *(int *)(PTR_DAT_0066ac78 + 8))) &&
       (0x16 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + param_2 * 0x2f8))) {
      FUN_0064cbf0(*(undefined4 *)(PTR_DAT_0066ac78 + 8),9,0,0,param_2,param_1);
    }
    *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + param_1 * 0x130) = 3;
    *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0xec + param_1 * 0x130) = 0;
    *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xf8 + param_1 * 0x130) = 0;
    *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xe8 + param_1 * 0x130) = 0;
    *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0xf5 + param_1 * 0x130) = 0;
    *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x7d + param_1 * 0x130) = 0;
    iVar7 = *(int *)PTR_DAT_0066b5b8;
    iVar4 = *(int *)PTR_DAT_0066b5b8;
    *(undefined4 *)(iVar7 + 0x48 + param_1 * 0x130) =
         *(undefined4 *)(iVar4 + 0x40 + param_1 * 0x130);
    *(undefined4 *)(iVar7 + 0x4c + param_1 * 0x130) =
         *(undefined4 *)(iVar4 + 0x44 + param_1 * 0x130);
    if (param_1 == *(int *)(*(int *)PTR_DAT_0066af70 + 0xa8 + iVar5 * 0x2f8)) {
      FUN_0065156c(iVar5);
    }
    if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar5 * 0x2f8) != '\0') &&
       (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + param_2 * 0x2f8) != '\0')) {
      *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x85 + param_1 * 0x130) = 1;
    }
    FUN_00652988(iVar5);
    FUN_00652988(param_2);
    iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
    if ((*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + param_1 * 0x130) != '\0') &&
       (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + param_2 * 0x2f8) != '\0')) {
      local_24 = 0;
      iVar5 = iVar5 + -1;
      if (0 < iVar5) {
        iVar7 = 1;
        do {
          if (((-1 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar7 * 0x130)) &&
              (param_2 == *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar7 * 0x130))) &&
             (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + iVar7 * 0x130) != '\0')) {
            local_24 = local_24 + 1;
          }
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if ((3 < local_24) && (iVar5 = FUN_004032c8(100), 0x14 < iVar5)) {
        piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x22c + param_2 * 0x2f8);
        *piVar1 = *piVar1 + -1;
        FUN_0064cbf0(param_2,0xb,0,0,0,param_1);
      }
    }
    *PTR_DAT_0066acbc = 0;
  }
  return;
}

