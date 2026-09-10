// Address: 00654d60
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00654d60(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  *(undefined4 *)PTR_DAT_0066adf4 = 0xffffffff;
  *(undefined4 *)(PTR_DAT_0066adf4 + 4) = 0xffffffff;
  *(undefined4 *)(PTR_DAT_0066adf4 + 8) = 0xffffffff;
  *(undefined4 *)(PTR_DAT_0066adf4 + 0xc) = 0xffffffff;
  local_24 = *(int *)(*(int *)PTR_DAT_0066b718 + 0x24 + param_2 * 0x80);
  iVar2 = FUN_0065208c(param_1,PTR_DAT_0066b718);
  if ((-1 < *(int *)(*(int *)PTR_DAT_0066b718 + 0x7c + param_2 * 0x80)) &&
     (iVar3 = FUN_0065208c(*(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x7c + param_2 * 0x80)),
     -1 < iVar3)) {
    iVar2 = FUN_0065208c(*(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x7c + param_2 * 0x80));
  }
  iVar3 = local_24;
  if ((param_1 == 0x1d) && (PTR_DAT_0066ac78[0x170] != '\0')) {
    if (local_24 < 1) {
      if (PTR_DAT_0066ac78[0x75c] == '\0') {
        iVar3 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + iVar2 * 0x294);
      }
      else {
        iVar3 = 4;
      }
    }
  }
  else if (local_24 < 1) {
    iVar3 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + iVar2 * 0x294);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 3) {
    local_14 = FUN_004032c8(2);
  }
  else {
    local_14 = FUN_004032c8(3);
  }
  local_14 = local_14 + 1;
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 3) {
    piVar5 = (int *)PTR_DAT_0066adf4;
    if (0 < local_14) {
      do {
        local_18 = 0;
        do {
          if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
            iVar4 = FUN_004032c8(0xb);
            iVar4 = 0x14 - iVar4;
          }
          else {
            iVar4 = FUN_004032c8(7);
            iVar4 = 10 - iVar4;
          }
          local_18 = local_18 + 1;
          if (((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                         *(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + iVar3 * 0x50 + 0xfc +
                                 iVar4 * 4) * 0x2f8) == '\0') &&
              (*(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + iVar3 * 0x50 + 0xfc + iVar4 * 4)
               != *(int *)(*(int *)PTR_DAT_0066b718 + 0x20 + param_2 * 0x80))) &&
             ((cVar1 = FUN_00654d40(*(undefined4 *)
                                     (*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + iVar3 * 0x50 + 0xfc
                                     + iVar4 * 4)), cVar1 == '\0' &&
              (*(char *)(*(int *)PTR_DAT_0066af70 + 0x216 +
                        *(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + iVar3 * 0x50 + 0xfc +
                                iVar4 * 4) * 0x2f8) != '\0')))) {
            *piVar5 = *(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + iVar3 * 0x50 + 0xfc +
                              iVar4 * 4);
          }
        } while ((*piVar5 < 0) && (99 < local_18));
        local_14 = local_14 + -1;
        piVar5 = piVar5 + 1;
      } while (local_14 != 0);
    }
  }
  else {
    local_14 = FUN_004032c8(4);
    local_14 = local_14 + 1;
    if ((*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) &&
       (((iVar3 = *(int *)(*(int *)PTR_DAT_0066b718 + 0x24 + param_2 * 0x80), iVar3 == 0 ||
         (3 < iVar3)) && (2 < local_14)))) {
      local_14 = 2;
    }
    if (0 < local_14) {
      local_1c = 1;
      piVar5 = (int *)PTR_DAT_0066adf4;
      local_20 = iVar2;
      do {
        if (1 < local_1c) {
          FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
          local_20 = FUN_004032c8();
        }
        if ((*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) &&
           ((iVar3 = *(int *)(*(int *)PTR_DAT_0066b718 + 0x24 + param_2 * 0x80), iVar3 == 0 ||
            (2 < iVar3)))) {
          local_20 = iVar2;
        }
        if (local_24 == 0) {
          local_24 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + local_20 * 0x294);
        }
        iVar3 = FUN_004032c8(100);
        if ((iVar3 < 0x1f) || (iVar3 = local_24, local_24 < 1)) {
          iVar3 = FUN_004032c8(100);
          if ((iVar3 < 0x14) && (local_24 < 4)) {
            iVar3 = local_24 + -1;
          }
          else if ((local_24 < 1) ||
                  (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + local_20 * 0x294) <= local_24)) {
            iVar3 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + local_20 * 0x294);
          }
          else {
            iVar3 = local_24 + 1;
          }
        }
        if (iVar3 == 0) {
          iVar3 = 1;
        }
        if (iVar3 < 0) {
          iVar3 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + local_20 * 0x294);
        }
        iVar4 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + local_20 * 0x294);
        if (iVar4 < iVar3) {
          iVar3 = iVar4;
        }
        do {
          if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
            if (iVar3 == 4) {
              if (*(int *)(PTR_DAT_0066ac78 + 0x50) == 1) {
                iVar4 = FUN_004032c8(10);
                iVar4 = 0xf - iVar4;
              }
              else {
                iVar4 = FUN_004032c8(6);
                iVar4 = 0xc - iVar4;
              }
            }
            else {
              iVar4 = FUN_004032c8(0xb);
              iVar4 = 0x14 - iVar4;
            }
          }
          else {
            iVar4 = FUN_004032c8(7);
            iVar4 = 10 - iVar4;
          }
          if (((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                         *(int *)(*(int *)PTR_DAT_0066aca0 + local_20 * 0x294 + iVar3 * 0x50 + 0xfc
                                 + iVar4 * 4) * 0x2f8) == '\0') &&
              (*(int *)(*(int *)PTR_DAT_0066aca0 + local_20 * 0x294 + iVar3 * 0x50 + 0xfc +
                       iVar4 * 4) !=
               *(int *)(*(int *)PTR_DAT_0066b718 + 0x20 + *(int *)(PTR_DAT_0066ac78 + 0x10) * 0x80))
              ) && (cVar1 = FUN_00654d40(*(undefined4 *)
                                          (*(int *)PTR_DAT_0066aca0 + local_20 * 0x294 +
                                           iVar3 * 0x50 + 0xfc + iVar4 * 4)), cVar1 == '\0')) {
            *piVar5 = *(int *)(*(int *)PTR_DAT_0066aca0 + local_20 * 0x294 + iVar3 * 0x50 + 0xfc +
                              iVar4 * 4);
          }
        } while (*piVar5 < 0);
        local_1c = local_1c + 1;
        piVar5 = piVar5 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  return;
}

