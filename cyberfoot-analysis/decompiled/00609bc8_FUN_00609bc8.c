// Address: 00609bc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00609bc8(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  int *in_FS_OFFSET;
  int in_stack_ffffff98;
  int iStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  int local_38 [4];
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_48 = &stack0xfffffffc;
  puStack_4c = &LAB_0060a353;
  iStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_50;
  local_18 = 0xffffffff;
  bVar2 = false;
  local_c = *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x188 + param_1 * 0x1bc);
  local_10 = *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x18c + param_1 * 0x1bc);
  local_14 = *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 400 + param_1 * 0x1bc);
  puVar4 = &stack0xfffffffc;
  local_8 = param_1;
  if (local_10 < 1) {
    local_10 = FUN_004032c8(2);
    local_10 = local_10 + 1;
    puVar4 = puStack_48;
  }
  puStack_48 = puVar4;
  if (local_c < 1) {
    local_c = FUN_006078a8(5,local_10);
  }
  piVar5 = (int *)(*(int *)PTR_DAT_0066b3b8 + 0x194 + param_1 * 0x1bc);
  *piVar5 = *piVar5 + 1;
  if (*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x194 + param_1 * 0x1bc) == 0xb4) {
    FUN_00609b64(local_8);
  }
  iVar3 = local_8;
  iVar6 = *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x194 + local_8 * 0x1bc);
  if ((0 < iVar6) && (iVar6 % 0xf == 0)) {
    FUN_00607e20(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_8 * 0x1bc),
                 *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x194 + local_8 * 0x1bc));
    FUN_00607e20(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar3 * 0x1bc),
                 *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x194 + iVar3 * 0x1bc));
  }
  piVar5 = (int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x84 + local_10 * 4);
  *piVar5 = *piVar5 + 1;
  iVar6 = 8;
  piVar5 = local_38;
  do {
    *piVar5 = -1;
    iVar3 = local_8;
    piVar5 = piVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  piVar5 = local_38;
  FUN_00608da4(local_c,local_10,local_14,piVar5,local_8,
               *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x14 + local_8 * 0x1bc),
               *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x10 + local_8 * 0x1bc));
  *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x188 + iVar3 * 0x1bc) = local_38[0];
  *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x18c + iVar3 * 0x1bc) = local_38[1];
  *(int *)(*(int *)PTR_DAT_0066b3b8 + 400 + iVar3 * 0x1bc) = local_38[2];
  if (local_38[3] == 1) {
    piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x94 + local_38[1] * 4);
    *piVar1 = *piVar1 + 1;
  }
  else if (local_38[3] == 2) {
    piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x164 + local_38[1] * 4);
    *piVar1 = *piVar1 + 1;
  }
  else if (local_38[3] == 3) {
    iVar6 = FUN_006077f0(local_38[1]);
    piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x8c + iVar6 * 4);
    *piVar1 = *piVar1 + 1;
  }
  else if (local_38[3] == 4) {
    if ((*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x194 + iVar3 * 0x1bc) < 0x5c) &&
       (1 < *(int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x44 + local_28 * 4))) {
      iVar6 = *(int *)(*(int *)PTR_DAT_0066b3b8 + local_8 * 0x1bc + 0x44 + local_28 * 4);
      if (iVar6 < 8) {
        if (iVar6 == 7) {
          iVar6 = FUN_004032c8(100);
          if (1 < iVar6) {
            bVar2 = true;
          }
        }
        else {
          switch(iVar6) {
          case 2:
            iVar6 = FUN_004032c8(100);
            if (0x50 < iVar6) {
              bVar2 = true;
            }
            break;
          case 3:
            iVar6 = FUN_004032c8(100);
            if (0x46 < iVar6) {
              bVar2 = true;
            }
            break;
          case 4:
            iVar6 = FUN_004032c8(100);
            if (0x1e < iVar6) {
              bVar2 = true;
            }
            break;
          case 5:
            iVar6 = FUN_004032c8(100);
            if (1 < iVar6) {
              bVar2 = true;
            }
            break;
          case 6:
            iVar6 = FUN_004032c8(100);
            if (1 < iVar6) {
              bVar2 = true;
            }
          }
        }
      }
      else if (iVar6 == 8) {
        iVar6 = FUN_004032c8(100);
        if (1 < iVar6) {
          bVar2 = true;
        }
      }
      else if (iVar6 == 9) {
        iVar6 = FUN_004032c8(100);
        if (1 < iVar6) {
          bVar2 = true;
        }
      }
      else if (iVar6 == 10) {
        iVar6 = FUN_004032c8(100);
        if (1 < iVar6) {
          bVar2 = true;
        }
      }
      else if ((iVar6 - 0xbU < 0x5a) && (iVar6 = FUN_004032c8(100), 1 < iVar6)) {
        bVar2 = true;
      }
    }
    if ((0x5b < *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x194 + iVar3 * 0x1bc)) &&
       (3 < *(int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x44 + local_28 * 4))) {
      iVar6 = *(int *)(*(int *)PTR_DAT_0066b3b8 + local_8 * 0x1bc + 0x44 + local_28 * 4);
      if (iVar6 < 9) {
        if (iVar6 == 8) {
          iVar6 = FUN_004032c8(100);
          if (1 < iVar6) {
            bVar2 = true;
          }
        }
        else if (iVar6 == 4) {
          iVar6 = FUN_004032c8(100);
          if (0x50 < iVar6) {
            bVar2 = true;
          }
        }
        else if (iVar6 == 5) {
          iVar6 = FUN_004032c8(100);
          if (0x32 < iVar6) {
            bVar2 = true;
          }
        }
        else if (iVar6 == 6) {
          iVar6 = FUN_004032c8(100);
          if (3 < iVar6) {
            bVar2 = true;
          }
        }
        else if ((iVar6 == 7) && (iVar6 = FUN_004032c8(100), 1 < iVar6)) {
          bVar2 = true;
        }
      }
      else if (iVar6 == 9) {
        iVar6 = FUN_004032c8(100);
        if (0 < iVar6) {
          bVar2 = true;
        }
      }
      else if (iVar6 == 10) {
        iVar6 = FUN_004032c8(100);
        if (0 < iVar6) {
          bVar2 = true;
        }
      }
      else if ((iVar6 - 0xbU < 0x5a) && (iVar6 = FUN_004032c8(100), 0 < iVar6)) {
        bVar2 = true;
      }
    }
    if (!bVar2) {
      if ((*(char *)(*(int *)PTR_DAT_0066b238 + 0xf4 +
                    *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x10 + local_8 * 0x1bc) * 0xf8) == '\0') &&
         (*(char *)(*(int *)PTR_DAT_0066b238 + 0xf4 +
                   *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x14 + local_8 * 0x1bc) * 0xf8) == '\0')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
    }
    if (!bVar2) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + local_8 * 0x1bc + 0x8c + local_28 * 4);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + local_8 * 0x1bc + 0x44 + local_28 * 4);
      *piVar1 = *piVar1 + 1;
      in_stack_ffffff98 = -1;
      local_18 = FUN_0060cfa8(local_28,local_24,local_8,0xffffffff,4);
    }
  }
  else if (local_38[3] == 5) {
    piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0xa4 + local_28 * 4);
    *piVar1 = *piVar1 + 1;
  }
  else if (local_38[3] == 6) {
    iVar6 = FUN_006077f0(local_38[1]);
    piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x8c + iVar6 * 4);
    *piVar1 = *piVar1 + 1;
  }
  else if (local_38[3] == 7) {
    piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x8c + local_38[1] * 4);
    *piVar1 = *piVar1 + 1;
  }
  else if (local_38[3] != 8) {
    if (local_38[3] == 9) {
      iVar6 = FUN_006077f0(local_38[1]);
      piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x9c + iVar6 * 4);
      *piVar1 = *piVar1 + 1;
    }
    else if (local_38[3] == 10) {
      iVar6 = FUN_006077f0(local_38[1]);
      piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x9c + iVar6 * 4);
      *piVar1 = *piVar1 + 1;
      iVar6 = FUN_006077f0(local_38[1]);
      piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x164 + iVar6 * 4);
      *piVar1 = *piVar1 + -1;
    }
    else if ((local_38[3] != 0xb) && (local_38[3] != 0xc)) {
      if (local_38[3] == 0xd) {
        in_stack_ffffff98 = local_20;
        local_18 = FUN_0060cfa8(local_28,local_24,local_8,local_20,0xd);
        if (local_20 == 1) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x194 + local_28 * 4);
          *piVar1 = *piVar1 + 1;
        }
        else {
          piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x19c + local_28 * 4);
          *piVar1 = *piVar1 + 1;
        }
      }
      else if (local_38[3] == 0xe) {
        piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x44 + local_28 * 4);
        *piVar1 = *piVar1 + 1;
        piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x8c + local_28 * 4);
        *piVar1 = *piVar1 + 1;
        in_stack_ffffff98 = -1;
        local_18 = FUN_0060cfa8(local_28,local_24,local_8,0xffffffff,0xe);
      }
      else if (local_38[3] == 0xf) {
        piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x44 + local_28 * 4);
        *piVar1 = *piVar1 + 1;
        piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x8c + local_28 * 4);
        *piVar1 = *piVar1 + 1;
        piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x15c + local_28 * 4);
        *piVar1 = *piVar1 + 1;
        in_stack_ffffff98 = -1;
        local_18 = FUN_0060cfa8(local_28,local_24,local_8,0xffffffff,0xf);
      }
      else if (local_38[3] == 0x10) {
        piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x8c + local_28 * 4);
        *piVar1 = *piVar1 + 1;
        piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x15c + local_28 * 4);
        *piVar1 = *piVar1 + 1;
        in_stack_ffffff98 = -1;
        local_18 = FUN_0060cfa8(local_28,local_24,local_8,0xffffffff,0x10);
      }
      else if (local_38[3] != 0x11) {
        if (local_38[3] == 0x12) {
          local_18 = FUN_0060cfa8(local_28,local_24,local_8,local_20,0x12);
          piVar1 = (int *)(*(int *)PTR_DAT_0066b3b8 + iVar3 * 0x1bc + 0x1a4 + local_28 * 4);
          *piVar1 = *piVar1 + 1;
          in_stack_ffffff98 = local_20;
        }
        else if (local_38[3] == 0x13) {
          local_18 = FUN_0060cfa8(local_28,local_24,local_8,local_20,0x13);
          in_stack_ffffff98 = local_20;
        }
      }
    }
  }
  iVar6 = local_8;
  *in_FS_OFFSET = in_stack_ffffff98;
  FUN_00642c6c(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x10 + local_8 * 0x1bc),in_stack_ffffff98,
               piVar5);
  FUN_00642c6c(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x14 + iVar6 * 0x1bc));
  return local_18;
}

