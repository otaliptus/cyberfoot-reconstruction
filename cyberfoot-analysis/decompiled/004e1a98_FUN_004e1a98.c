// Address: 004e1a98
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e1a98(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *local_1c;
  int *local_18;
  int *local_14;
  
  puVar1 = PTR_DAT_0066ac78;
  iVar3 = 0;
  DAT_0067aee4 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b238);
  iVar2 = *(int *)(puVar1 + 0x88);
  if (iVar2 == 0) {
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b0d4);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        if ((*(double *)(*(int *)PTR_DAT_0066b0d4 + 0x10 + iVar3 * 0x18) ==
             *(double *)(PTR_DAT_0066b574 + *(int *)(puVar1 + 0x16c) * 0x18 + -0x10)) &&
           (*(char *)(*(int *)PTR_DAT_0066b0d4 + 8 + iVar3 * 0x18) == '\0')) {
          if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                       *(int *)(*(int *)PTR_DAT_0066b0d4 + iVar3 * 0x18) * 0x2f8) == '\0') {
            FUN_004e24d0(*(undefined4 *)(*(int *)PTR_DAT_0066b0d4 + iVar3 * 0x18));
          }
          if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                       *(int *)(*(int *)PTR_DAT_0066b0d4 + 4 + iVar3 * 0x18) * 0x2f8) == '\0') {
            FUN_004e24d0(*(undefined4 *)(*(int *)PTR_DAT_0066b0d4 + 4 + iVar3 * 0x18));
          }
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else if (iVar2 == 1) {
    iVar2 = *(int *)(puVar1 + 0x3c);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar3 * 0x2f8) == '\0') &&
           (0 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar3 * 0x2f8))) {
          FUN_004e24d0(iVar3);
          FUN_004e2a64(iVar3);
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else if (iVar2 == 2) {
    iVar2 = *(int *)(puVar1 + 0x3c);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar3 * 0x2f8) == '\0') &&
           (*(char *)(*(int *)PTR_DAT_0066af70 + 0x214 + iVar3 * 0x2f8) != '\0')) {
          FUN_004e24d0(iVar3);
          FUN_004e2a64(iVar3);
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else if (iVar2 == 3) {
    iVar2 = 0x1b;
    local_1c = PTR_DAT_0066ae98 + 0x52d;
    do {
      if (((*local_1c != '\0') && (local_1c[2] == '\0')) &&
         (iVar3 = *(int *)(local_1c + -0x1d), 0 < iVar3)) {
        local_18 = (int *)(local_1c + -0x52d);
        do {
          iVar5 = 0x14;
          piVar4 = local_18;
          do {
            if ((-1 < *piVar4) &&
               (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *piVar4 * 0x2f8) == '\0')) {
              FUN_004e24d0();
              FUN_004e2a64(*piVar4);
            }
            piVar4 = piVar4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          local_18 = local_18 + 0x14;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_1c = local_1c + 0x568;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else if (iVar2 == 4) {
    iVar2 = 8;
    local_14 = (int *)(puVar1 + 0x1ac);
    do {
      iVar3 = 4;
      piVar4 = local_14;
      do {
        if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *piVar4 * 0x2f8) == '\0') &&
           (*(char *)(*(int *)PTR_DAT_0066af70 + 0x217 + *piVar4 * 0x2f8) != '\0')) {
          FUN_004e24d0(*piVar4);
          FUN_004e2a64(*piVar4);
        }
        piVar4 = piVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_14 = local_14 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 8;
    local_14 = (int *)(puVar1 + 0x22c);
    do {
      iVar3 = 4;
      piVar4 = local_14;
      do {
        if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *piVar4 * 0x2f8) == '\0') &&
           (*(char *)(*(int *)PTR_DAT_0066af70 + 0x217 + *piVar4 * 0x2f8) != '\0')) {
          FUN_004e24d0(*piVar4);
          FUN_004e2a64(*piVar4);
        }
        piVar4 = piVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_14 = local_14 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (puVar1[0x173] != '\0') {
      iVar2 = 8;
      local_14 = (int *)(puVar1 + 0x3ac);
      do {
        iVar3 = 4;
        piVar4 = local_14;
        do {
          if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *piVar4 * 0x2f8) == '\0') &&
             (*(char *)(*(int *)PTR_DAT_0066af70 + 0x217 + *piVar4 * 0x2f8) != '\0')) {
            FUN_004e24d0(*piVar4);
            FUN_004e2a64(*piVar4);
          }
          piVar4 = piVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        local_14 = local_14 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (puVar1[0x174] != '\0') {
      iVar2 = 8;
      local_14 = (int *)(puVar1 + 0x42c);
      do {
        iVar3 = 4;
        piVar4 = local_14;
        do {
          if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *piVar4 * 0x2f8) == '\0') &&
             (*(char *)(*(int *)PTR_DAT_0066af70 + 0x217 + *piVar4 * 0x2f8) != '\0')) {
            FUN_004e24d0(*piVar4);
            FUN_004e2a64(*piVar4);
          }
          piVar4 = piVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        local_14 = local_14 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else if (iVar2 == 5) {
    iVar2 = *(int *)(puVar1 + 0x1a8);
    if (iVar2 == 1) {
      iVar3 = 0;
    }
    else if (iVar2 == 2) {
      iVar3 = 2;
    }
    else if (iVar2 == 3) {
      iVar3 = 4;
    }
    iVar2 = 1;
    do {
      if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                   *(int *)(PTR_DAT_0066af90 + (iVar3 + iVar2) * 0x30 + -0x30) * 0x2f8) == '\0') {
        FUN_004e24d0(*(undefined4 *)(PTR_DAT_0066af90 + (iVar3 + iVar2) * 0x30 + -0x30));
      }
      if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                   *(int *)(PTR_DAT_0066af90 + (iVar3 + iVar2) * 0x30 + -0x2c) * 0x2f8) == '\0') {
        FUN_004e24d0(*(undefined4 *)(PTR_DAT_0066af90 + (iVar3 + iVar2) * 0x30 + -0x2c));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 3);
  }
  else if (iVar2 == 6) {
    iVar2 = 8;
    local_14 = (int *)(puVar1 + 0x2ac);
    do {
      iVar3 = 4;
      piVar4 = local_14;
      do {
        if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *piVar4 * 0x2f8) == '\0') &&
           (*(char *)(*(int *)PTR_DAT_0066af70 + 0x218 + *piVar4 * 0x2f8) != '\0')) {
          FUN_004e24d0(*piVar4);
          FUN_004e2a64(*piVar4);
        }
        piVar4 = piVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_14 = local_14 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 8;
    local_14 = (int *)(puVar1 + 0x32c);
    do {
      iVar3 = 4;
      piVar4 = local_14;
      do {
        if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *piVar4 * 0x2f8) == '\0') &&
           (*(char *)(*(int *)PTR_DAT_0066af70 + 0x218 + *piVar4 * 0x2f8) != '\0')) {
          FUN_004e24d0(*piVar4);
          FUN_004e2a64(*piVar4);
        }
        piVar4 = piVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_14 = local_14 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else if (iVar2 == 7) {
    iVar2 = 8;
    local_14 = (int *)(puVar1 + 0x4bc);
    do {
      iVar3 = 4;
      piVar4 = local_14;
      do {
        if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *piVar4 * 0x2f8) == '\0') {
          FUN_004e24d0(*piVar4);
          FUN_004e2a64(*piVar4);
        }
        piVar4 = piVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_14 = local_14 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else if (iVar2 == 8) {
    iVar2 = 3;
    local_14 = (int *)(puVar1 + 0x4bc);
    do {
      iVar3 = 4;
      piVar4 = local_14;
      do {
        if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *piVar4 * 0x2f8) == '\0') {
          FUN_004e24d0(*piVar4);
          FUN_004e2a64(*piVar4);
        }
        piVar4 = piVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_14 = local_14 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else if (iVar2 == 9) {
    iVar2 = 4;
    local_14 = (int *)(puVar1 + 0x4bc);
    do {
      iVar3 = 4;
      piVar4 = local_14;
      do {
        if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *piVar4 * 0x2f8) == '\0') {
          FUN_004e24d0(*piVar4);
          FUN_004e2a64(*piVar4);
        }
        piVar4 = piVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_14 = local_14 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else if (iVar2 == 10) {
    iVar2 = FUN_00645408();
    iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066afa0);
    if (-1 < iVar3) {
      iVar3 = iVar3 + 1;
      iVar5 = 0;
      do {
        if ((*(int *)(*(int *)PTR_DAT_0066afa0 + 0x18 + iVar5 * 0x48) == 10) &&
           (*(int *)(*(int *)PTR_DAT_0066afa0 + 0x1c + iVar5 * 0x48) == iVar2)) {
          if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                       *(int *)(*(int *)PTR_DAT_0066afa0 + iVar5 * 0x48) * 0x2f8) == '\0') {
            FUN_004e24d0(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar5 * 0x48));
            FUN_004e2a64(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar5 * 0x48));
          }
          if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                       *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar5 * 0x48) * 0x2f8) == '\0') {
            FUN_004e24d0(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar5 * 0x48));
            FUN_004e2a64(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar5 * 0x48));
          }
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_004e1a14();
  FUN_004e1988();
  return;
}

