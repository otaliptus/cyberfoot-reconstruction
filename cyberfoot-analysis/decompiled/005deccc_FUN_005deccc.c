// Address: 005deccc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005deccc(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int local_1c;
  int local_14;
  
  puVar1 = PTR_DAT_0066aca0;
  DAT_006d3480 = 0xffffffff;
  DAT_006d3484 = 0xffffffff;
  iVar6 = 10;
  puVar3 = &DAT_006d348c;
  do {
    *puVar3 = 0xffffffff;
    puVar3 = puVar3 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar9 = 0;
  FUN_004060a8(&DAT_006d3478,PTR_DAT_005d8cfc,1,0,param_1,0);
  local_1c = 0;
  local_14 = *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40);
  if (-1 < local_14 + -1) {
    iVar6 = 0;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar6 * 0x2f8) == 0) &&
         (*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar6 * 0x2f8) ==
          *(int *)(*(int *)puVar1 + 0x140 + param_2 * 0x294))) {
        local_1c = local_1c + 1;
        FUN_004060a8(&DAT_006d3478,PTR_DAT_005d8cfc,1,local_1c,param_1,uVar9);
        *(undefined1 *)(DAT_006d3478 + -0xc + local_1c * 0xc) =
             *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar6 * 0x2f8);
        *(int *)(DAT_006d3478 + -8 + local_1c * 0xc) = iVar6;
        uVar2 = FUN_004032c8(100);
        *(undefined1 *)(DAT_006d3478 + -4 + local_1c * 0xc) = uVar2;
      }
      iVar6 = iVar6 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  DAT_006d347c = FUN_00405eec(DAT_006d3478);
  FUN_004bcdb0(DAT_006d3478,0xc,0,&LAB_005d93c8,DAT_006d347c + -1);
  if (local_1c < 10) {
    local_1c = local_1c + -1;
  }
  else {
    local_1c = 9;
  }
  if (-1 < local_1c) {
    local_1c = local_1c + 1;
    iVar6 = 0;
    puVar3 = &DAT_006d348c;
    do {
      *puVar3 = *(undefined4 *)(DAT_006d3478 + 4 + iVar6 * 0xc);
      iVar6 = iVar6 + 1;
      puVar3 = puVar3 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  iVar6 = 10;
  piVar7 = &DAT_006d348c;
  do {
    iVar4 = FUN_004032c8(10);
    iVar4 = iVar4 + 1;
    if ((0 < *(int *)(&DAT_006d3488 + iVar4 * 4)) && (0 < *piVar7)) {
      iVar5 = *piVar7;
      *piVar7 = *(int *)(&DAT_006d3488 + iVar4 * 4);
      *(int *)(&DAT_006d3488 + iVar4 * 4) = iVar5;
    }
    piVar7 = piVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  DAT_006d3480 = DAT_006d348c;
  DAT_006d3484 = DAT_006d3490;
  *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x50 + DAT_006d348c * 0x2f8) = 100;
  *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x54 + DAT_006d3480 * 0x2f8) = 100;
  *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x50 + DAT_006d3484 * 0x2f8) = 100;
  *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x54 + DAT_006d3484 * 0x2f8) = 100;
  if ((*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) &&
     (iVar6 = *(int *)(*(int *)puVar1 + 0x144 + param_2 * 0x294), 0 < iVar6)) {
    iVar4 = 1;
    local_1c = iVar6;
    do {
      if (iVar4 == 1) {
        iVar5 = 1;
        do {
          *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + -4 + iVar5 * 4) =
               *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + 0x14c + iVar5 * 4);
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0x11);
      }
      else {
        iVar5 = 1;
        do {
          *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + iVar4 * 0x50 + -0x54 + iVar5 * 4) =
               *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + iVar4 * 0x50 + 0xec + iVar5 * 4);
          iVar5 = iVar5 + 1;
        } while (iVar5 != 5);
        iVar5 = 5;
        do {
          *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + iVar4 * 0x50 + -0x54 + iVar5 * 4) =
               *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + iVar4 * 0x50 + 0xfc + iVar5 * 4);
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0x11);
      }
      if (iVar4 < iVar6) {
        iVar5 = 0x11;
        do {
          *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + iVar4 * 0x50 + -0x54 + iVar5 * 4) =
               *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + iVar4 * 0x50 + 0x10c + iVar5 * 4);
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0x15);
      }
      else {
        *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + -0x10 + iVar4 * 0x50) =
             *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + 0x140 + iVar4 * 0x50);
        *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + -0xc + iVar4 * 0x50) =
             *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + 0x144 + iVar4 * 0x50);
        *(int *)(*(int *)puVar1 + param_2 * 0x294 + -8 + iVar4 * 0x50) = DAT_006d3480;
        *(undefined4 *)
         (*(int *)PTR_DAT_0066af70 + 0x7c +
         *(int *)(*(int *)puVar1 + param_2 * 0x294 + 0x148 + iVar4 * 0x50) * 0x2f8) = 0;
        *(int *)(*(int *)puVar1 + param_2 * 0x294 + -4 + iVar4 * 0x50) = DAT_006d3484;
        *(undefined4 *)
         (*(int *)PTR_DAT_0066af70 + 0x7c +
         *(int *)(*(int *)puVar1 + param_2 * 0x294 + 0x14c + iVar4 * 0x50) * 0x2f8) = 0;
      }
      iVar4 = iVar4 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
    *(undefined4 *)(*(int *)puVar1 + 0x20 + param_2 * 0x294) =
         *(undefined4 *)(*(int *)puVar1 + 0x1a0 + param_2 * 0x294);
    *(undefined4 *)(*(int *)puVar1 + 0x24 + param_2 * 0x294) =
         *(undefined4 *)(*(int *)puVar1 + 0x1a4 + param_2 * 0x294);
    iVar6 = 1;
    do {
      *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + -4 + iVar6 * 4) =
           *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + 0x14c + iVar6 * 4);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 9);
    *(undefined4 *)(*(int *)puVar1 + 0x50 + param_2 * 0x294) =
         *(undefined4 *)(*(int *)puVar1 + 0x170 + param_2 * 0x294);
    *(undefined4 *)(*(int *)puVar1 + 0x54 + param_2 * 0x294) =
         *(undefined4 *)(*(int *)puVar1 + 0x174 + param_2 * 0x294);
    iVar6 = 3;
    do {
      *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + 0x4c + iVar6 * 4) =
           *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + 0x19c + iVar6 * 4);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 9);
    if (*(int *)(*(int *)puVar1 + 0x144 + param_2 * 0x294) < 3) {
      *(int *)(*(int *)puVar1 + 0x70 + param_2 * 0x294) = DAT_006d3480;
      *(int *)(*(int *)puVar1 + 0x74 + param_2 * 0x294) = DAT_006d3484;
      *(undefined4 *)
       (*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)(*(int *)puVar1 + 0x1c0 + param_2 * 0x294) * 0x2f8
       ) = 0;
      *(undefined4 *)
       (*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)(*(int *)puVar1 + 0x1c4 + param_2 * 0x294) * 0x2f8
       ) = 0;
    }
    else {
      *(undefined4 *)(*(int *)puVar1 + 0x70 + param_2 * 0x294) =
           *(undefined4 *)(*(int *)puVar1 + 0x1f0 + param_2 * 0x294);
      *(undefined4 *)(*(int *)puVar1 + 0x74 + param_2 * 0x294) =
           *(undefined4 *)(*(int *)puVar1 + 500 + param_2 * 0x294);
      *(undefined4 *)(*(int *)puVar1 + 0xa0 + param_2 * 0x294) =
           *(undefined4 *)(*(int *)puVar1 + 0x1c0 + param_2 * 0x294);
      *(undefined4 *)(*(int *)puVar1 + 0xa4 + param_2 * 0x294) =
           *(undefined4 *)(*(int *)puVar1 + 0x1c4 + param_2 * 0x294);
      iVar6 = 3;
      do {
        *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + 0x9c + iVar6 * 4) =
             *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + 0x1ec + iVar6 * 4);
        iVar6 = iVar6 + 1;
      } while (iVar6 != 9);
      if (*(int *)(*(int *)puVar1 + 0x144 + param_2 * 0x294) < 4) {
        if (-1 < DAT_006d3480) {
          *(int *)(*(int *)puVar1 + 0xc0 + param_2 * 0x294) = DAT_006d3480;
          *(undefined4 *)
           (*(int *)PTR_DAT_0066af70 + 0x7c +
           *(int *)(*(int *)puVar1 + 0x210 + param_2 * 0x294) * 0x2f8) = 0;
        }
        if (-1 < DAT_006d3484) {
          *(int *)(*(int *)puVar1 + 0xc4 + param_2 * 0x294) = DAT_006d3484;
          *(undefined4 *)
           (*(int *)PTR_DAT_0066af70 + 0x7c +
           *(int *)(*(int *)puVar1 + 0x214 + param_2 * 0x294) * 0x2f8) = 0;
        }
      }
      else {
        *(undefined4 *)(*(int *)puVar1 + 0xc0 + param_2 * 0x294) =
             *(undefined4 *)(*(int *)puVar1 + 0x240 + param_2 * 0x294);
        *(undefined4 *)(*(int *)puVar1 + 0xc4 + param_2 * 0x294) =
             *(undefined4 *)(*(int *)puVar1 + 0x244 + param_2 * 0x294);
      }
    }
    if (3 < *(int *)(*(int *)puVar1 + 0x144 + param_2 * 0x294)) {
      *(undefined4 *)(*(int *)puVar1 + 0xf0 + param_2 * 0x294) =
           *(undefined4 *)(*(int *)puVar1 + 0x210 + param_2 * 0x294);
      *(undefined4 *)(*(int *)puVar1 + 0xf4 + param_2 * 0x294) =
           *(undefined4 *)(*(int *)puVar1 + 0x214 + param_2 * 0x294);
      iVar6 = 3;
      do {
        *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + 0xec + iVar6 * 4) =
             *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + 0x23c + iVar6 * 4);
        iVar6 = iVar6 + 1;
      } while (iVar6 != 9);
      if (-1 < DAT_006d3480) {
        *(int *)(*(int *)puVar1 + 0x110 + param_2 * 0x294) = DAT_006d3480;
        *(undefined4 *)
         (*(int *)PTR_DAT_0066af70 + 0x7c +
         *(int *)(*(int *)puVar1 + 0x260 + param_2 * 0x294) * 0x2f8) = 0;
      }
      if (-1 < DAT_006d3484) {
        *(int *)(*(int *)puVar1 + 0x114 + param_2 * 0x294) = DAT_006d3484;
        *(undefined4 *)
         (*(int *)PTR_DAT_0066af70 + 0x7c +
         *(int *)(*(int *)puVar1 + 0x264 + param_2 * 0x294) * 0x2f8) = 0;
      }
    }
  }
  if ((*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) &&
     (local_1c = *(int *)(*(int *)puVar1 + 0x144 + param_2 * 0x294), 0 < local_1c)) {
    iVar6 = 1;
    do {
      iVar4 = 1;
      do {
        *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c +
                *(int *)(*(int *)puVar1 + param_2 * 0x294 + iVar6 * 0x50 + -0x54 + iVar4 * 4) *
                0x2f8) = iVar6;
        *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + iVar6 * 0x50 + 0xfc + iVar4 * 4) =
             *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + iVar6 * 0x50 + -0x54 + iVar4 * 4);
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x15);
      iVar6 = iVar6 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  if ((*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) &&
     (local_1c = *(int *)(*(int *)puVar1 + 0x144 + param_2 * 0x294), 0 < local_1c)) {
    iVar6 = 1;
    do {
      iVar4 = 1;
      do {
        *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c +
                *(int *)(*(int *)puVar1 + param_2 * 0x294 + iVar6 * 0x50 + -0x54 + iVar4 * 4) *
                0x2f8) = iVar6;
        *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + iVar6 * 0x50 + 0xfc + iVar4 * 4) =
             *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + iVar6 * 0x50 + -0x54 + iVar4 * 4);
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0xb);
      iVar6 = iVar6 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4c) = 1;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x50) = 1;
  iVar6 = 1;
  puVar8 = PTR_DAT_0066b608;
  do {
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + DAT_006d3480 * 0x2f8 + 0x1f0 + iVar6 * 4) =
         *(undefined4 *)
          (puVar8 + *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + DAT_006d3480 * 0x2f8) * 0x10);
    iVar6 = iVar6 + 1;
    puVar8 = puVar8 + 4;
  } while (iVar6 != 5);
  iVar6 = 1;
  puVar8 = PTR_DAT_0066b608;
  do {
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + DAT_006d3484 * 0x2f8 + 0x1f0 + iVar6 * 4) =
         *(undefined4 *)
          (puVar8 + *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + DAT_006d3484 * 0x2f8) * 0x10);
    iVar6 = iVar6 + 1;
    puVar8 = puVar8 + 4;
  } while (iVar6 != 5);
  iVar6 = 4;
  puVar3 = (undefined4 *)PTR_DAT_0066b420;
  do {
    *puVar3 = 0xffffffff;
    puVar3 = puVar3 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if ((*(int *)(*(int *)puVar1 + 0x140 + param_2 * 0x294) == 0x1d) &&
     (PTR_DAT_0066ac78[0x75c] != '\0')) {
    iVar6 = 1;
    puVar3 = (undefined4 *)PTR_DAT_0066b420;
    do {
      *puVar3 = *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + 0xfc + iVar6 * 4);
      iVar6 = iVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar6 != 5);
    iVar6 = 1;
    do {
      *(undefined4 *)
       (*(int *)PTR_DAT_0066af70 + 0x7c +
       *(int *)(*(int *)puVar1 + param_2 * 0x294 + 0xec + iVar6 * 4) * 0x2f8) = 0;
      *(undefined4 *)(*(int *)puVar1 + param_2 * 0x294 + 0xec + iVar6 * 4) = 0xffffffff;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x15);
    *(undefined4 *)(*(int *)puVar1 + 0x144 + param_2 * 0x294) = 3;
  }
  if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + DAT_006d3480 * 0x2f8) == -1) &&
     (local_1c = *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40),
     -1 < local_1c + -1)) {
    iVar6 = 0;
    do {
      if ((((*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar6 * 0x2f8) == 0) &&
           (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar6 * 0x2f8) == '\0')) &&
          (0 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + iVar6 * 0x2f8))) &&
         (*(char *)(*(int *)PTR_DAT_0066b718 +
                   *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + iVar6 * 0x2f8) * 0x80) != '\0')) {
        uVar9 = *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + iVar6 * 0x2f8);
        FUN_00649824(iVar6,uVar9);
        FUN_00649138(DAT_006d3480,uVar9);
        break;
      }
      iVar6 = iVar6 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + DAT_006d3484 * 0x2f8) == -1) &&
     (local_1c = *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40),
     -1 < local_1c + -1)) {
    iVar6 = 0;
    do {
      if (((*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar6 * 0x2f8) == 0) &&
          (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar6 * 0x2f8) == '\0')) &&
         ((0 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + iVar6 * 0x2f8) &&
          (*(char *)(*(int *)PTR_DAT_0066b718 +
                    *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + iVar6 * 0x2f8) * 0x80) != '\0')))) {
        uVar9 = *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + iVar6 * 0x2f8);
        FUN_00649824(iVar6,uVar9);
        FUN_00649138(DAT_006d3484,uVar9);
        break;
      }
      iVar6 = iVar6 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  local_1c = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b718);
  if (-1 < local_1c + -1) {
    iVar6 = 0;
    do {
      if ((((-1 < *(int *)(*(int *)PTR_DAT_0066b718 + 0x1c + iVar6 * 0x80)) &&
           (*(char *)(*(int *)PTR_DAT_0066b718 + iVar6 * 0x80) != '\0')) &&
          (*(char *)(*(int *)PTR_DAT_0066b718 + 0x31 + iVar6 * 0x80) == '\0')) &&
         (iVar6 != *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 +
                           *(int *)(*(int *)PTR_DAT_0066b718 + 0x1c + iVar6 * 0x80) * 0x2f8))) {
        *(undefined1 *)(*(int *)PTR_DAT_0066b718 + 0x40 + iVar6 * 0x80) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x1c + iVar6 * 0x80) = 0xffffffff;
      }
      iVar6 = iVar6 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return;
}

