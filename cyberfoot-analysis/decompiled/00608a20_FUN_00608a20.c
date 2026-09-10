// Address: 00608a20
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00608a20(int param_1,int param_2,int param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_8c;
  int local_88 [26];
  char local_1d;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = param_3;
  local_8 = param_2;
  if (0 < *(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x14 + param_3 * 4)) {
    local_1c = -1;
    local_18 = -1;
    local_10 = -1;
    local_14 = -1;
    local_1d = '\0';
    iVar2 = 0x19;
    piVar3 = local_88;
    do {
      piVar3 = piVar3 + 1;
      *piVar3 = 0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 1;
    do {
      local_88[*(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x58 + iVar2 * 4)] =
           local_88[*(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x58 + iVar2 * 4)] + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0xc);
    bVar1 = *(int *)(*(int *)PTR_DAT_0066b238 + 0x28 + param_1 * 0xf8) < 1;
    iVar2 = *(int *)(*(int *)PTR_DAT_0066b238 + 0x28 + param_1 * 0xf8);
    if ((0 < iVar2) && (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + iVar2 * 0x130) == '\0')) {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_0060876c(param_1,0xffffffff,0xffffffff,&local_1c,1,1);
      local_14 = 2;
    }
    iVar4 = 0;
    iVar2 = 6;
    piVar3 = local_88 + 3;
    do {
      if (0 < *piVar3) {
        iVar4 = iVar4 + 1;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (iVar4 < 2) {
      FUN_0060876c(param_1,0xffffffff,0xffffffff,&local_1c,1,3);
      local_14 = 1;
    }
    if (((0x5c < *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x194 + local_8 * 0x1bc)) &&
        (1 < *(int *)(*(int *)PTR_DAT_0066b3b8 + local_8 * 0x1bc + 0x14 + local_c * 4))) &&
       (iVar2 = FUN_004032c8(100), 0x3c < iVar2)) {
      iVar2 = 1;
      do {
        iVar4 = *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + iVar2 * 4);
        if ((*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + iVar4 * 0x130) != '\0') &&
           (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + iVar4 * 0x130) < 0x50)) break;
        iVar2 = iVar2 + 1;
        iVar4 = local_1c;
      } while (iVar2 != 0xc);
      local_1c = iVar4;
      if (0 < local_1c) {
        FUN_0060876c(param_1,local_1c,0xffffffff,&local_8c,0xffffffff,0xffffffff);
        local_1c = local_8c;
        local_18 = local_88[0];
      }
    }
    if ((0 < local_1c) && (0 < local_18)) {
      FUN_00607ac0(param_1,local_1c);
      piVar3 = (int *)(*(int *)PTR_DAT_0066b3b8 + local_8 * 0x1bc + 0x14 + local_c * 4);
      *piVar3 = *piVar3 + -1;
      iVar2 = 1;
      do {
        iVar4 = iVar2;
        if (*(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + iVar2 * 4) == local_1c) break;
        iVar2 = iVar2 + 1;
        iVar4 = local_10;
      } while (iVar2 != 0xc);
      local_10 = iVar4;
      if (0 < local_10) {
        *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + local_18 * 0x130) = 1;
        *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + local_10 * 4) = local_18;
      }
      if (local_14 == 1) {
        iVar2 = 1;
        do {
          if (*(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x58 + iVar2 * 4) == 6) {
            local_1d = '\x01';
            break;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 != 0xc);
        if (local_1d == '\0') {
          *(undefined4 *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x58 + local_10 * 4) = 6;
        }
        else {
          *(undefined4 *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x58 + local_10 * 4) = 8;
        }
      }
      if (local_14 == 2) {
        *(undefined4 *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x58 + local_10 * 4) = 1;
        *(undefined4 *)(*(int *)PTR_DAT_0066b238 + 0x28 + param_1 * 0xf8) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + local_10 * 4);
        *(undefined4 *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + local_10 * 4) = 0;
      }
    }
    *param_4 = local_1c;
    param_4[1] = local_18;
  }
  return;
}

