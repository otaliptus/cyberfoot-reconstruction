// Address: 0051fc80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051fc80(int param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_30;
  int local_2c;
  undefined2 local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  cVar2 = FUN_0051d25c(param_1);
  if ((cVar2 == '\0') && (*(char *)(param_1 + 0x34) != '\0')) {
    cVar2 = FUN_00520744(*(undefined4 *)(param_1 + 0x38));
    local_c = 0;
    uVar4 = FUN_0051d4c8(param_1,3);
    local_14 = (uVar4 & 0xffff) - 1;
    local_10 = 0;
    uVar4 = FUN_0051d4c8(param_1,4);
    uVar4 = uVar4 & 0xffff;
    local_18 = uVar4 - 1;
    bVar1 = true;
    while ((local_c <= local_14 && (bVar1))) {
      uVar8 = uVar4;
      iVar9 = local_10;
      if (-1 < local_18) {
        do {
          cVar3 = FUN_0051e2c4(param_1,local_c,iVar9);
          if (cVar3 != cVar2) {
            bVar1 = false;
            break;
          }
          uVar8 = uVar8 - 1;
          iVar9 = iVar9 + 1;
        } while (uVar8 != 0);
      }
      if (bVar1) {
        local_c = local_c + 1;
      }
    }
    bVar1 = true;
    while ((local_c <= local_14 && (bVar1))) {
      uVar8 = uVar4;
      iVar9 = local_10;
      if (-1 < local_18) {
        do {
          cVar3 = FUN_0051e2c4(param_1,local_14,iVar9);
          if (cVar3 != cVar2) {
            bVar1 = false;
            break;
          }
          uVar8 = uVar8 - 1;
          iVar9 = iVar9 + 1;
        } while (uVar8 != 0);
      }
      if (bVar1) {
        local_14 = local_14 + -1;
      }
    }
    if (local_c <= local_14) {
      bVar1 = true;
      while ((local_10 <= local_18 && (bVar1))) {
        if (local_c <= local_14) {
          iVar5 = (local_14 - local_c) + 1;
          iVar9 = local_c;
          do {
            cVar3 = FUN_0051e2c4(param_1,iVar9,local_10);
            if (cVar3 != cVar2) {
              bVar1 = false;
              break;
            }
            iVar9 = iVar9 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (bVar1) {
          local_10 = local_10 + 1;
        }
      }
      bVar1 = true;
      while ((local_10 <= local_18 && (bVar1))) {
        if (local_c <= local_14) {
          iVar5 = (local_14 - local_c) + 1;
          iVar9 = local_c;
          do {
            cVar3 = FUN_0051e2c4(param_1,iVar9,local_18);
            if (cVar3 != cVar2) {
              bVar1 = false;
              break;
            }
            iVar9 = iVar9 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (bVar1) {
          local_18 = local_18 + -1;
        }
      }
    }
    if ((local_14 < local_c) || (local_18 < local_10)) {
      FUN_0051d208(param_1);
    }
    else {
      iVar10 = (local_14 - local_c) + 1;
      iVar5 = (local_18 - local_10) + 1;
      uVar6 = (undefined4)((longlong)iVar10 * (longlong)iVar5);
      iVar7 = FUN_004027fc(uVar6,(int)((ulonglong)((longlong)iVar10 * (longlong)iVar5) >> 0x20));
      uVar4 = FUN_0051d4c8(param_1,3);
      local_2c = (uVar4 & 0xffff) * local_10 + *(int *)(param_1 + 0x18) + local_c;
      iVar9 = iVar5;
      local_30 = iVar7;
      if (-1 < local_18 - local_10) {
        do {
          FUN_00402a04(local_2c,local_30,iVar10);
          uVar4 = FUN_0051d4c8(param_1,3);
          local_2c = local_2c + (uVar4 & 0xffff);
          iVar9 = iVar9 + -1;
          local_30 = local_30 + iVar10;
        } while (iVar9 != 0);
      }
      FUN_0051d418(param_1);
      *(int *)(param_1 + 0x18) = iVar7;
      *(undefined4 *)(param_1 + 0x1c) = uVar6;
      *(short *)(param_1 + 0x25) = *(short *)(param_1 + 0x25) + (short)local_c;
      *(short *)(param_1 + 0x27) = *(short *)(param_1 + 0x27) + (short)local_10;
      *(short *)(param_1 + 0x29) = (short)iVar10;
      local_28 = (undefined2)iVar5;
      *(undefined2 *)(param_1 + 0x2b) = local_28;
      FUN_0051d460(param_1);
      FUN_0051d47c(param_1);
    }
  }
  return;
}

