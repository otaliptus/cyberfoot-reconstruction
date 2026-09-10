// Address: 006082b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006082b8(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_10 = -1;
  local_14 = -1;
  uVar6 = 0x226;
  local_1c = -1;
  local_18 = -1;
  iVar3 = FUN_0060a6bc(param_1,param_2,0xffffffff);
  if (0 < iVar3) {
    uVar2 = *(uint *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + iVar3 * 0x130);
    if ((int)uVar2 < 0x29) {
      if (uVar2 < 0xb) {
        uVar6 = 0x13;
      }
      else if (uVar2 - 0xb < 10) {
        uVar6 = 0x14;
      }
      else if (uVar2 - 0x15 < 10) {
        uVar6 = 0x15;
      }
      else if (uVar2 - 0x1f < 10) {
        uVar6 = 0x16;
      }
    }
    else if (uVar2 - 0x29 < 10) {
      uVar6 = 0x17;
    }
    else if (uVar2 - 0x33 < 10) {
      uVar6 = 0x18;
    }
    else if (uVar2 - 0x3d < 0x14) {
      uVar6 = 0x19;
    }
    else if (uVar2 - 0x51 < 0x14) {
      uVar6 = 0x1a;
    }
    iVar4 = FUN_004032c8(uVar6);
    if ((iVar4 == 1) && (local_1c = iVar3, 0 < iVar3)) {
      FUN_00607ac0(param_1,iVar3);
      if (param_1 == *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x10 + param_3 * 0x1bc)) {
        iVar4 = 1;
      }
      else {
        iVar4 = 2;
      }
      if (0 < *(int *)(*(int *)PTR_DAT_0066b3b8 + param_3 * 0x1bc + 0x14 + iVar4 * 4)) {
        if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + param_3 * 0x1bc + 4 + iVar4 * 4) * 0x2f8)
             == '\0') || (*PTR_DAT_0066b6c8 != '\0')) {
          local_10 = FUN_0060855c(param_1,iVar3);
        }
        else {
          *(undefined4 *)PTR_DAT_0066b3a0 = 0xffffffff;
          *(undefined4 *)PTR_DAT_0066ae7c =
               *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + param_3 * 0x1bc + 4 + iVar4 * 4);
          *(int *)PTR_DAT_0066b138 = iVar3;
          *(int *)PTR_DAT_0066ad84 = param_3;
          FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005ff330,PTR_DAT_0066aed8);
          (**(code **)(**(int **)PTR_DAT_0066aed8 + 0xec))();
          if (0 < *(int *)PTR_DAT_0066b3a0) {
            local_10 = *(int *)PTR_DAT_0066b3a0;
            iVar5 = 1;
            do {
              if (*(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x3c + iVar5 * 4) == local_10
                 ) {
                *(undefined4 *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x3c + iVar5 * 4) =
                     0xffffffff;
                break;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 != 8);
          }
        }
      }
      if (0 < local_10) {
        local_18 = local_10;
        piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + param_3 * 0x1bc + 0x14 + iVar4 * 4);
        *piVar1 = *piVar1 + -1;
        iVar4 = 1;
        do {
          iVar5 = iVar4;
          if (iVar3 == *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + iVar4 * 4)) break;
          iVar4 = iVar4 + 1;
          iVar5 = local_14;
        } while (iVar4 != 0xc);
        local_14 = iVar5;
        if (0 < local_14) {
          *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + local_10 * 0x130) = 1;
          *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + local_14 * 4) = local_10;
        }
      }
    }
  }
  *param_4 = local_1c;
  param_4[1] = local_18;
  return;
}

