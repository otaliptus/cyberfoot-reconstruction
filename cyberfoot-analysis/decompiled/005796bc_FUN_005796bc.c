// Address: 005796bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_005796bc(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_20c;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  uint local_1e8;
  int local_1e4;
  int local_1e0;
  
  FUN_00402b90();
  iVar5 = DAT_006d2174;
  local_204 = -1;
  local_1e4 = -1;
  local_200 = -1;
  local_1f8 = *(int *)(DAT_006d2160 + param_1 * 4) + -10;
  if (param_3 == 2) {
    local_1fc = 10;
  }
  else {
    local_1fc = 3;
  }
  iVar2 = FUN_00405ef4(DAT_006d2168);
  if (iVar5 <= iVar2) {
    local_1e0 = (iVar2 - iVar5) + 1;
    do {
      local_208 = param_2;
      if (param_2 == -1) {
        local_208 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 +
                            *(int *)(DAT_006d2168 + iVar5 * 0x2c) * 0x130);
      }
      local_1f4 = *(int *)(&DAT_00669f30 +
                          *(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + param_1 * 0x2f8) * 4) +
                  *(int *)(DAT_006d2160 + param_1 * 4);
      if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_1 * 0x2f8) == 1) {
        local_1f4 = local_1f4 + 10;
      }
      else {
        iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_1 * 0x2f8);
        if ((1 < iVar2) && (iVar2 < 5)) {
          local_1f4 = local_1f4 + 5;
        }
      }
      iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + param_1 * 0x2f8);
      local_1f0 = iVar2 + -2;
      local_1ec = iVar2 + 1;
      if ((iVar2 == 5) && (iVar3 = FUN_004032c8(3,PTR_DAT_0066af70), iVar3 == 1)) {
        local_1f0 = 2;
      }
      iVar3 = *(int *)(DAT_006d2168 + 4 + iVar5 * 0x2c);
      if (iVar3 < *(int *)(DAT_006d2160 + param_1 * 4) + -0x1e) {
        local_1ec = iVar2 + 3;
      }
      else if (iVar3 < *(int *)(DAT_006d2160 + param_1 * 4)) {
        local_1ec = iVar2 + 2;
      }
      iVar2 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_1 * 0x2f8));
      if (iVar2 == 0) {
        iVar2 = FUN_004032c8(*(undefined4 *)
                              (&DAT_00669f90 +
                              *(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + param_1 * 0x2f8) * 4));
        if (iVar2 == 1) {
          local_1e8 = 1;
        }
        else {
          local_1e8 = 0;
        }
      }
      else {
        iVar2 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_1 * 0x2f8));
        if (iVar2 == 1) {
          iVar2 = FUN_004032c8(*(undefined4 *)
                                (&DAT_00669f78 +
                                *(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + param_1 * 0x2f8) * 4));
          if (iVar2 == 1) {
            local_1e4 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_1 * 0x2f8);
          }
          local_1e8 = (uint)(iVar2 != 1);
          if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + param_1 * 0x2f8) <=
              *(int *)(DAT_006d2168 + 0xc + iVar5 * 0x2c)) {
            local_1f4 = *(int *)(&DAT_00669f48 +
                                *(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + param_1 * 0x2f8) * 4) +
                        *(int *)(DAT_006d2160 + param_1 * 4);
          }
          if (param_3 == 2) {
            local_1e8 = 1;
            local_1e4 = -1;
          }
        }
        else {
          local_1e8 = FUN_0064f2d0(*(undefined4 *)
                                    (*(int *)PTR_DAT_0066af70 + 0x3c + param_1 * 0x2f8));
        }
      }
      if ((param_3 == 2) && (1 < (int)local_1e8)) {
        local_1e8 = FUN_004032c8(2);
      }
      if (local_1e4 == -1) {
        local_1e4 = *(int *)(DAT_006d2168 + 8 + iVar5 * 0x2c);
      }
      if (local_200 == -1) {
        local_200 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 +
                            *(int *)(DAT_006d2168 + iVar5 * 0x2c) * 0x130);
      }
      if (param_3 == 2) {
        local_1f8 = 0;
        iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + param_1 * 0x2f8);
        local_1f4 = *(int *)(&DAT_00669f60 + iVar2 * 4) + *(int *)(DAT_006d2160 + param_1 * 4);
        local_1f0 = 0;
        if (iVar2 < 3) {
          local_1ec = 3;
        }
        else {
          local_1ec = 5;
        }
        if (((param_1 == DAT_006d217c) && (DAT_006d2180 == '\0')) &&
           (iVar2 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_1 * 0x2f8))
           , iVar2 == 0)) {
          local_1e8 = 1;
        }
      }
      if (((((*(int *)(*(int *)PTR_DAT_0066af70 + param_1 * 0x2f8 + 0x68 +
                      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 +
                              *(int *)(DAT_006d2168 + iVar5 * 0x2c) * 0x130) * 4) <
              *(int *)(&DAT_00669f08 +
                      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 +
                              *(int *)(DAT_006d2168 + iVar5 * 0x2c) * 0x130) * 4)) &&
            (*(int *)(DAT_006d2164 + *(int *)(DAT_006d2168 + 0x1c + iVar5 * 0x2c) * 4) < local_1fc))
           && ((*(char *)(DAT_006d2168 + 0x28 + iVar5 * 0x2c) != '\0' &&
               ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 +
                         *(int *)(DAT_006d2168 + iVar5 * 0x2c) * 0x130) == local_208 &&
                (local_1f8 < *(int *)(DAT_006d2168 + 4 + iVar5 * 0x2c))))))) &&
          (*(int *)(DAT_006d2168 + 4 + iVar5 * 0x2c) <= local_1f4)) &&
         ((((param_1 != *(int *)(DAT_006d2168 + 0x1c + iVar5 * 0x2c) &&
            (local_1f0 <= *(int *)(DAT_006d2168 + 0xc + iVar5 * 0x2c))) &&
           (*(int *)(DAT_006d2168 + 0xc + iVar5 * 0x2c) <= local_1ec)) &&
          ((*(uint *)(DAT_006d2168 + 0x20 + iVar5 * 0x2c) == local_1e8 &&
           (*(int *)(DAT_006d2168 + 8 + iVar5 * 0x2c) == local_1e4)))))) {
        *(undefined1 *)(DAT_006d2168 + 0x28 + iVar5 * 0x2c) = 0;
        local_204 = iVar5;
        break;
      }
      iVar5 = iVar5 + 1;
      local_1e0 = local_1e0 + -1;
    } while (local_1e0 != 0);
  }
  if (-1 < local_204) {
    piVar1 = (int *)(DAT_006d2164 + *(int *)(DAT_006d2168 + 0x1c + local_204 * 0x2c) * 4);
    *piVar1 = *piVar1 + 1;
    *(undefined1 *)
     (*(int *)PTR_DAT_0066b5b8 + 0x110 + *(int *)(DAT_006d2168 + local_204 * 0x2c) * 0x130) = 1;
    *(undefined4 *)
     (*(int *)PTR_DAT_0066b5b8 + 0x114 + *(int *)(DAT_006d2168 + local_204 * 0x2c) * 0x130) = 1;
    uVar4 = FUN_00402c38();
    FUN_00650ec4(*(undefined4 *)(DAT_006d2168 + local_204 * 0x2c),param_1,uVar4);
  }
  DAT_006d2180 = -1 < local_204;
  DAT_006d217c = param_1;
  return local_20c;
}

