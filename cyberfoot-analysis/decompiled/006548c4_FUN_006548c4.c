// Address: 006548c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_006548c4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar4 = -1;
  iVar1 = FUN_0065208c();
  if (iVar1 == -1) {
    iVar4 = -1;
  }
  else {
    if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
      local_1c = FUN_004032c8(3);
      local_1c = local_1c + 0x11;
      local_18 = 5;
      local_14 = FUN_004032c8(3);
      local_14 = local_14 + 2;
    }
    else {
      local_1c = 10;
      local_18 = 3;
      local_14 = 2;
    }
    iVar2 = FUN_004032c8(2);
    if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 1) {
      if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
        iVar3 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x1a8 + param_3 * 0x2f8);
        if (iVar3 < 0x10) {
          if (iVar3 < 0xb) {
            if (5 < iVar3) {
              iVar2 = FUN_004032c8(100,iVar3,PTR_DAT_0066af70);
              if (iVar2 < 0x47) {
                iVar2 = 0;
              }
              else {
                iVar2 = 1;
              }
            }
          }
          else {
            iVar2 = FUN_004032c8(100,iVar3,PTR_DAT_0066af70);
            if (iVar2 < 0x33) {
              iVar2 = 0;
            }
            else {
              iVar2 = 1;
            }
          }
        }
        else {
          iVar2 = FUN_004032c8(100);
          if (iVar2 < 0x15) {
            iVar2 = 0;
          }
          else {
            iVar2 = 1;
          }
        }
      }
      else if (5 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x1a8 + param_3 * 0x2f8)) {
        iVar2 = FUN_004032c8(100);
        if (iVar2 < 0x15) {
          iVar2 = 0;
        }
        else {
          iVar2 = 1;
        }
      }
    }
    if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_3 * 0x2f8) ==
         *(int *)(PTR_DAT_0066ac78 + 0x168)) ||
       (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + iVar1 * 0x294) <
        *(int *)(PTR_DAT_0066ac78 + 0x168))) {
      iVar2 = 0;
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + iVar1 * 0x294);
      if (iVar2 < param_2) {
        param_2 = iVar2;
      }
      if (local_18 - local_1c == 0 || local_18 < local_1c) {
        iVar2 = (local_18 - local_1c) + -1;
        do {
          if (((-1 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 +
                             *(int *)(*(int *)PTR_DAT_0066aca0 + iVar1 * 0x294 + param_2 * 0x50 +
                                      0xfc + local_1c * 4) * 0x2f8)) &&
              (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                        *(int *)(*(int *)PTR_DAT_0066aca0 + iVar1 * 0x294 + param_2 * 0x50 + 0xfc +
                                local_1c * 4) * 0x2f8) == '\0')) &&
             ((*(int *)(*(int *)PTR_DAT_0066aca0 + iVar1 * 0x294 + param_2 * 0x50 + 0xfc +
                       local_1c * 4) != param_3 &&
              (*(int *)(*(int *)PTR_DAT_0066b718 + 0x34 +
                       *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 +
                               *(int *)(*(int *)PTR_DAT_0066aca0 + iVar1 * 0x294 + param_2 * 0x50 +
                                        0xfc + local_1c * 4) * 0x2f8) * 0x80) == 0)))) {
            iVar4 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 +
                            *(int *)(*(int *)PTR_DAT_0066aca0 + iVar1 * 0x294 + param_2 * 0x50 +
                                     0xfc + local_1c * 4) * 0x2f8);
            break;
          }
          local_1c = local_1c + -1;
          iVar2 = iVar2 + 1;
        } while (iVar2 != 0);
      }
    }
    else if (iVar2 == 1) {
      iVar2 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + iVar1 * 0x294);
      iVar3 = param_2 + 1;
      if (iVar2 < param_2 + 1) {
        iVar3 = iVar2;
      }
      if (local_14 <= local_1c) {
        iVar2 = (local_1c - local_14) + 1;
        do {
          if ((((-1 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 +
                              *(int *)(*(int *)PTR_DAT_0066aca0 + iVar1 * 0x294 + iVar3 * 0x50 +
                                       0xfc + local_14 * 4) * 0x2f8)) &&
               (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                         *(int *)(*(int *)PTR_DAT_0066aca0 + iVar1 * 0x294 + iVar3 * 0x50 + 0xfc +
                                 local_14 * 4) * 0x2f8) == '\0')) &&
              (*(int *)(*(int *)PTR_DAT_0066aca0 + iVar1 * 0x294 + iVar3 * 0x50 + 0xfc +
                       local_14 * 4) != param_3)) &&
             (*(int *)(*(int *)PTR_DAT_0066b718 + 0x34 +
                      *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 +
                              *(int *)(*(int *)PTR_DAT_0066aca0 + iVar1 * 0x294 + iVar3 * 0x50 +
                                       0xfc + local_14 * 4) * 0x2f8) * 0x80) == 0)) {
            iVar4 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 +
                            *(int *)(*(int *)PTR_DAT_0066aca0 + iVar1 * 0x294 + iVar3 * 0x50 + 0xfc
                                    + local_14 * 4) * 0x2f8);
            break;
          }
          local_14 = local_14 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    if (-1 < iVar4) {
      *(undefined4 *)PTR_DAT_0066afd4 =
           *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x1c + iVar4 * 0x80);
    }
  }
  return iVar4;
}

