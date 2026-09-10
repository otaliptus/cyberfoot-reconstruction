// Address: 004a974c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

byte FUN_004a974c(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  char local_1c [5];
  undefined1 local_17;
  byte local_16;
  byte local_15;
  int local_14;
  uint local_10;
  uint local_c;
  byte local_5;
  
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 2) != 0) {
    iVar5 = *(int *)(param_1 + 0x20);
    uVar3 = 0;
    do {
      if (uVar3 < *(uint *)(param_1 + 0x24)) {
        local_15 = 0;
      }
      else {
        local_15 = *(byte *)(*(int *)(param_1 + 0x3c) + (uVar3 - *(uint *)(param_1 + 0x24)));
      }
      *(byte *)(*(int *)(param_1 + 0x2c) + uVar3) =
           *(char *)(*(int *)(param_1 + 0x3c) + uVar3) - local_15;
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 4) != 0) {
    iVar5 = *(int *)(param_1 + 0x20);
    iVar4 = 0;
    do {
      *(char *)(*(int *)(param_1 + 0x30) + iVar4) =
           *(char *)(*(int *)(param_1 + 0x3c) + iVar4) - *(char *)(*(int *)(param_1 + 0x28) + iVar4)
      ;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 8) != 0) {
    iVar5 = *(int *)(param_1 + 0x20);
    uVar3 = 0;
    do {
      if (uVar3 < *(uint *)(param_1 + 0x24)) {
        local_15 = 0;
      }
      else {
        local_15 = *(byte *)(*(int *)(param_1 + 0x3c) + (uVar3 - *(uint *)(param_1 + 0x24)));
      }
      local_16 = *(byte *)(*(int *)(param_1 + 0x28) + uVar3);
      *(char *)(*(int *)(param_1 + 0x34) + uVar3) =
           *(char *)(*(int *)(param_1 + 0x3c) + uVar3) -
           (char)((uint)local_16 + (uint)local_15 >> 1);
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 0x10) != 0) {
    local_15 = 0;
    local_17 = 0;
    iVar5 = *(int *)(param_1 + 0x20);
    uVar3 = 0;
    do {
      if (*(uint *)(param_1 + 0x24) <= uVar3) {
        local_15 = *(byte *)(*(int *)(param_1 + 0x3c) + (uVar3 - *(uint *)(param_1 + 0x24)));
        local_17 = *(undefined1 *)(*(int *)(param_1 + 0x28) + (uVar3 - *(int *)(param_1 + 0x24)));
      }
      local_16 = *(byte *)(*(int *)(param_1 + 0x28) + uVar3);
      cVar1 = FUN_004a5ca8(CONCAT31((int3)((uint)*(int *)(param_1 + 0x28) >> 8),local_15),local_16,
                           local_17);
      *(char *)(*(int *)(param_1 + 0x38) + uVar3) =
           *(char *)(*(int *)(param_1 + 0x3c) + uVar3) - cVar1;
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00408034(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x3c),
               *(undefined4 *)(param_1 + 0x20));
  if ((DAT_004a9978 == *(char *)(*(int *)(param_1 + 0xc) + 300)) ||
     (DAT_004a997c == *(char *)(*(int *)(param_1 + 0xc) + 300))) {
    local_5 = 0;
  }
  else {
    local_10 = 0;
    local_5 = 0;
    uVar3 = 0;
    do {
      bVar2 = (byte)uVar3;
      bVar6 = bVar2 < 7;
      if (bVar2 < 8) {
        bVar6 = (*(byte *)(*(int *)(param_1 + 0xc) + 300 + ((int)(uVar3 & 0x7f) >> 3)) >>
                 (uVar3 & 7) & 1) != 0;
      }
      if (bVar6) {
        local_c = 0;
        FUN_00403540(local_1c,uVar3,1);
        if (local_1c[0] == *(char *)(*(int *)(param_1 + 0xc) + 300)) {
          return bVar2;
        }
        if (1 < *(int *)(param_1 + 0x20) - 1U) {
          iVar5 = *(int *)(param_1 + 0x20) + -2;
          local_14 = 2;
          do {
            if ((*(char *)(*(int *)(param_1 + 0x28 + uVar3 * 4) + local_14) ==
                 *(char *)(*(int *)(param_1 + 0x28 + uVar3 * 4) + -1 + local_14)) ||
               (*(char *)(*(int *)(param_1 + 0x28 + uVar3 * 4) + local_14) ==
                *(char *)(*(int *)(param_1 + 0x28 + uVar3 * 4) + -2 + local_14))) {
              local_c = local_c + 1;
            }
            local_14 = local_14 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (local_10 < local_c) {
          local_10 = local_c;
          local_5 = bVar2;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 5);
  }
  return local_5;
}

